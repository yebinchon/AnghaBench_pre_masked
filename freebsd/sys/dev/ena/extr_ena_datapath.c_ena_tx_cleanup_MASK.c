
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct mbuf {int dummy; } ;
struct ena_tx_buffer {int head_mapped; int seg_mapped; scalar_t__ tx_descs; int map_seg; int map_head; int timestamp; struct mbuf* mbuf; } ;
struct TYPE_6__ {int queue_wakeup; } ;
struct ena_ring {size_t next_to_clean; size_t* free_tx_ids; int running; int enqueue_task; int enqueue_tq; TYPE_3__ tx_stats; int ena_com_io_sq; int qid; int ring_size; struct ena_tx_buffer* tx_buffer_info; TYPE_1__* que; } ;
struct ena_com_io_cq {int dummy; } ;
struct ena_adapter {TYPE_2__* ena_dev; int tx_buf_tag; int ifp; } ;
struct TYPE_5__ {int * io_sq_queues; struct ena_com_io_cq* io_cq_queues; } ;
struct TYPE_4__ {int id; struct ena_adapter* adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct ena_ring*) ;
 int FUNC_2 (struct ena_ring*) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_3 (size_t,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int *,unsigned int) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct ena_com_io_cq*,size_t*) ;
 int FUNC_11 (struct ena_com_io_cq*) ;
 int FUNC_12 (int,char*,int ,int) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct mbuf*) ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct ena_ring*,size_t) ;

__attribute__((used)) static int
FUNC_20(struct ena_ring *VAR_7)
{
 struct ena_adapter *VAR_8;
 struct ena_com_io_cq* VAR_9;
 uint16_t VAR_10;
 uint16_t VAR_11;
 uint16_t VAR_12;
 unsigned int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = VAR_6;
 int VAR_16 = VAR_5;
 int VAR_17;
 bool VAR_18;

 VAR_8 = VAR_7->que->adapter;
 VAR_12 = FUNC_0(VAR_7->que->id);
 VAR_9 = &VAR_8->ena_dev->io_cq_queues[VAR_12];
 VAR_10 = VAR_7->next_to_clean;






 do {
  struct ena_tx_buffer *VAR_19;
  struct mbuf *VAR_20;

  VAR_14 = FUNC_10(VAR_9, &VAR_11);
  if (FUNC_18(VAR_14 != 0))
   break;

  VAR_14 = FUNC_19(VAR_7, VAR_11);
  if (FUNC_18(VAR_14 != 0))
   break;

  VAR_19 = &VAR_7->tx_buffer_info[VAR_11];

  VAR_20 = VAR_19->mbuf;

  VAR_19->mbuf = ((void*)0);
  FUNC_4(&VAR_19->timestamp);


  if (VAR_19->head_mapped == 1) {
   FUNC_5(VAR_8->tx_buf_tag, VAR_19->map_head,
       VAR_0);
   FUNC_6(VAR_8->tx_buf_tag,
       VAR_19->map_head);
   VAR_19->head_mapped = 0;
  }
  if (VAR_19->seg_mapped == 1) {
   FUNC_5(VAR_8->tx_buf_tag, VAR_19->map_seg,
       VAR_0);
   FUNC_6(VAR_8->tx_buf_tag,
       VAR_19->map_seg);
   VAR_19->seg_mapped = 0;
  }

  FUNC_12(VAR_1 | VAR_2, "tx: q %d mbuf %p completed\n",
      VAR_7->qid, VAR_20);

  FUNC_14(VAR_20);

  VAR_13 += VAR_19->tx_descs;

  VAR_7->free_tx_ids[VAR_10] = VAR_11;
  VAR_10 = FUNC_3(VAR_10,
      VAR_7->ring_size);

  if (FUNC_18(--VAR_15 == 0)) {
   VAR_15 = VAR_6;

   VAR_7->next_to_clean = VAR_10;
   FUNC_8(
       &VAR_8->ena_dev->io_sq_queues[VAR_12],
       VAR_13);
   FUNC_11(VAR_9);
   VAR_13 = 0;
  }
 } while (FUNC_13(--VAR_16));

 VAR_17 = VAR_5 - VAR_16;

 FUNC_12(VAR_1 | VAR_2, "tx: q %d done. total pkts: %d\n",
 VAR_7->qid, VAR_17);


 if (FUNC_13(VAR_15 != VAR_6)) {
  VAR_7->next_to_clean = VAR_10;
  FUNC_8(&VAR_8->ena_dev->io_sq_queues[VAR_12],
      VAR_13);
  FUNC_11(VAR_9);
 }





 FUNC_15();

 VAR_18 = FUNC_9(VAR_7->ena_com_io_sq,
     VAR_3);
 if (FUNC_18(!VAR_7->running && VAR_18)) {
  FUNC_1(VAR_7);
  VAR_18 =
      FUNC_9(VAR_7->ena_com_io_sq,
      VAR_3);
  if (!VAR_7->running && VAR_18) {
   VAR_7->running = 1;
   FUNC_7(VAR_7->tx_stats.queue_wakeup, 1);
   FUNC_17(VAR_7->enqueue_tq,
       &VAR_7->enqueue_task);
  }
  FUNC_2(VAR_7);
 }

 return (VAR_17);
}
