
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct an_softc {scalar_t__ mpi350; struct ifnet* an_ifp; scalar_t__ an_gone; } ;


 int FUNC_0 (struct an_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct an_softc*) ;
 int FUNC_2 (struct an_softc*) ;
 int FUNC_3 (struct an_softc*) ;
 int FUNC_4 (struct ifnet*,int ,int) ;
 int FUNC_5 (struct ifnet*,char*) ;

__attribute__((used)) static void
FUNC_6(struct an_softc *VAR_1)
{
 struct ifnet *VAR_2;

 FUNC_0(VAR_1);

 if (VAR_1->an_gone)
  return;

 VAR_2 = VAR_1->an_ifp;
 FUNC_5(VAR_2, "device timeout\n");

 FUNC_3(VAR_1);
 if (VAR_1->mpi350)
  FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 FUNC_4(VAR_2, VAR_0, 1);
}
