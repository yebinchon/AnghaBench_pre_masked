
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {int sc_wdog_ch; struct ifnet* sc_ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct lance_softc*) ;
 int FUNC_1 (struct lance_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct lance_softc*) ;

void
FUNC_6(struct lance_softc *VAR_0)
{
 struct ifnet *VAR_1 = VAR_0->sc_ifp;

 FUNC_0(VAR_0);
 FUNC_5(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->sc_wdog_ch);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
}
