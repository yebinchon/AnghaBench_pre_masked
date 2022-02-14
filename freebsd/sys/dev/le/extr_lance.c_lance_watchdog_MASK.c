
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {scalar_t__ sc_wdog_timer; int sc_wdog_ch; struct ifnet* sc_ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct lance_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,void (*) (void*),struct lance_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct ifnet*,int ,int) ;
 int FUNC_3 (struct ifnet*,char*) ;
 int FUNC_4 (struct lance_softc*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct lance_softc *VAR_4 = (struct lance_softc *)VAR_3;
 struct ifnet *VAR_5 = VAR_4->sc_ifp;

 FUNC_0(VAR_4, VAR_1);

 if (VAR_4->sc_wdog_timer == 0 || --VAR_4->sc_wdog_timer != 0) {
  FUNC_1(&VAR_4->sc_wdog_ch, VAR_2, FUNC_5, VAR_4);
  return;
 }

 FUNC_3(VAR_5, "device timeout\n");
 FUNC_2(VAR_5, VAR_0, 1);
 FUNC_4(VAR_4);
}
