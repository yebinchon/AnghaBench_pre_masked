
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tx_threads; int tx_sync_lock; void* tx_sync_thread; void* tx_quiesce_thread; } ;
typedef TYPE_1__ tx_state_t ;
struct TYPE_7__ {int dp_spa; TYPE_1__ dp_tx; } ;
typedef TYPE_2__ dsl_pool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int *,int,int ,TYPE_2__*,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(dsl_pool_t *VAR_4)
{
 tx_state_t *VAR_5 = &VAR_4->dp_tx;

 FUNC_2(&VAR_5->tx_sync_lock);

 FUNC_1("pool %p\n", VAR_4);

 FUNC_0(VAR_5->tx_threads);

 VAR_5->tx_threads = 2;

 VAR_5->tx_quiesce_thread = FUNC_5(((void*)0), 0, VAR_2,
     VAR_4, 0, FUNC_4(VAR_4->dp_spa), VAR_0, VAR_1);






 VAR_5->tx_sync_thread = FUNC_5(((void*)0), 32<<10, VAR_3,
     VAR_4, 0, FUNC_4(VAR_4->dp_spa), VAR_0, VAR_1);

 FUNC_3(&VAR_5->tx_sync_lock);
}
