
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {struct ibv_mem_node* parent; struct ibv_mem_node* right; struct ibv_mem_node* left; } ;


 struct ibv_mem_node* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ibv_mem_node *VAR_1)
{
 struct ibv_mem_node *VAR_2;

 VAR_2 = VAR_1->left;

 VAR_1->left = VAR_2->right;
 if (VAR_1->left)
  VAR_1->left->parent = VAR_1;

 if (VAR_1->parent) {
  if (VAR_1->parent->right == VAR_1)
   VAR_1->parent->right = VAR_2;
  else
   VAR_1->parent->left = VAR_2;
 } else
  VAR_0 = VAR_2;

 VAR_2->parent = VAR_1->parent;

 VAR_2->right = VAR_1;
 VAR_1->parent = VAR_2;
}
