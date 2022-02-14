
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_snd; int if_drv_flags; } ;
struct emac_softc {scalar_t__ emac_watchdog_timer; scalar_t__ emac_link; struct ifnet* emac_ifp; } ;


 int FUNC_0 (struct emac_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct emac_softc*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct ifnet*,char*) ;

__attribute__((used)) static void
FUNC_6(struct emac_softc *VAR_3)
{
 struct ifnet *VAR_4;

 FUNC_0(VAR_3);

 if (VAR_3->emac_watchdog_timer == 0 || --VAR_3->emac_watchdog_timer)
  return;

 VAR_4 = VAR_3->emac_ifp;

 if (VAR_3->emac_link == 0) {
  if (VAR_2)
   FUNC_5(VAR_3->emac_ifp, "watchdog timeout "
       "(missed link)\n");
 } else
  FUNC_5(VAR_3->emac_ifp, "watchdog timeout -- resetting\n");

 FUNC_4(VAR_4, VAR_0, 1);
 VAR_4->if_drv_flags &= ~VAR_1;
 FUNC_2(VAR_3);
 if (!FUNC_1(&VAR_4->if_snd))
  FUNC_3(VAR_4);
}
