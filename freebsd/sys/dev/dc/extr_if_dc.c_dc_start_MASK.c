
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct dc_softc* if_softc; } ;
struct dc_softc {int dummy; } ;


 int FUNC_0 (struct dc_softc*) ;
 int FUNC_1 (struct dc_softc*) ;
 int FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_0)
{
 struct dc_softc *VAR_1;

 VAR_1 = VAR_0->if_softc;
 FUNC_0(VAR_1);
 FUNC_2(VAR_0);
 FUNC_1(VAR_1);
}
