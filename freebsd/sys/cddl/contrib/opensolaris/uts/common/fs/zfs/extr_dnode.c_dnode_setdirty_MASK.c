
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_16__ {int os_dsl_dataset; int ** os_dirty_dnodes; } ;
typedef TYPE_2__ objset_t ;
typedef int multilist_t ;
typedef int multilist_sublist_t ;
struct TYPE_17__ {scalar_t__ dn_free_txg; scalar_t__ dn_datablksz; int dn_dbuf; int dn_object; int * dn_next_bonustype; int * dn_next_blksz; int * dn_next_bonuslen; int dn_dbufs; int dn_holds; int * dn_dirty_link; int dn_mtx; scalar_t__ dn_allocated_txg; TYPE_1__* dn_phys; TYPE_2__* dn_objset; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_18__ {size_t tx_txg; } ;
typedef TYPE_4__ dmu_tx_t ;
struct TYPE_15__ {scalar_t__ dn_type; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 size_t VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,int ,TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*,void*) ;
 int FUNC_9 (int ,char*,int ,size_t) ;
 int FUNC_10 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 int * FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

void
FUNC_18(dnode_t *VAR_2, dmu_tx_t *VAR_3)
{
 objset_t *VAR_4 = VAR_2->dn_objset;
 uint64_t VAR_5 = VAR_3->tx_txg;

 if (FUNC_2(VAR_2->dn_object)) {
  FUNC_10(VAR_4->os_dsl_dataset, VAR_3);
  return;
 }

 FUNC_3(VAR_2);
 FUNC_7(VAR_2, VAR_0, VAR_3);

 multilist_t *VAR_6 = VAR_4->os_dirty_dnodes[VAR_5 & VAR_1];
 multilist_sublist_t *VAR_7 = FUNC_13(VAR_6, VAR_2);




 if (FUNC_11(&VAR_2->dn_dirty_link[VAR_5 & VAR_1])) {
  FUNC_14(VAR_7);
  return;
 }

 FUNC_0(!FUNC_17(&VAR_2->dn_holds) ||
     !FUNC_5(&VAR_2->dn_dbufs));
 FUNC_0(VAR_2->dn_datablksz != 0);
 FUNC_1(VAR_2->dn_next_bonuslen[VAR_5&VAR_1]);
 FUNC_1(VAR_2->dn_next_blksz[VAR_5&VAR_1]);
 FUNC_1(VAR_2->dn_next_bonustype[VAR_5&VAR_1]);

 FUNC_9(VAR_4->os_dsl_dataset, "obj=%llu txg=%llu\n",
     VAR_2->dn_object, VAR_5);

 FUNC_12(VAR_7, VAR_2);

 FUNC_14(VAR_7);
 FUNC_4(FUNC_8(VAR_2, (void *)(uintptr_t)VAR_3->tx_txg));

 (void) FUNC_6(VAR_2->dn_dbuf, VAR_3);

 FUNC_10(VAR_4->os_dsl_dataset, VAR_3);
}
