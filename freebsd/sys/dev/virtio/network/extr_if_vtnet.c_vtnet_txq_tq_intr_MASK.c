
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_txq*) ;
 int FUNC_1 (struct vtnet_txq*) ;
 int FUNC_2 (struct vtnet_txq*) ;
 int FUNC_3 (struct vtnet_txq*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1, int VAR_2)
{
 struct vtnet_softc *VAR_3;
 struct vtnet_txq *VAR_4;
 struct ifnet *VAR_5;

 VAR_4 = VAR_1;
 VAR_3 = VAR_4->vtntx_sc;
 VAR_5 = VAR_3->vtnet_ifp;

 FUNC_0(VAR_4);

 if ((VAR_5->if_drv_flags & VAR_0) == 0) {
  FUNC_1(VAR_4);
  return;
 }

 FUNC_2(VAR_4);
 FUNC_3(VAR_4);

 FUNC_1(VAR_4);
}
