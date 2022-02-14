
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int visited; scalar_t__ status; struct TYPE_4__* parent; struct TYPE_4__* right; struct TYPE_4__* left; } ;
typedef TYPE_1__ cdg_node_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static cdg_node_t *FUNC_0(cdg_node_t * VAR_1)
{
 cdg_node_t *VAR_2 = VAR_1, *VAR_3 = ((void*)0);

 while (VAR_2) {
  VAR_2->visited = 1;
  if (VAR_2->status == VAR_0) {
   VAR_3 = VAR_2;
   break;
  }
  if (VAR_2->left && !VAR_2->left->visited) {
   VAR_2 = VAR_2->left;
  } else if (VAR_2->right && !VAR_2->right->visited) {
   VAR_2 = VAR_2->right;
  } else {
   if (VAR_2->left)
    VAR_2->left->visited = 0;
   if (VAR_2->right)
    VAR_2->right->visited = 0;
   if (VAR_2->parent == ((void*)0))
    break;
   else
    VAR_2 = VAR_2->parent;
  }
 }


 while (VAR_2) {
  VAR_2->visited = 0;
  if (VAR_2->left)
   VAR_2->left->visited = 0;
  if (VAR_2->right)
   VAR_2->right->visited = 0;
  VAR_2 = VAR_2->parent;
 }

 return VAR_3;
}
