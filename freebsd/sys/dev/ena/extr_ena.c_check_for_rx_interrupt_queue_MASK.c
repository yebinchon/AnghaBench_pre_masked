
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int first_interrupt; scalar_t__ no_interrupt_event_cnt; int qid; int ena_com_io_cq; } ;
struct ena_adapter {int reset_reason; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ena_adapter*) ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct ena_adapter *VAR_4,
    struct ena_ring *VAR_5)
{
 if (FUNC_4(VAR_5->first_interrupt))
  return (0);

 if (FUNC_3(VAR_5->ena_com_io_cq))
  return (0);

 VAR_5->no_interrupt_event_cnt++;

 if (VAR_5->no_interrupt_event_cnt == VAR_2) {
  FUNC_2(VAR_4->pdev, "Potential MSIX issue on Rx side "
      "Queue = %d. Reset the device\n", VAR_5->qid);
  if (FUNC_4(!FUNC_0(VAR_1, VAR_4))) {
   VAR_4->reset_reason = VAR_3;
   FUNC_1(VAR_1, VAR_4);
  }
  return (VAR_0);
 }

 return (0);
}
