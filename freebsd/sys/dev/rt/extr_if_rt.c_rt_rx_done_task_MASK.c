
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int intr_pending_mask; int int_rx_done_mask; int rx_done_task; int taskqueue; int rx_process_limit; int * rx_ring; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt_softc*,int ,char*) ;
 int FUNC_1 (struct rt_softc*) ;
 int FUNC_2 (struct rt_softc*) ;
 int FUNC_3 (struct rt_softc*,int) ;
 int FUNC_4 (struct rt_softc*,int *,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2, int VAR_3)
{
 struct rt_softc *VAR_4;
 struct ifnet *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2;
 VAR_5 = VAR_4->ifp;

 FUNC_0(VAR_4, VAR_1, "Rx done task\n");

 if (!(VAR_5->if_drv_flags & VAR_0))
  return;

 VAR_4->intr_pending_mask &= ~VAR_4->int_rx_done_mask;

 VAR_6 = FUNC_4(VAR_4, &VAR_4->rx_ring[0], VAR_4->rx_process_limit);

 FUNC_1(VAR_4);

 if ((VAR_4->intr_pending_mask & VAR_4->int_rx_done_mask) || VAR_6) {
  FUNC_0(VAR_4, VAR_1,
      "Rx done task: scheduling again\n");
  FUNC_5(VAR_4->taskqueue, &VAR_4->rx_done_task);
 } else {
  FUNC_3(VAR_4, VAR_4->int_rx_done_mask);
 }

 FUNC_2(VAR_4);
}
