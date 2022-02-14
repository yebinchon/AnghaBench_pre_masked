
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct gem_softc {struct ifnet* sc_ifp; } ;


 int FUNC_0 (struct gem_softc*) ;
 int FUNC_1 (struct gem_softc*) ;
 int FUNC_2 (struct ifnet*,int ) ;

void
FUNC_3(struct gem_softc *VAR_0)
{
 struct ifnet *VAR_1 = VAR_0->sc_ifp;

 FUNC_0(VAR_0);
 FUNC_2(VAR_1, 0);
 FUNC_1(VAR_0);
}
