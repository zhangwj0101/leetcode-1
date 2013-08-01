vector<vector<int> > result;
bool visited[1000];

void search(vector<int> &num, vector<int> &tmp){
    bool hasone = false;
    
    for (int i = 0; i != num.size(); i++){
        if  (!visited[i]){
            visited[i] = true;
            tmp.push_back(num[i]);
            search(num, tmp);
            tmp.pop_back();
            visited[i] = false;
            hasone = true;
        }
    }
    if (!hasone){
        result.push_back(tmp);
    }
}

class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int len = num.size();
        result.clear();
        memset(visited, 0, sizeof(visited));
        vector<int> tmp;
        search(num, tmp);
        
        return result;
    }
};