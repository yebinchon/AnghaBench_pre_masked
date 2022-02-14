
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_snd; int if_drv_flags; } ;
struct dc_softc {scalar_t__ dc_wdog_timer; int dc_dev; struct ifnet* dc_ifp; int dc_wdog_ch; } ;


 int FUNC_0 (struct dc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,void (*) (void*),struct dc_softc*) ;
 int FUNC_3 (struct dc_softc*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_2 ;
 int FUNC_6 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct dc_softc *VAR_4 = VAR_3;
 struct ifnet *VAR_5;

 FUNC_0(VAR_4);

 if (VAR_4->dc_wdog_timer == 0 || --VAR_4->dc_wdog_timer != 0) {
  FUNC_2(&VAR_4->dc_wdog_ch, VAR_2, FUNC_7, VAR_4);
  return;
 }

 VAR_5 = VAR_4->dc_ifp;
 FUNC_6(VAR_5, VAR_0, 1);
 FUNC_5(VAR_4->dc_dev, "watchdog timeout\n");

 VAR_5->if_drv_flags &= ~VAR_1;
 FUNC_3(VAR_4);

 if (!FUNC_1(&VAR_5->if_snd))
  FUNC_4(VAR_5);
}
