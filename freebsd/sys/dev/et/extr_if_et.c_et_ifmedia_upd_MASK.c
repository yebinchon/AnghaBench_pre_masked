
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct et_softc* if_softc; } ;
struct et_softc {int dummy; } ;


 int FUNC_0 (struct et_softc*) ;
 int FUNC_1 (struct et_softc*) ;
 int FUNC_2 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_0)
{
 struct et_softc *VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->if_softc;
 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_0);
 FUNC_1(VAR_1);

 return (VAR_2);
}
