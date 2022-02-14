
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int tx_open_txg; int tx_syncing_txg; int tx_synced_txg; int tx_sync_lock; int tx_quiesce_more_cv; } ;
typedef TYPE_1__ tx_state_t ;
typedef scalar_t__ hrtime_t ;
struct TYPE_6__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int *,int *,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(dsl_pool_t *VAR_0, uint64_t VAR_1, hrtime_t VAR_2, hrtime_t VAR_3)
{
 tx_state_t *VAR_4 = &VAR_0->dp_tx;
 hrtime_t VAR_5 = FUNC_1();


 if (VAR_4->tx_open_txg > VAR_1 ||
     VAR_4->tx_syncing_txg == VAR_1-1 || VAR_4->tx_synced_txg == VAR_1-1)
  return;

 FUNC_2(&VAR_4->tx_sync_lock);
 if (VAR_4->tx_open_txg > VAR_1 || VAR_4->tx_synced_txg == VAR_1-1) {
  FUNC_3(&VAR_4->tx_sync_lock);
  return;
 }

 while (FUNC_1() - VAR_5 < VAR_2 &&
     VAR_4->tx_syncing_txg < VAR_1-1 && !FUNC_4(VAR_0)) {
  (void) FUNC_0(&VAR_4->tx_quiesce_more_cv,
      &VAR_4->tx_sync_lock, VAR_2, VAR_3, 0);
 }

 FUNC_3(&VAR_4->tx_sync_lock);
}
