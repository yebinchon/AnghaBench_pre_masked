
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_6__ {int len; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct ena_tx_buffer {int tx_descs; int print_once; int head_mapped; int seg_mapped; int map_head; int map_seg; int * mbuf; int timestamp; scalar_t__ num_of_bufs; int bufs; } ;
struct TYPE_8__ {int queue_wakeup; int queue_stop; int bytes; int cnt; int prepare_ctx_err; int doorbells; } ;
struct ena_ring {size_t next_to_use; size_t* free_tx_ids; scalar_t__ acum_pkts; int running; TYPE_4__ tx_stats; int ena_com_io_sq; TYPE_3__* que; int ring_size; struct ena_tx_buffer* tx_buffer_info; } ;
struct ena_com_tx_ctx {size_t req_id; size_t header_len; scalar_t__ num_bufs; void* push_header; int ena_bufs; } ;
struct ena_com_io_sq {int dummy; } ;
struct ena_com_dev {struct ena_com_io_sq* io_sq_queues; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; } ;
struct ena_adapter {int tx_buf_tag; scalar_t__ max_tx_sgl_size; TYPE_1__ hw_stats; int pdev; struct ena_com_dev* ena_dev; } ;
struct TYPE_7__ {int id; struct ena_adapter* adapter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t FUNC_1 (size_t,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct ena_ring*,struct mbuf**) ;
 scalar_t__ FUNC_10 (int ,struct ena_com_tx_ctx*) ;
 int FUNC_11 (struct ena_com_io_sq*,struct ena_com_tx_ctx*,int*) ;
 scalar_t__ FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,char*,...) ;
 int FUNC_15 (struct ena_com_tx_ctx*,struct mbuf*) ;
 int FUNC_16 (struct ena_ring*,struct ena_tx_buffer*,struct mbuf*,void**,size_t*) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 () ;
 int FUNC_20 (struct ena_com_tx_ctx*,int,int) ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 () ;

__attribute__((used)) static int
FUNC_23(struct ena_ring *VAR_7, struct mbuf **VAR_8)
{
 struct ena_adapter *VAR_9;
 struct ena_tx_buffer *VAR_10;
 struct ena_com_tx_ctx VAR_11;
 struct ena_com_dev *VAR_12;
 struct ena_com_io_sq* VAR_13;
 void *VAR_14;
 uint16_t VAR_15;
 uint16_t VAR_16;
 uint16_t VAR_17;
 uint16_t VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_17 = FUNC_0(VAR_7->que->id);
 VAR_9 = VAR_7->que->adapter;
 VAR_12 = VAR_9->ena_dev;
 VAR_13 = &VAR_12->io_sq_queues[VAR_17];

 VAR_19 = FUNC_9(VAR_7, VAR_8);
 if (FUNC_21(VAR_19 != 0)) {
  FUNC_14(VAR_6,
      "Failed to collapse mbuf! err: %d\n", VAR_19);
  return (VAR_19);
 }

 FUNC_14(VAR_3 | VAR_4, "Tx: %d bytes\n", (*VAR_8)->m_pkthdr.len);

 VAR_15 = VAR_7->next_to_use;
 VAR_16 = VAR_7->free_tx_ids[VAR_15];
 VAR_10 = &VAR_7->tx_buffer_info[VAR_16];
 VAR_10->num_of_bufs = 0;

 VAR_19 = FUNC_16(VAR_7, VAR_10, *VAR_8, &VAR_14, &VAR_18);
 if (FUNC_21(VAR_19 != 0)) {
  FUNC_14(VAR_6, "Failed to map TX mbuf\n");
  return (VAR_19);
 }
 FUNC_20(&VAR_11, 0x0, sizeof(struct ena_com_tx_ctx));
 VAR_11.ena_bufs = VAR_10->bufs;
 VAR_11.push_header = VAR_14;
 VAR_11.num_bufs = VAR_10->num_of_bufs;
 VAR_11.req_id = VAR_16;
 VAR_11.header_len = VAR_18;


 FUNC_15(&VAR_11, *VAR_8);

 if (VAR_7->acum_pkts == VAR_1 ||
     FUNC_10(VAR_7->ena_com_io_sq, &VAR_11)) {
  FUNC_14(VAR_3 | VAR_4,
      "llq tx max burst size of queue %d achieved, writing doorbell to send burst\n",
      VAR_7->que->id);
  FUNC_22();
  FUNC_13(VAR_7->ena_com_io_sq);
  FUNC_6(VAR_7->tx_stats.doorbells, 1);
  VAR_7->acum_pkts = 0;
 }


 VAR_19 = FUNC_11(VAR_13, &VAR_11, &VAR_20);
 if (FUNC_21(VAR_19 != 0)) {
  if (FUNC_18(VAR_19 == VAR_2)) {
   FUNC_14(VAR_3 | VAR_4,
       "tx ring[%d] if out of space\n", VAR_7->que->id);
  } else {
   FUNC_8(VAR_9->pdev,
       "failed to prepare tx bufs\n");
  }
  FUNC_6(VAR_7->tx_stats.prepare_ctx_err, 1);
  goto dma_error;
 }

 FUNC_4();
 FUNC_7(VAR_7->tx_stats.cnt, 1);
 FUNC_7(VAR_7->tx_stats.bytes,
     (*VAR_8)->m_pkthdr.len);

 FUNC_7(VAR_9->hw_stats.tx_packets, 1);
 FUNC_7(VAR_9->hw_stats.tx_bytes,
     (*VAR_8)->m_pkthdr.len);
 FUNC_5();

 VAR_10->tx_descs = VAR_20;
 FUNC_17(&VAR_10->timestamp);
 VAR_10->print_once = 1;

 VAR_7->next_to_use = FUNC_1(VAR_15,
     VAR_7->ring_size);





 if (FUNC_21(!FUNC_12(VAR_7->ena_com_io_sq,
     VAR_9->max_tx_sgl_size + 2))) {
  FUNC_14(VAR_3 | VAR_4, "Stop queue %d\n",
      VAR_7->que->id);

  VAR_7->running = 0;
  FUNC_6(VAR_7->tx_stats.queue_stop, 1);
  FUNC_19();

  if (FUNC_12(VAR_7->ena_com_io_sq,
      VAR_5)) {
   VAR_7->running = 1;
   FUNC_6(VAR_7->tx_stats.queue_wakeup, 1);
  }
 }

 if (VAR_10->head_mapped == 1)
  FUNC_2(VAR_9->tx_buf_tag, VAR_10->map_head,
      VAR_0);
 if (VAR_10->seg_mapped == 1)
  FUNC_2(VAR_9->tx_buf_tag, VAR_10->map_seg,
      VAR_0);

 return (0);

dma_error:
 VAR_10->mbuf = ((void*)0);
 if (VAR_10->seg_mapped == 1) {
  FUNC_3(VAR_9->tx_buf_tag, VAR_10->map_seg);
  VAR_10->seg_mapped = 0;
 }
 if (VAR_10->head_mapped == 1) {
  FUNC_3(VAR_9->tx_buf_tag, VAR_10->map_head);
  VAR_10->head_mapped = 0;
 }

 return (VAR_19);
}
