
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rt_softc {int intr_pending_mask; int int_tx_done_mask; scalar_t__ rt_chipid; int intr_disable_mask; int tx_done_task; int taskqueue; scalar_t__ tx_timer; int * tx_ring; struct ifnet* ifp; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct rt_softc*,int ,char*) ;
 int FUNC_2 (struct rt_softc*) ;
 int VAR_14 ;
 int FUNC_3 (struct rt_softc*) ;
 int FUNC_4 (struct rt_softc*,int) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct rt_softc*,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_15, int VAR_16)
{
 struct rt_softc *VAR_17;
 struct ifnet *VAR_18;
 uint32_t VAR_19;
 int VAR_20;

 VAR_17 = VAR_15;
 VAR_18 = VAR_17->ifp;

 FUNC_1(VAR_17, VAR_13, "Tx done task\n");

 if (!(VAR_18->if_drv_flags & VAR_1))
  return;

 for (VAR_20 = VAR_14 - 1; VAR_20 >= 0; VAR_20--) {
  if (VAR_17->intr_pending_mask & (VAR_17->int_tx_done_mask << VAR_20)) {
   VAR_17->intr_pending_mask &= ~(VAR_17->int_tx_done_mask << VAR_20);
   FUNC_6(VAR_17, &VAR_17->tx_ring[VAR_20]);
  }
 }

 VAR_17->tx_timer = 0;

 VAR_18->if_drv_flags &= ~VAR_0;

 if(VAR_17->rt_chipid == VAR_12 ||
    VAR_17->rt_chipid == VAR_10 ||
    VAR_17->rt_chipid == VAR_11)
   VAR_19 = (
  VAR_9 |
  VAR_8 |
  VAR_7 |
  VAR_6);
 else
   VAR_19 = (
  VAR_5 |
  VAR_4 |
  VAR_3 |
  VAR_2);

 FUNC_2(VAR_17);

 FUNC_4(VAR_17, ~VAR_17->intr_pending_mask &
     (VAR_17->intr_disable_mask & VAR_19));

 if (VAR_17->intr_pending_mask & VAR_19) {
  FUNC_1(VAR_17, VAR_13,
      "Tx done task: scheduling again\n");
  FUNC_7(VAR_17->taskqueue, &VAR_17->tx_done_task);
 }

 FUNC_3(VAR_17);

 if (!FUNC_0(&VAR_18->if_snd))
  FUNC_5(VAR_18);
}
