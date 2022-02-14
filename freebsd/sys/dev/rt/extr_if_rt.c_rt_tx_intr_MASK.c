
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_softc {int intr_disable_mask; int int_tx_done_mask; int intr_pending_mask; int tx_done_task; int taskqueue; int * tx_interrupts; int dev; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct rt_softc*,int ,char*,int) ;
 int FUNC_2 (struct rt_softc*) ;
 int VAR_1 ;
 int FUNC_3 (struct rt_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct rt_softc*,int) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct rt_softc *VAR_2, int VAR_3)
{

 FUNC_0(VAR_3 >= 0 && VAR_3 < VAR_1,
  ("%s: Tx interrupt: invalid qid=%d\n",
   FUNC_4(VAR_2->dev), VAR_3));

 FUNC_1(VAR_2, VAR_0, "Tx interrupt: qid=%d\n", VAR_3);

 VAR_2->tx_interrupts[VAR_3]++;
 FUNC_2(VAR_2);

 if (!(VAR_2->intr_disable_mask & (VAR_2->int_tx_done_mask << VAR_3))) {
  FUNC_5(VAR_2, (VAR_2->int_tx_done_mask << VAR_3));
  FUNC_6(VAR_2->taskqueue, &VAR_2->tx_done_task);
 }

 VAR_2->intr_pending_mask |= (VAR_2->int_tx_done_mask << VAR_3);
 FUNC_3(VAR_2);
}
