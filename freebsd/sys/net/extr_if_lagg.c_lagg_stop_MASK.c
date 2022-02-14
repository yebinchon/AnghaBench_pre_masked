
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lagg_softc {struct ifnet* sc_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct lagg_softc*) ;
 int FUNC_1 (struct lagg_softc*) ;

__attribute__((used)) static void
FUNC_2(struct lagg_softc *VAR_1)
{
 struct ifnet *VAR_2 = VAR_1->sc_ifp;

 FUNC_0(VAR_1);

 if ((VAR_2->if_drv_flags & VAR_0) == 0)
  return;

 VAR_2->if_drv_flags &= ~VAR_0;

 FUNC_1(VAR_1);
}
