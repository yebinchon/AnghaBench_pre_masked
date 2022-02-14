
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* root; } ;
typedef TYPE_1__ rbtree_type ;
struct TYPE_7__ {struct TYPE_7__* right; } ;
typedef TYPE_2__ rbnode_type ;


 TYPE_2__* VAR_0 ;

rbnode_type *
FUNC_0 (rbtree_type *VAR_1)
{
 rbnode_type *VAR_2;

 for (VAR_2 = VAR_1->root; VAR_2->right != VAR_0; VAR_2 = VAR_2->right);
 return VAR_2;
}
