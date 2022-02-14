
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* root; } ;
typedef TYPE_1__ ldns_rbtree_t ;
struct TYPE_7__ {struct TYPE_7__* left; } ;
typedef TYPE_2__ ldns_rbnode_t ;


 TYPE_2__* VAR_0 ;

ldns_rbnode_t *
FUNC_0(const ldns_rbtree_t *VAR_1)
{
 ldns_rbnode_t *VAR_2 = VAR_1->root;

 if (VAR_1->root != VAR_0) {
  for (VAR_2 = VAR_1->root; VAR_2->left != VAR_0; VAR_2 = VAR_2->left);
 }
 return VAR_2;
}
