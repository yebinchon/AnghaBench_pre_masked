
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* root; } ;
typedef TYPE_1__ rbtree_type ;
struct TYPE_7__ {struct TYPE_7__* parent; struct TYPE_7__* left; struct TYPE_7__* right; } ;
typedef TYPE_2__ rbnode_type ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_0(rbtree_type *VAR_1, rbnode_type *VAR_2)
{
 rbnode_type *VAR_3 = VAR_2->right;
 VAR_2->right = VAR_3->left;
 if (VAR_3->left != VAR_0)
  VAR_3->left->parent = VAR_2;

 VAR_3->parent = VAR_2->parent;

 if (VAR_2->parent != VAR_0) {
  if (VAR_2 == VAR_2->parent->left) {
   VAR_2->parent->left = VAR_3;
  } else {
   VAR_2->parent->right = VAR_3;
  }
 } else {
  VAR_1->root = VAR_3;
 }
 VAR_3->left = VAR_2;
 VAR_2->parent = VAR_3;
}
