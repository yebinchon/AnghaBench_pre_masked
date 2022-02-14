
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* cmp ) (int ,int ) ;TYPE_2__* root; int count; } ;
typedef TYPE_1__ ldns_rbtree_t ;
struct TYPE_10__ {struct TYPE_10__* right; struct TYPE_10__* left; int color; struct TYPE_10__* parent; int key; } ;
typedef TYPE_2__ ldns_rbnode_t ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;

ldns_rbnode_t *
FUNC_2 (ldns_rbtree_t *VAR_2, ldns_rbnode_t *VAR_3)
{

 int VAR_4 = 0;


 ldns_rbnode_t *VAR_5 = VAR_2->root;
 ldns_rbnode_t *VAR_6 = VAR_0;


 while (VAR_5 != VAR_0) {

  if ((VAR_4 = VAR_2->cmp(VAR_3->key, VAR_5->key)) == 0) {
   return ((void*)0);
  }
  VAR_6 = VAR_5;

  if (VAR_4 < 0) {
   VAR_5 = VAR_5->left;
  } else {
   VAR_5 = VAR_5->right;
  }
 }


 VAR_3->parent = VAR_6;
 VAR_3->left = VAR_3->right = VAR_0;
 VAR_3->color = VAR_1;
 VAR_2->count++;


 if (VAR_6 != VAR_0) {
  if (VAR_4 < 0) {
   VAR_6->left = VAR_3;
  } else {
   VAR_6->right = VAR_3;
  }
 } else {
  VAR_2->root = VAR_3;
 }


 FUNC_0(VAR_2, VAR_3);

 return VAR_3;
}
