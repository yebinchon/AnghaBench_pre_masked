
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* root; } ;
typedef TYPE_1__ ldns_rbtree_t ;
struct TYPE_9__ {struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_2__ ldns_rbnode_t ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(ldns_rbtree_t* VAR_1, ldns_rbnode_t* VAR_2, ldns_rbnode_t* VAR_3, ldns_rbnode_t* VAR_4)
{
 if(VAR_2 == VAR_0)
 {
  if(VAR_1->root == VAR_3) VAR_1->root = VAR_4;
  return;
 }
 if(VAR_2->left == VAR_3) VAR_2->left = VAR_4;
 if(VAR_2->right == VAR_3) VAR_2->right = VAR_4;
}
