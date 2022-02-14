
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {int dummy; } ;
struct ena_adapter {scalar_t__ missing_tx_timeout; int missing_tx_max_queues; int next_monitored_tx_qid; int num_queues; struct ena_ring* rx_ring; struct ena_ring* tx_ring; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ena_adapter*,struct ena_ring*) ;
 int FUNC_2 (struct ena_adapter*,struct ena_ring*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ena_adapter *VAR_3)
{
 struct ena_ring *VAR_4;
 struct ena_ring *VAR_5;
 int VAR_6, VAR_7, VAR_8;


 FUNC_3();

 if (!FUNC_0(VAR_0, VAR_3))
  return;

 if (FUNC_0(VAR_1, VAR_3))
  return;

 if (VAR_3->missing_tx_timeout == VAR_2)
  return;

 VAR_7 = VAR_3->missing_tx_max_queues;

 for (VAR_6 = VAR_3->next_monitored_tx_qid; VAR_6 < VAR_3->num_queues; VAR_6++) {
  VAR_4 = &VAR_3->tx_ring[VAR_6];
  VAR_5 = &VAR_3->rx_ring[VAR_6];

  VAR_8 = FUNC_2(VAR_3, VAR_4);
  if (FUNC_4(VAR_8 != 0))
   return;

  VAR_8 = FUNC_1(VAR_3, VAR_5);
  if (FUNC_4(VAR_8 != 0))
   return;

  VAR_7--;
  if (VAR_7 == 0) {
   VAR_6++;
   break;
  }
 }

 VAR_3->next_monitored_tx_qid = VAR_6 % VAR_3->num_queues;
}
