
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int cmp; } ;
typedef TYPE_1__ ldns_rbtree_t ;
struct TYPE_14__ {int key; } ;
typedef TYPE_2__ ldns_rbnode_t ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;

ldns_rbtree_t *
FUNC_4(ldns_rbtree_t *VAR_1,
      size_t VAR_2)
{
 ldns_rbtree_t *VAR_3;
 ldns_rbnode_t *VAR_4;
 ldns_rbnode_t *VAR_5;
 size_t VAR_6 = 0;

 VAR_3 = FUNC_0(VAR_1->cmp);

 VAR_4 = FUNC_2(VAR_1);
 while (VAR_6 < VAR_2 && VAR_4 != VAR_0) {
  VAR_5 = FUNC_1(VAR_1, VAR_4->key);
  (void)FUNC_3(VAR_3, VAR_5);
  VAR_4 = FUNC_2(VAR_1);
  VAR_6++;
 }

 return VAR_3;
}
