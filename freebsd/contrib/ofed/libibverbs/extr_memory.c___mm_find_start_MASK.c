
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {uintptr_t start; uintptr_t end; struct ibv_mem_node* left; struct ibv_mem_node* right; } ;


 struct ibv_mem_node* VAR_0 ;

__attribute__((used)) static struct ibv_mem_node *FUNC_0(uintptr_t VAR_1, uintptr_t VAR_2)
{
 struct ibv_mem_node *VAR_3 = VAR_0;

 while (VAR_3) {
  if (VAR_3->start <= VAR_1 && VAR_3->end >= VAR_1)
   break;

  if (VAR_3->start < VAR_1)
   VAR_3 = VAR_3->right;
  else
   VAR_3 = VAR_3->left;
 }

 return VAR_3;
}
