
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_flags; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtnet_softc*) ;
 int FUNC_1 (struct vtnet_softc*) ;
 int FUNC_2 (struct vtnet_softc*) ;

__attribute__((used)) static void
FUNC_3(struct vtnet_softc *VAR_2)
{
 struct ifnet *VAR_3;

 VAR_3 = VAR_2->vtnet_ifp;

 if (VAR_2->vtnet_flags & VAR_1) {

  FUNC_0(VAR_2);

  FUNC_1(VAR_2);
 }

 if (VAR_3->if_capenable & VAR_0)
  FUNC_2(VAR_2);
}
