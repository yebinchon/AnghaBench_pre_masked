
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtbe_softc {struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vtbe_softc*) ;

__attribute__((used)) static void
FUNC_1(struct vtbe_softc *VAR_2)
{
 struct ifnet *VAR_3;

 FUNC_0(VAR_2);

 VAR_3 = VAR_2->ifp;
 VAR_3->if_drv_flags &= ~(VAR_1 | VAR_0);
}
