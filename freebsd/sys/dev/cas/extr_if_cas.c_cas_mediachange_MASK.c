
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct cas_softc* if_softc; } ;
struct cas_softc {int sc_mii; } ;


 int FUNC_0 (struct cas_softc*) ;
 int FUNC_1 (struct cas_softc*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_0)
{
 struct cas_softc *VAR_1 = VAR_0->if_softc;
 int VAR_2;



 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_1->sc_mii);
 FUNC_1(VAR_1);
 return (VAR_2);
}
