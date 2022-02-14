
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* th_cpu; } ;
typedef TYPE_1__ txg_handle_t ;
struct TYPE_5__ {int tc_open_lock; int tc_lock; } ;
typedef TYPE_2__ tx_cpu_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(txg_handle_t *VAR_0)
{
 tx_cpu_t *VAR_1 = VAR_0->th_cpu;

 FUNC_0(!FUNC_1(&VAR_1->tc_lock));
 FUNC_2(&VAR_1->tc_open_lock);
}
