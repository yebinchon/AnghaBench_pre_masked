
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_tx_buffer {int head_mapped; int seg_mapped; int * mbuf; int map_seg; int map_head; } ;
struct ena_ring {int ring_size; struct ena_tx_buffer* tx_buffer_info; } ;
struct ena_adapter {int tx_buf_tag; int pdev; struct ena_ring* tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ena_ring*) ;
 int FUNC_1 (struct ena_ring*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,unsigned int,int) ;
 int FUNC_5 (int ,char*,unsigned int,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void
FUNC_7(struct ena_adapter *VAR_2, unsigned int VAR_3)
{
 bool VAR_4 = 1;
 struct ena_ring *VAR_5 = &VAR_2->tx_ring[VAR_3];

 FUNC_0(VAR_5);
 for (int VAR_6 = 0; VAR_6 < VAR_5->ring_size; VAR_6++) {
  struct ena_tx_buffer *VAR_7 = &VAR_5->tx_buffer_info[VAR_6];

  if (VAR_7->mbuf == ((void*)0))
   continue;

  if (VAR_4) {
   FUNC_4(VAR_2->pdev,
       "free uncompleted tx mbuf qid %d idx 0x%x\n",
       VAR_3, VAR_6);
   VAR_4 = 0;
  } else {
   FUNC_5(VAR_1,
       "free uncompleted tx mbuf qid %d idx 0x%x\n",
        VAR_3, VAR_6);
  }

  if (VAR_7->head_mapped == 1) {
   FUNC_2(VAR_2->tx_buf_tag, VAR_7->map_head,
       VAR_0);
   FUNC_3(VAR_2->tx_buf_tag,
       VAR_7->map_head);
   VAR_7->head_mapped = 0;
  }

  if (VAR_7->seg_mapped == 1) {
   FUNC_2(VAR_2->tx_buf_tag, VAR_7->map_seg,
       VAR_0);
   FUNC_3(VAR_2->tx_buf_tag,
       VAR_7->map_seg);
   VAR_7->seg_mapped = 0;
  }

  FUNC_6(VAR_7->mbuf);
  VAR_7->mbuf = ((void*)0);
 }
 FUNC_1(VAR_5);
}
