
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_ring {scalar_t__ empty_rx_queue; struct ena_que* que; int mtx_name; int ring_mtx; int rx_stats; int smoothed_interval; int ring_size; int tx_stats; int buf_ring_size; int br; int tx_mem_queue_type; int tx_max_header_size; } ;
struct ena_que {int id; struct ena_ring* rx_ring; struct ena_ring* tx_ring; struct ena_adapter* adapter; } ;
struct ena_com_dev {int tx_mem_queue_type; int tx_max_header_size; } ;
struct ena_adapter {int num_queues; struct ena_que* que; int pdev; int rx_ring_size; int buf_ring_size; int tx_ring_size; struct ena_ring* rx_ring; struct ena_ring* tx_ring; struct ena_com_dev* ena_dev; } ;
typedef int counter_u64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct ena_com_dev*) ;
 int FUNC_4 (struct ena_com_dev*) ;
 int FUNC_5 (struct ena_adapter*,struct ena_ring*,int) ;
 int FUNC_6 (int *,int ,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,char*,char*,int) ;

__attribute__((used)) static void
FUNC_9(struct ena_adapter *VAR_3)
{
 struct ena_com_dev *VAR_4;
 struct ena_ring *VAR_5, *VAR_6;
 struct ena_que *VAR_7;
 int VAR_8;

 VAR_4 = VAR_3->ena_dev;

 for (VAR_8 = 0; VAR_8 < VAR_3->num_queues; VAR_8++) {
  VAR_5 = &VAR_3->tx_ring[VAR_8];
  VAR_6 = &VAR_3->rx_ring[VAR_8];


  FUNC_5(VAR_3, VAR_5, VAR_8);
  FUNC_5(VAR_3, VAR_6, VAR_8);


  VAR_5->ring_size = VAR_3->tx_ring_size;
  VAR_5->tx_max_header_size = VAR_4->tx_max_header_size;
  VAR_5->tx_mem_queue_type = VAR_4->tx_mem_queue_type;
  VAR_5->smoothed_interval =
      FUNC_4(VAR_4);


  VAR_5->buf_ring_size = VAR_3->buf_ring_size;
  VAR_5->br = FUNC_0(VAR_5->buf_ring_size, VAR_1,
      VAR_2, &VAR_5->ring_mtx);


  FUNC_2((counter_u64_t *)&VAR_5->tx_stats,
      sizeof(VAR_5->tx_stats));


  VAR_6->ring_size = VAR_3->rx_ring_size;
  VAR_6->smoothed_interval =
      FUNC_3(VAR_4);


  FUNC_2((counter_u64_t *)&VAR_6->rx_stats,
      sizeof(VAR_6->rx_stats));


  FUNC_8(VAR_5->mtx_name, FUNC_7(VAR_5->mtx_name), "%s:tx(%d)",
      FUNC_1(VAR_3->pdev), VAR_8);
  FUNC_8(VAR_6->mtx_name, FUNC_7(VAR_6->mtx_name), "%s:rx(%d)",
      FUNC_1(VAR_3->pdev), VAR_8);

  FUNC_6(&VAR_5->ring_mtx, VAR_5->mtx_name, ((void*)0), VAR_0);

  VAR_7 = &VAR_3->que[VAR_8];
  VAR_7->adapter = VAR_3;
  VAR_7->id = VAR_8;
  VAR_7->tx_ring = VAR_5;
  VAR_7->rx_ring = VAR_6;

  VAR_5->que = VAR_7;
  VAR_6->que = VAR_7;

  VAR_6->empty_rx_queue = 0;
 }
}
