
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct ena_rx_buffer {int ena_buf; } ;
struct TYPE_2__ {int refil_partial; } ;
struct ena_ring {size_t next_to_use; size_t* free_rx_ids; int ena_com_io_sq; int qid; TYPE_1__ rx_stats; int ring_size; struct ena_rx_buffer* rx_buffer_info; struct ena_adapter* adapter; } ;
struct ena_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ena_adapter*,struct ena_ring*,struct ena_rx_buffer*) ;
 int FUNC_3 (int ,int *,size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ena_adapter*,struct ena_ring*,struct ena_rx_buffer*) ;
 scalar_t__ FUNC_6 (struct ena_adapter*,int ) ;
 int FUNC_7 (int,char*,size_t,...) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 () ;

int
FUNC_11(struct ena_ring *VAR_4, uint32_t VAR_5)
{
 struct ena_adapter *VAR_6 = VAR_4->adapter;
 uint16_t VAR_7, VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 FUNC_7(VAR_0 | VAR_2 | VAR_1, "refill qid: %d\n",
     VAR_4->qid);

 VAR_7 = VAR_4->next_to_use;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  struct ena_rx_buffer *VAR_11;

  FUNC_7(VAR_0 | VAR_2 | VAR_1,
      "RX buffer - next to use: %d\n", VAR_7);

  VAR_8 = VAR_4->free_rx_ids[VAR_7];
  VAR_11 = &VAR_4->rx_buffer_info[VAR_8];





   VAR_10 = FUNC_2(VAR_6, VAR_4, VAR_11);
  if (FUNC_9(VAR_10 != 0)) {
   FUNC_7(VAR_3,
       "failed to alloc buffer for rx queue %d\n",
       VAR_4->qid);
   break;
  }
  VAR_10 = FUNC_3(VAR_4->ena_com_io_sq,
      &VAR_11->ena_buf, VAR_8);
  if (FUNC_9(VAR_10 != 0)) {
   FUNC_7(VAR_3,
       "failed to add buffer for rx queue %d\n",
       VAR_4->qid);
   break;
  }
  VAR_7 = FUNC_0(VAR_7,
      VAR_4->ring_size);
 }

 if (FUNC_9(VAR_9 < VAR_5)) {
  FUNC_1(VAR_4->rx_stats.refil_partial, 1);
  FUNC_7(VAR_3,
       "refilled rx qid %d with only %d mbufs (from %d)\n",
       VAR_4->qid, VAR_9, VAR_5);
 }

 if (FUNC_8(VAR_9 != 0)) {
  FUNC_10();
  FUNC_4(VAR_4->ena_com_io_sq);
 }
 VAR_4->next_to_use = VAR_7;
 return (VAR_9);
}
