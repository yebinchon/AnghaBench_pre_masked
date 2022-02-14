
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtnet_softc {scalar_t__ vtnet_act_vq_pairs; struct ifnet* vtnet_ifp; } ;
struct TYPE_2__ {int vrxs_rescheduled; } ;
struct vtnet_rxq {scalar_t__ vtnrx_id; int vtnrx_intrtask; int vtnrx_tq; TYPE_1__ vtnrx_stats; struct vtnet_softc* vtnrx_sc; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vtnet_rxq*) ;
 int FUNC_1 (struct vtnet_rxq*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ifnet*,scalar_t__,int*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct vtnet_rxq*) ;
 scalar_t__ FUNC_6 (struct vtnet_rxq*) ;
 int FUNC_7 (struct vtnet_rxq*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 struct vtnet_softc *VAR_4;
 struct vtnet_rxq *VAR_5;
 struct ifnet *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = VAR_3;
 VAR_4 = VAR_5->vtnrx_sc;
 VAR_6 = VAR_4->vtnet_ifp;
 VAR_7 = 0;

 if (FUNC_2(VAR_5->vtnrx_id >= VAR_4->vtnet_act_vq_pairs)) {






  FUNC_5(VAR_5);
  return;
 }






 FUNC_0(VAR_5);

again:
 if ((VAR_6->if_drv_flags & VAR_0) == 0) {
  FUNC_1(VAR_5);
  return;
 }

 VAR_8 = FUNC_7(VAR_5);
 if (VAR_8 || FUNC_6(VAR_5) != 0) {
  if (!VAR_8)
   FUNC_5(VAR_5);




  if (VAR_7++ < VAR_2)
   goto again;

  FUNC_1(VAR_5);
  VAR_5->vtnrx_stats.vrxs_rescheduled++;
  FUNC_4(VAR_5->vtnrx_tq, &VAR_5->vtnrx_intrtask);
 } else
  FUNC_1(VAR_5);
}
