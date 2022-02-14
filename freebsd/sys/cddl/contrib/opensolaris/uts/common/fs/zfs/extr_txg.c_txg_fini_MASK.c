
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* tx_cpu; int * tx_commit_cb_taskq; int tx_exit_cv; int tx_quiesce_done_cv; int tx_quiesce_more_cv; int tx_sync_done_cv; int tx_sync_more_cv; int tx_sync_lock; int tx_threads; } ;
typedef TYPE_1__ tx_state_t ;
typedef int tx_cpu_t ;
struct TYPE_7__ {TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_8__ {int * tc_callbacks; int * tc_cv; int tc_lock; int tc_open_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(dsl_pool_t *VAR_2)
{
 tx_state_t *VAR_3 = &VAR_2->dp_tx;
 int VAR_4;

 FUNC_0(VAR_3->tx_threads);

 FUNC_5(&VAR_3->tx_sync_lock);

 FUNC_2(&VAR_3->tx_sync_more_cv);
 FUNC_2(&VAR_3->tx_sync_done_cv);
 FUNC_2(&VAR_3->tx_quiesce_more_cv);
 FUNC_2(&VAR_3->tx_quiesce_done_cv);
 FUNC_2(&VAR_3->tx_exit_cv);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  int VAR_5;

  FUNC_5(&VAR_3->tx_cpu[VAR_4].tc_open_lock);
  FUNC_5(&VAR_3->tx_cpu[VAR_4].tc_lock);
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   FUNC_2(&VAR_3->tx_cpu[VAR_4].tc_cv[VAR_5]);
   FUNC_4(&VAR_3->tx_cpu[VAR_4].tc_callbacks[VAR_5]);
  }
 }

 if (VAR_3->tx_commit_cb_taskq != ((void*)0))
  FUNC_6(VAR_3->tx_commit_cb_taskq);

 FUNC_3(VAR_3->tx_cpu, VAR_1 * sizeof (tx_cpu_t));

 FUNC_1(VAR_3, sizeof (tx_state_t));
}
