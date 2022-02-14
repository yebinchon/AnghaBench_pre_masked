
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* root; } ;
typedef TYPE_1__ ldns_rbtree_t ;
struct TYPE_7__ {struct TYPE_7__* parent; struct TYPE_7__* right; struct TYPE_7__* left; } ;
typedef TYPE_2__ ldns_rbnode_t ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void
FUNC_0(ldns_rbtree_t *VAR_1, ldns_rbnode_t *VAR_2)
{
 ldns_rbnode_t *VAR_3 = VAR_2->left;
 VAR_2->left = VAR_3->right;
 if (VAR_3->right != VAR_0)
  VAR_3->right->parent = VAR_2;

 VAR_3->parent = VAR_2->parent;

 if (VAR_2->parent != VAR_0) {
  if (VAR_2 == VAR_2->parent->right) {
   VAR_2->parent->right = VAR_3;
  } else {
   VAR_2->parent->left = VAR_3;
  }
 } else {
  VAR_1->root = VAR_3;
 }
 VAR_3->right = VAR_2;
 VAR_2->parent = VAR_3;
}
