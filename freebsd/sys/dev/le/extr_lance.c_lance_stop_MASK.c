
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lance_softc {int (* sc_wrcsr ) (struct lance_softc*,int ,int ) ;scalar_t__ sc_wdog_timer; int sc_wdog_ch; struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lance_softc*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lance_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct lance_softc *VAR_5)
{
 struct ifnet *VAR_6 = VAR_5->sc_ifp;

 FUNC_0(VAR_5, VAR_4);




 VAR_6->if_drv_flags &= ~(VAR_1 | VAR_0);
 FUNC_1(&VAR_5->sc_wdog_ch);
 VAR_5->sc_wdog_timer = 0;

 (*VAR_5->sc_wrcsr)(VAR_5, VAR_3, VAR_2);
}
