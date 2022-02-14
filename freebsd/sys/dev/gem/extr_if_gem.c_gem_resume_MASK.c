
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_flags; } ;
struct gem_softc {int sc_flags; struct ifnet* sc_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct gem_softc*) ;
 int FUNC_1 (struct gem_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct gem_softc*) ;

void
FUNC_3(struct gem_softc *VAR_2)
{
 struct ifnet *VAR_3 = VAR_2->sc_ifp;

 FUNC_0(VAR_2);




 VAR_2->sc_flags &= ~VAR_0;
 if (VAR_3->if_flags & VAR_1)
  FUNC_2(VAR_2);
 FUNC_1(VAR_2);
}
