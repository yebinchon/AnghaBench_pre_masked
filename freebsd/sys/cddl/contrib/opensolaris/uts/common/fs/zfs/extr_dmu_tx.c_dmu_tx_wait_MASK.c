
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int spa_t ;
struct TYPE_10__ {scalar_t__ dp_dirty_total; int dp_lock; int dp_spaceavail_cv; int * dp_spa; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_11__ {scalar_t__ dn_assigned_txg; int dn_mtx; int dn_notxholds; } ;
typedef TYPE_3__ dnode_t ;
struct TYPE_12__ {scalar_t__ tx_txg; scalar_t__ tx_lasttried_txg; TYPE_1__* tx_needassign_txh; int tx_dirty_delayed; scalar_t__ tx_wait_dirty; TYPE_2__* tx_pool; } ;
typedef TYPE_4__ dmu_tx_t ;
struct TYPE_9__ {TYPE_3__* txh_dnode; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_2 ;

void
FUNC_9(dmu_tx_t *VAR_3)
{
 spa_t *VAR_4 = VAR_3->tx_pool->dp_spa;
 dsl_pool_t *VAR_5 = VAR_3->tx_pool;

 FUNC_0(VAR_3->tx_txg == 0);
 FUNC_0(!FUNC_3(VAR_3->tx_pool));

 if (VAR_3->tx_wait_dirty) {





  FUNC_4(&VAR_5->dp_lock);
  while (VAR_5->dp_dirty_total >= VAR_2)
   FUNC_1(&VAR_5->dp_spaceavail_cv, &VAR_5->dp_lock);
  uint64_t VAR_6 = VAR_5->dp_dirty_total;
  FUNC_5(&VAR_5->dp_lock);

  FUNC_2(VAR_3, VAR_6);

  VAR_3->tx_wait_dirty = VAR_0;







  VAR_3->tx_dirty_delayed = VAR_1;
 } else if (FUNC_7(VAR_4) || VAR_3->tx_lasttried_txg == 0) {







  FUNC_8(VAR_5, FUNC_6(VAR_4) + 1);
 } else if (VAR_3->tx_needassign_txh) {




  dnode_t *VAR_7 = VAR_3->tx_needassign_txh->txh_dnode;

  FUNC_4(&VAR_7->dn_mtx);
  while (VAR_7->dn_assigned_txg == VAR_3->tx_lasttried_txg - 1)
   FUNC_1(&VAR_7->dn_notxholds, &VAR_7->dn_mtx);
  FUNC_5(&VAR_7->dn_mtx);
  VAR_3->tx_needassign_txh = ((void*)0);
 } else {





  FUNC_8(VAR_5, FUNC_6(VAR_4) + 1);
 }
}
