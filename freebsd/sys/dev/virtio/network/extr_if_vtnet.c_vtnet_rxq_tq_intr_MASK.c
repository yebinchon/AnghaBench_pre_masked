
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vtnet_softc {struct ifnet* vtnet_ifp; } ;
struct TYPE_2__ {int vrxs_rescheduled; } ;
struct vtnet_rxq {int vtnrx_intrtask; int vtnrx_tq; TYPE_1__ vtnrx_stats; struct vtnet_softc* vtnrx_sc; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct vtnet_rxq*) ;
 int FUNC_1 (struct vtnet_rxq*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct vtnet_rxq*) ;
 scalar_t__ FUNC_4 (struct vtnet_rxq*) ;
 int FUNC_5 (struct vtnet_rxq*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, int VAR_2)
{
 struct vtnet_softc *VAR_3;
 struct vtnet_rxq *VAR_4;
 struct ifnet *VAR_5;
 int VAR_6;

 VAR_4 = VAR_1;
 VAR_3 = VAR_4->vtnrx_sc;
 VAR_5 = VAR_3->vtnet_ifp;

 FUNC_0(VAR_4);

 if ((VAR_5->if_drv_flags & VAR_0) == 0) {
  FUNC_1(VAR_4);
  return;
 }

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 || FUNC_4(VAR_4) != 0) {
  if (!VAR_6)
   FUNC_3(VAR_4);
  VAR_4->vtnrx_stats.vrxs_rescheduled++;
  FUNC_2(VAR_4->vtnrx_tq, &VAR_4->vtnrx_intrtask);
 }

 FUNC_1(VAR_4);
}
