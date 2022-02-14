
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zfs_space_check_t ;
typedef int txg_list_t ;
typedef int dsl_syncfunc_t ;
struct TYPE_6__ {int dst_space; int dst_txg; int dst_nowaiter; scalar_t__ dst_error; void* dst_arg; int * dst_syncfunc; int dst_checkfunc; int dst_space_check; TYPE_2__* dst_pool; } ;
typedef TYPE_1__ dsl_sync_task_t ;
struct TYPE_7__ {int dp_sync_tasks; int dp_early_sync_tasks; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_4(dsl_pool_t *VAR_4, dsl_syncfunc_t *VAR_5, void *VAR_6,
    int VAR_7, zfs_space_check_t VAR_8, dmu_tx_t *VAR_9,
    boolean_t VAR_10)
{
 dsl_sync_task_t *VAR_11 = FUNC_2(sizeof (*VAR_11), VAR_2);

 VAR_11->dst_pool = VAR_4;
 VAR_11->dst_txg = FUNC_1(VAR_9);
 VAR_11->dst_space = VAR_7 << VAR_1;
 VAR_11->dst_space_check = VAR_8;
 VAR_11->dst_checkfunc = VAR_3;
 VAR_11->dst_syncfunc = VAR_5;
 VAR_11->dst_arg = VAR_6;
 VAR_11->dst_error = 0;
 VAR_11->dst_nowaiter = VAR_0;

 txg_list_t *VAR_12 = (VAR_10) ?
     &VAR_4->dp_early_sync_tasks : &VAR_4->dp_sync_tasks;
 FUNC_0(FUNC_3(VAR_12, VAR_11, VAR_11->dst_txg));
}
