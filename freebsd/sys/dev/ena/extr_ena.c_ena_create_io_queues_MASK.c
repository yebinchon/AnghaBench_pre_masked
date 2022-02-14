
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
typedef void* uint16_t ;
struct ena_ring {int ena_com_io_cq; int ena_com_io_sq; } ;
struct ena_que {int cleanup_tq; int cleanup_task; } ;
struct ena_com_dev {int tx_mem_queue_type; } ;
struct ena_com_create_io_ctx {void* qid; void* msix_vector; int queue_size; int direction; int mem_queue_type; } ;
struct ena_adapter {int num_queues; int pdev; struct ena_que* que; struct ena_ring* rx_ring; int rx_ring_size; struct ena_ring* tx_ring; int tx_ring_size; struct ena_com_dev* ena_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,int ,struct ena_que*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int,int) ;
 int VAR_6 ;
 int FUNC_6 (struct ena_com_dev*,struct ena_com_create_io_ctx*) ;
 int FUNC_7 (struct ena_com_dev*,void*) ;
 int FUNC_8 (struct ena_com_dev*,void*,int *,int *) ;
 int FUNC_9 (char*,int ,int ,int *) ;
 int FUNC_10 (int *,int,int ,char*,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct ena_adapter *VAR_8)
{
 struct ena_com_dev *VAR_9 = VAR_8->ena_dev;
 struct ena_com_create_io_ctx VAR_10;
 struct ena_ring *VAR_11;
 struct ena_que *VAR_12;
 uint16_t VAR_13;
 uint32_t VAR_14;
 int VAR_15, VAR_16;


 for (VAR_16 = 0; VAR_16 < VAR_8->num_queues; VAR_16++) {
  VAR_14 = FUNC_0(VAR_16);
  VAR_13 = FUNC_2(VAR_16);
  VAR_10.mem_queue_type = VAR_9->tx_mem_queue_type;
  VAR_10.direction = VAR_2;
  VAR_10.queue_size = VAR_8->tx_ring_size;
  VAR_10.msix_vector = VAR_14;
  VAR_10.qid = VAR_13;
  VAR_15 = FUNC_6(VAR_9, &VAR_10);
  if (VAR_15 != 0) {
   FUNC_5(VAR_8->pdev,
       "Failed to create io TX queue #%d rc: %d\n", VAR_16, VAR_15);
   goto err_tx;
  }
  VAR_11 = &VAR_8->tx_ring[VAR_16];
  VAR_15 = FUNC_8(VAR_9, VAR_13,
      &VAR_11->ena_com_io_sq,
      &VAR_11->ena_com_io_cq);
  if (VAR_15 != 0) {
   FUNC_5(VAR_8->pdev,
       "Failed to get TX queue handlers. TX queue num"
       " %d rc: %d\n", VAR_16, VAR_15);
   FUNC_7(VAR_9, VAR_13);
   goto err_tx;
  }
 }


 for (VAR_16 = 0; VAR_16 < VAR_8->num_queues; VAR_16++) {
  VAR_14 = FUNC_0(VAR_16);
  VAR_13 = FUNC_1(VAR_16);
  VAR_10.mem_queue_type = VAR_0;
  VAR_10.direction = VAR_1;
  VAR_10.queue_size = VAR_8->rx_ring_size;
  VAR_10.msix_vector = VAR_14;
  VAR_10.qid = VAR_13;
  VAR_15 = FUNC_6(VAR_9, &VAR_10);
  if (FUNC_11(VAR_15 != 0)) {
   FUNC_5(VAR_8->pdev,
       "Failed to create io RX queue[%d] rc: %d\n", VAR_16, VAR_15);
   goto err_rx;
  }

  VAR_11 = &VAR_8->rx_ring[VAR_16];
  VAR_15 = FUNC_8(VAR_9, VAR_13,
      &VAR_11->ena_com_io_sq,
      &VAR_11->ena_com_io_cq);
  if (FUNC_11(VAR_15 != 0)) {
   FUNC_5(VAR_8->pdev,
       "Failed to get RX queue handlers. RX queue num"
       " %d rc: %d\n", VAR_16, VAR_15);
   FUNC_7(VAR_9, VAR_13);
   goto err_rx;
  }
 }

 for (VAR_16 = 0; VAR_16 < VAR_8->num_queues; VAR_16++) {
  VAR_12 = &VAR_8->que[VAR_16];

  FUNC_3(&VAR_12->cleanup_task, 0, VAR_6, VAR_12);
  VAR_12->cleanup_tq = FUNC_9("ena cleanup",
      VAR_4, VAR_7, &VAR_12->cleanup_tq);

  FUNC_10(&VAR_12->cleanup_tq, 1, VAR_5,
      "%s queue %d cleanup",
      FUNC_4(VAR_8->pdev), VAR_16);
 }

 return (0);

err_rx:
 while (VAR_16--)
  FUNC_7(VAR_9, FUNC_1(VAR_16));
 VAR_16 = VAR_8->num_queues;
err_tx:
 while (VAR_16--)
  FUNC_7(VAR_9, FUNC_2(VAR_16));

 return (VAR_3);
}
