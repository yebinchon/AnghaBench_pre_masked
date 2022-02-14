
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int empty_rx_ring; } ;
struct ena_ring {int ring_size; scalar_t__ empty_rx_queue; TYPE_2__* que; TYPE_1__ rx_stats; int ena_com_io_sq; } ;
struct ena_adapter {int num_queues; int pdev; struct ena_ring* rx_ring; } ;
struct TYPE_4__ {int cleanup_task; int cleanup_tq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct ena_adapter*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(struct ena_adapter *VAR_3)
{
 struct ena_ring *VAR_4;
 int VAR_5, VAR_6;

 if (!FUNC_0(VAR_1, VAR_3))
  return;

 if (FUNC_0(VAR_2, VAR_3))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_queues; VAR_5++) {
  VAR_4 = &VAR_3->rx_ring[VAR_5];

  VAR_6 = FUNC_3(VAR_4->ena_com_io_sq);
  if (FUNC_5(VAR_6 == (VAR_4->ring_size - 1))) {
   VAR_4->empty_rx_queue++;

   if (VAR_4->empty_rx_queue >= VAR_0) {
    FUNC_1(VAR_4->rx_stats.empty_rx_ring,
        1);

    FUNC_2(VAR_3->pdev,
        "trigger refill for ring %d\n", VAR_5);

    FUNC_4(VAR_4->que->cleanup_tq,
        &VAR_4->que->cleanup_task);
    VAR_4->empty_rx_queue = 0;
   }
  } else {
   VAR_4->empty_rx_queue = 0;
  }
 }
}
