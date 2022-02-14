
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct compress_tree_node {struct compress_tree_node* right; struct compress_tree_node* left; int labs; int dname; } ;


 int FUNC_0 (int *,int,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_1(struct compress_tree_node** VAR_0, uint8_t* VAR_1,
 int VAR_2, struct compress_tree_node** VAR_3, int* VAR_4,
 struct compress_tree_node*** VAR_5)
{
 int VAR_6, VAR_7, VAR_8=0;
 struct compress_tree_node* VAR_9 = *VAR_0;
 struct compress_tree_node* VAR_10 = 0;
 struct compress_tree_node** VAR_11 = VAR_0;
 while(VAR_9) {
  if((VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_9->dname, VAR_9->labs, &VAR_7))
   == 0) {
   *VAR_4 = VAR_7;
   *VAR_3 = VAR_9;
   return 1;
  }
  if(VAR_6<0) {
   VAR_11 = &VAR_9->left;
   VAR_9 = VAR_9->left;
  } else {
   VAR_8 = VAR_7;
   VAR_10 = VAR_9;
   VAR_11 = &VAR_9->right;
   VAR_9 = VAR_9->right;
  }
 }
 *VAR_5 = VAR_11;
 *VAR_4 = VAR_8;
 *VAR_3 = VAR_10;
 return 0;
}
