
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {scalar_t__ vtntx_id; struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {scalar_t__ vtnet_act_vq_pairs; struct ifnet* vtnet_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vtnet_txq*) ;
 int FUNC_1 (struct vtnet_txq*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ifnet*,scalar_t__) ;
 int FUNC_4 (struct vtnet_txq*) ;
 int FUNC_5 (struct vtnet_txq*) ;
 int FUNC_6 (struct vtnet_txq*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct vtnet_softc *VAR_3;
 struct vtnet_txq *VAR_4;
 struct ifnet *VAR_5;

 VAR_4 = VAR_2;
 VAR_3 = VAR_4->vtntx_sc;
 VAR_5 = VAR_3->vtnet_ifp;

 if (FUNC_2(VAR_4->vtntx_id >= VAR_3->vtnet_act_vq_pairs)) {






  FUNC_4(VAR_4);
  return;
 }






 FUNC_0(VAR_4);

 if ((VAR_5->if_drv_flags & VAR_0) == 0) {
  FUNC_1(VAR_4);
  return;
 }

 FUNC_5(VAR_4);
 FUNC_6(VAR_4);

 FUNC_1(VAR_4);
}
