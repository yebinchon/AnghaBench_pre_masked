
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int * txsd_status; int txsd_dmap; int txsd_dtag; } ;
struct et_softc {scalar_t__ watchdog_timer; TYPE_2__* ifp; TYPE_1__ sc_tx_status; } ;
struct TYPE_5__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct et_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct et_softc*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct et_softc *VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(VAR_4);

 if (VAR_4->watchdog_timer == 0 || --VAR_4->watchdog_timer)
  return (0);

 FUNC_1(VAR_4->sc_tx_status.txsd_dtag, VAR_4->sc_tx_status.txsd_dmap,
     VAR_0);
 VAR_5 = FUNC_5(*(VAR_4->sc_tx_status.txsd_status));
 FUNC_4(VAR_4->ifp, "watchdog timed out (0x%08x) -- resetting\n",
     VAR_5);

 FUNC_3(VAR_4->ifp, VAR_2, 1);
 VAR_4->ifp->if_drv_flags &= ~VAR_3;
 FUNC_2(VAR_4);
 return (VAR_1);
}
