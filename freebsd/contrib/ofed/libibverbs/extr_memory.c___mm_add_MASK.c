
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {scalar_t__ start; int color; struct ibv_mem_node* right; struct ibv_mem_node* left; struct ibv_mem_node* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct ibv_mem_node*) ;
 struct ibv_mem_node* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct ibv_mem_node *VAR_2)
{
 struct ibv_mem_node *VAR_3, *VAR_4 = ((void*)0);

 VAR_3 = VAR_1;
 while (VAR_3) {
  VAR_4 = VAR_3;
  if (VAR_3->start < VAR_2->start)
   VAR_3 = VAR_3->right;
  else
   VAR_3 = VAR_3->left;
 }

 if (VAR_4->start < VAR_2->start)
  VAR_4->right = VAR_2;
 else
  VAR_4->left = VAR_2;

 VAR_2->parent = VAR_4;
 VAR_2->left = ((void*)0);
 VAR_2->right = ((void*)0);

 VAR_2->color = VAR_0;
 FUNC_0(VAR_2);
}
