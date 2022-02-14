
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_softc {int dummy; } ;
struct ifnet {struct nge_softc* if_softc; } ;


 int FUNC_0 (struct nge_softc*) ;
 int FUNC_1 (struct nge_softc*) ;
 int FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0)
{
 struct nge_softc *VAR_1;

 VAR_1 = VAR_0->if_softc;
 FUNC_0(VAR_1);
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);
}
