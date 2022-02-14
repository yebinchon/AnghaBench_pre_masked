
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* root; } ;
typedef TYPE_1__ ldns_rbtree_t ;
struct TYPE_10__ {scalar_t__ color; struct TYPE_10__* parent; struct TYPE_10__* left; struct TYPE_10__* right; } ;
typedef TYPE_2__ ldns_rbnode_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(ldns_rbtree_t *VAR_2, ldns_rbnode_t *VAR_3)
{
 ldns_rbnode_t *VAR_4;


 while (VAR_3 != VAR_2->root && VAR_3->parent->color == VAR_1) {

  if (VAR_3->parent == VAR_3->parent->parent->left) {
   VAR_4 = VAR_3->parent->parent->right;


   if (VAR_4->color == VAR_1) {

    VAR_3->parent->color = VAR_0;
    VAR_4->color = VAR_0;


    VAR_3->parent->parent->color = VAR_1;


    VAR_3 = VAR_3->parent->parent;
   } else {

    if (VAR_3 == VAR_3->parent->right) {
     VAR_3 = VAR_3->parent;
     FUNC_0(VAR_2, VAR_3);
    }

    VAR_3->parent->color = VAR_0;
    VAR_3->parent->parent->color = VAR_1;
    FUNC_1(VAR_2, VAR_3->parent->parent);
   }
  } else {
   VAR_4 = VAR_3->parent->parent->left;


   if (VAR_4->color == VAR_1) {

    VAR_3->parent->color = VAR_0;
    VAR_4->color = VAR_0;


    VAR_3->parent->parent->color = VAR_1;


    VAR_3 = VAR_3->parent->parent;
   } else {

    if (VAR_3 == VAR_3->parent->left) {
     VAR_3 = VAR_3->parent;
     FUNC_1(VAR_2, VAR_3);
    }

    VAR_3->parent->color = VAR_0;
    VAR_3->parent->parent->color = VAR_1;
    FUNC_0(VAR_2, VAR_3->parent->parent);
   }
  }
 }
 VAR_2->root->color = VAR_0;
}
