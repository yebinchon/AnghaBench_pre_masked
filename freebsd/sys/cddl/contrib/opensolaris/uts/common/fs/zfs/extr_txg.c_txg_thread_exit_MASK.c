
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_exit_cv; int tx_threads; } ;
typedef TYPE_1__ tx_state_t ;
typedef int kthread_t ;
typedef int callb_cpr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(tx_state_t *VAR_0, callb_cpr_t *VAR_1, kthread_t **VAR_2)
{
 FUNC_0(*VAR_2 != ((void*)0));
 *VAR_2 = ((void*)0);
 VAR_0->tx_threads--;
 FUNC_2(&VAR_0->tx_exit_cv);
 FUNC_1(VAR_1);
 FUNC_3();
}
