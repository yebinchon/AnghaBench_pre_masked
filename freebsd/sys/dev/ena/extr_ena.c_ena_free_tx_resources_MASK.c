
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ena_ring {int ring_size; int * push_buf_intermediate_buf; TYPE_2__* free_tx_ids; TYPE_2__* tx_buffer_info; int br; int enqueue_tq; int enqueue_task; } ;
struct ena_netmap_tx_info {scalar_t__* socket_buf_idx; int * map_seg; } ;
struct ena_adapter {TYPE_1__* ena_dev; int tx_buf_tag; TYPE_3__* ifp; struct ena_ring* tx_ring; } ;
struct TYPE_6__ {int if_capenable; } ;
struct TYPE_5__ {int head_mapped; int seg_mapped; int * mbuf; struct ena_netmap_tx_info nm_info; int map_seg; int map_head; } ;
struct TYPE_4__ {int dmadev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct ena_ring*) ;
 int FUNC_2 (struct ena_ring*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (struct ena_adapter*,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void
FUNC_13(struct ena_adapter *VAR_4, int VAR_5)
{
 struct ena_ring *VAR_6 = &VAR_4->tx_ring[VAR_5];





 while (FUNC_10(VAR_6->enqueue_tq, &VAR_6->enqueue_task,
     ((void*)0)))
  FUNC_11(VAR_6->enqueue_tq, &VAR_6->enqueue_task);

 FUNC_12(VAR_6->enqueue_tq);

 FUNC_1(VAR_6);

 FUNC_6(VAR_4->ifp, VAR_6->br);


 for (int VAR_7 = 0; VAR_7 < VAR_6->ring_size; VAR_7++) {
  if (VAR_6->tx_buffer_info[VAR_7].head_mapped == 1) {
   FUNC_4(VAR_4->tx_buf_tag,
       VAR_6->tx_buffer_info[VAR_7].map_head,
       VAR_0);
   FUNC_5(VAR_4->tx_buf_tag,
       VAR_6->tx_buffer_info[VAR_7].map_head);
   VAR_6->tx_buffer_info[VAR_7].head_mapped = 0;
  }
  FUNC_3(VAR_4->tx_buf_tag,
      VAR_6->tx_buffer_info[VAR_7].map_head);

  if (VAR_6->tx_buffer_info[VAR_7].seg_mapped == 1) {
   FUNC_4(VAR_4->tx_buf_tag,
       VAR_6->tx_buffer_info[VAR_7].map_seg,
       VAR_0);
   FUNC_5(VAR_4->tx_buf_tag,
       VAR_6->tx_buffer_info[VAR_7].map_seg);
   VAR_6->tx_buffer_info[VAR_7].seg_mapped = 0;
  }
  FUNC_3(VAR_4->tx_buf_tag,
      VAR_6->tx_buffer_info[VAR_7].map_seg);
  FUNC_9(VAR_6->tx_buffer_info[VAR_7].mbuf);
  VAR_6->tx_buffer_info[VAR_7].mbuf = ((void*)0);
 }
 FUNC_2(VAR_6);


 FUNC_8(VAR_6->tx_buffer_info, VAR_3);
 VAR_6->tx_buffer_info = ((void*)0);

 FUNC_8(VAR_6->free_tx_ids, VAR_3);
 VAR_6->free_tx_ids = ((void*)0);

 FUNC_0(VAR_4->ena_dev->dmadev,
     VAR_6->push_buf_intermediate_buf);
 VAR_6->push_buf_intermediate_buf = ((void*)0);
}
