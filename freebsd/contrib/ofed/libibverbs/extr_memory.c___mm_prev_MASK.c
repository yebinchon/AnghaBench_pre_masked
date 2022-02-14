
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {struct ibv_mem_node* parent; struct ibv_mem_node* left; struct ibv_mem_node* right; } ;



__attribute__((used)) static struct ibv_mem_node *FUNC_0(struct ibv_mem_node *VAR_0)
{
 if (VAR_0->left) {
  VAR_0 = VAR_0->left;
  while (VAR_0->right)
   VAR_0 = VAR_0->right;
 } else {
  while (VAR_0->parent && VAR_0 == VAR_0->parent->left)
   VAR_0 = VAR_0->parent;

  VAR_0 = VAR_0->parent;
 }

 return VAR_0;
}
