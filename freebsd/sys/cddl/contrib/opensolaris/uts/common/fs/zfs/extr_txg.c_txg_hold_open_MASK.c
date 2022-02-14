
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_7__ {size_t th_txg; TYPE_3__* th_cpu; } ;
typedef TYPE_1__ txg_handle_t ;
struct TYPE_8__ {size_t tx_open_txg; TYPE_3__* tx_cpu; } ;
typedef TYPE_2__ tx_state_t ;
struct TYPE_9__ {int tc_lock; int * tc_count; int tc_open_lock; } ;
typedef TYPE_3__ tx_cpu_t ;
struct TYPE_10__ {TYPE_2__ dp_tx; } ;
typedef TYPE_4__ dsl_pool_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

uint64_t
FUNC_2(dsl_pool_t *VAR_2, txg_handle_t *VAR_3)
{
 tx_state_t *VAR_4 = &VAR_2->dp_tx;
 tx_cpu_t *VAR_5 = &VAR_4->tx_cpu[VAR_0];
 uint64_t VAR_6;

 FUNC_0(&VAR_5->tc_open_lock);
 VAR_6 = VAR_4->tx_open_txg;

 FUNC_0(&VAR_5->tc_lock);
 VAR_5->tc_count[VAR_6 & VAR_1]++;
 FUNC_1(&VAR_5->tc_lock);

 VAR_3->th_cpu = VAR_5;
 VAR_3->th_txg = VAR_6;

 return (VAR_6);
}
