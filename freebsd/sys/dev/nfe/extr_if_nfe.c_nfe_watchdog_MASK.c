
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ queued; } ;
struct nfe_softc {scalar_t__ nfe_watchdog_timer; int nfe_force_tx; int rxtxctl; TYPE_1__ txq; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfe_softc*,int ,int) ;
 struct nfe_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct nfe_softc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct nfe_softc*) ;

__attribute__((used)) static void
FUNC_9(if_t VAR_4)
{
 struct nfe_softc *VAR_5 = FUNC_1(VAR_4);

 if (VAR_5->nfe_watchdog_timer == 0 || --VAR_5->nfe_watchdog_timer)
  return;


 FUNC_8(VAR_5);
 if (VAR_5->txq.queued == 0) {
  FUNC_3(VAR_4, "watchdog timeout (missed Tx interrupts) "
      "-- recovering\n");
  if (!FUNC_4(VAR_4))
   FUNC_7(VAR_4);
  return;
 }

 VAR_5->nfe_force_tx++;
 if (VAR_5->nfe_force_tx <= 3) {




  FUNC_0(VAR_5, VAR_2, VAR_3 | VAR_5->rxtxctl);
  return;
 }
 VAR_5->nfe_force_tx = 0;

 FUNC_3(VAR_4, "watchdog timeout\n");

 FUNC_5(VAR_4, 0, VAR_1);
 FUNC_2(VAR_4, VAR_0, 1);
 FUNC_6(VAR_5);
}
