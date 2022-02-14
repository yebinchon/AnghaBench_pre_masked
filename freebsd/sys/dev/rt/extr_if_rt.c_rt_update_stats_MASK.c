
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {struct ifnet* ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;

__attribute__((used)) static void
FUNC_1(struct rt_softc *VAR_1)
{
 struct ifnet *VAR_2;

 VAR_2 = VAR_1->ifp;
 FUNC_0(VAR_1, VAR_0, "update statistic: \n");

}
