
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* cmp ) (void const*,int ) ;TYPE_2__* root; } ;
typedef TYPE_1__ ldns_rbtree_t ;
struct TYPE_7__ {struct TYPE_7__* right; struct TYPE_7__* left; int key; } ;
typedef TYPE_2__ ldns_rbnode_t ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (void const*,int ) ;

int
FUNC_1(ldns_rbtree_t *VAR_1, const void *VAR_2, ldns_rbnode_t **VAR_3)
{
 int VAR_4;
 ldns_rbnode_t *VAR_5;


 VAR_5 = VAR_1->root;

 *VAR_3 = ((void*)0);


 while (VAR_5 != VAR_0) {
  VAR_4 = VAR_1->cmp(VAR_2, VAR_5->key);
  if (VAR_4 == 0) {

   *VAR_3 = VAR_5;
   return 1;
  }
  if (VAR_4 < 0) {
   VAR_5 = VAR_5->left;
  } else {

   *VAR_3 = VAR_5;
   VAR_5 = VAR_5->right;
  }
 }
 return 0;
}
