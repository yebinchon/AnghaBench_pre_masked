
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct bridge_softc* if_bridge; } ;
struct bridge_softc {int dummy; } ;
struct bridge_iflist {int bif_stp; } ;


 int FUNC_0 (struct bridge_softc*) ;
 int FUNC_1 (struct bridge_softc*) ;
 int FUNC_2 (struct bridge_softc*) ;
 struct bridge_iflist* FUNC_3 (struct bridge_softc*,struct ifnet*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_0)
{
 struct bridge_softc *VAR_1 = VAR_0->if_bridge;
 struct bridge_iflist *VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_3(VAR_1, VAR_0);
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_1);
  return;
 }
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_4(&VAR_2->bif_stp);
}
