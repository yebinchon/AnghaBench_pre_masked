
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {struct an_softc* if_softc; } ;
struct an_softc {int dummy; } ;


 int FUNC_0 (struct an_softc*,int) ;
 int FUNC_1 (struct an_softc*) ;

__attribute__((used)) static int
FUNC_2(struct ifnet *VAR_0)
{
 int VAR_1 = 0;
 struct an_softc *VAR_2 = VAR_0->if_softc;

 FUNC_0(VAR_2, 1024);

 FUNC_1(VAR_2);

 FUNC_0(VAR_2, 1024);
 return VAR_1;
}
