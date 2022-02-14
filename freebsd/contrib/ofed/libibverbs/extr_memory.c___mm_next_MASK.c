
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {struct ibv_mem_node* parent; struct ibv_mem_node* right; struct ibv_mem_node* left; } ;



__attribute__((used)) static struct ibv_mem_node *FUNC_0(struct ibv_mem_node *VAR_0)
{
 if (VAR_0->right) {
  VAR_0 = VAR_0->right;
  while (VAR_0->left)
   VAR_0 = VAR_0->left;
 } else {
  while (VAR_0->parent && VAR_0 == VAR_0->parent->right)
   VAR_0 = VAR_0->parent;

  VAR_0 = VAR_0->parent;
 }

 return VAR_0;
}
