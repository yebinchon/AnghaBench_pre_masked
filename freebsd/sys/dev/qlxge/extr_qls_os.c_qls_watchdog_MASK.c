
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ifq_head; } ;
struct ifnet {TYPE_2__ if_snd; } ;
struct TYPE_5__ {int qla_watchdog_pause; scalar_t__ qla_watchdog_exit; } ;
struct TYPE_7__ {int qla_watchdog_exited; int qla_watchdog_paused; int watchdog_ticks; int tx_callout; int tx_task; int tx_tq; int err_task; int err_tq; scalar_t__ err_inject; scalar_t__ qla_initiate_recovery; TYPE_1__ flags; struct ifnet* ifp; } ;
typedef TYPE_3__ qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int *,int ,void (*) (void*),TYPE_3__*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 qla_host_t *VAR_2 = VAR_1;
 struct ifnet *VAR_3;

 VAR_3 = VAR_2->ifp;

        if (VAR_2->flags.qla_watchdog_exit) {
  VAR_2->qla_watchdog_exited = 1;
  return;
 }
 VAR_2->qla_watchdog_exited = 0;

 if (!VAR_2->flags.qla_watchdog_pause) {

  if (VAR_2->qla_initiate_recovery) {

   VAR_2->qla_watchdog_paused = 1;
   VAR_2->qla_initiate_recovery = 0;
   VAR_2->err_inject = 0;
   FUNC_2(VAR_2->err_tq, &VAR_2->err_task);

  } else if ((VAR_3->if_snd.ifq_head != ((void*)0)) && FUNC_0(VAR_3)) {

   FUNC_2(VAR_2->tx_tq, &VAR_2->tx_task);
  }

  VAR_2->qla_watchdog_paused = 0;
 } else {
  VAR_2->qla_watchdog_paused = 1;
 }

 VAR_2->watchdog_ticks = VAR_2->watchdog_ticks++ % 1000;
 FUNC_1(&VAR_2->tx_callout, VAR_0,
  FUNC_3, VAR_2);

 return;
}
