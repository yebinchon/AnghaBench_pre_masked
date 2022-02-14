
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; struct bridge_softc* if_softc; } ;
struct bridge_softc {int sc_stp; int sc_brcallout; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bridge_softc*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_2, int VAR_3)
{
 struct bridge_softc *VAR_4 = VAR_2->if_softc;

 FUNC_0(VAR_4);

 if ((VAR_2->if_drv_flags & VAR_1) == 0)
  return;

 FUNC_3(&VAR_4->sc_brcallout);
 FUNC_2(&VAR_4->sc_stp);

 FUNC_1(VAR_4, VAR_0);

 VAR_2->if_drv_flags &= ~VAR_1;
}
