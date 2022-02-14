
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * ifq_head; } ;
struct ifnet {TYPE_2__ if_snd; } ;
struct TYPE_8__ {scalar_t__ txr_comp; int * tx_cons; } ;
typedef TYPE_3__ qla_hw_t ;
struct TYPE_6__ {int qla_watchdog_pause; scalar_t__ qla_watchdog_exit; } ;
struct TYPE_9__ {int watchdog_ticks; int tx_callout; int tx_task; int tx_tq; TYPE_1__ flags; struct ifnet* ifp; TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int *,int ,void (*) (void*),TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 qla_host_t *VAR_2 = VAR_1;
 qla_hw_t *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = &VAR_2->hw;
 VAR_4 = VAR_2->ifp;

        if (VAR_2->flags.qla_watchdog_exit)
  return;

 if (!VAR_2->flags.qla_watchdog_pause) {
  if (FUNC_2(*(VAR_3->tx_cons)) != VAR_3->txr_comp) {
   FUNC_3(VAR_2->tx_tq, &VAR_2->tx_task);
  } else if ((VAR_4->if_snd.ifq_head != ((void*)0)) && FUNC_0(VAR_4)) {
   FUNC_3(VAR_2->tx_tq, &VAR_2->tx_task);
  }
 }
 VAR_2->watchdog_ticks = VAR_2->watchdog_ticks++ % 1000;
 FUNC_1(&VAR_2->tx_callout, VAR_0,
  FUNC_4, VAR_2);
}
