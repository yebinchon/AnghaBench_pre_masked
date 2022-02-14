
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int rx_ring_count; int intr_disable_mask; int int_rx_done_mask; int intr_pending_mask; int rx_done_task; int taskqueue; int * rx_interrupts; int dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct rt_softc*,int ,char*) ;
 int FUNC_2 (struct rt_softc*) ;
 int FUNC_3 (struct rt_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rt_softc*,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct rt_softc *VAR_1, int VAR_2)
{
 FUNC_0(VAR_2 >= 0 && VAR_2 < VAR_1->rx_ring_count,
  ("%s: Rx interrupt: invalid qid=%d\n",
   FUNC_4(VAR_1->dev), VAR_2));

 FUNC_1(VAR_1, VAR_0, "Rx interrupt\n");
 VAR_1->rx_interrupts[VAR_2]++;
 FUNC_2(VAR_1);

 if (!(VAR_1->intr_disable_mask & (VAR_1->int_rx_done_mask << VAR_2))) {
  FUNC_5(VAR_1, (VAR_1->int_rx_done_mask << VAR_2));
  FUNC_6(VAR_1->taskqueue, &VAR_1->rx_done_task);
 }

 VAR_1->intr_pending_mask |= (VAR_1->int_rx_done_mask << VAR_2);
 FUNC_3(VAR_1);
}
