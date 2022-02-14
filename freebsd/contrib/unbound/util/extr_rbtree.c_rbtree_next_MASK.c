
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* parent; struct TYPE_5__* right; struct TYPE_5__* left; } ;
typedef TYPE_1__ rbnode_type ;


 TYPE_1__* VAR_0 ;

rbnode_type *
FUNC_0 (rbnode_type *VAR_1)
{
 rbnode_type *VAR_2;

 if (VAR_1->right != VAR_0) {

  for (VAR_1 = VAR_1->right; VAR_1->left != VAR_0; VAR_1 = VAR_1->left);
 } else {
  VAR_2 = VAR_1->parent;
  while (VAR_2 != VAR_0 && VAR_1 == VAR_2->right) {
   VAR_1 = VAR_2;
   VAR_2 = VAR_2->parent;
  }
  VAR_1 = VAR_2;
 }
 return VAR_1;
}
