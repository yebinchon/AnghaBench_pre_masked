
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ena_stats_tx {int llq_buffer_copy; int queue_stop; int queue_wakeup; int collapse_err; int collapse; int bad_req_id; int missing_tx_comp; int doorbells; int dma_mapping_err; int prepare_ctx_err; int bytes; int cnt; } ;
struct ena_stats_rx {int empty_rx_ring; int bad_req_id; int bad_desc_num; int dma_mapping_err; int mjum_alloc_fail; int mbuf_alloc_fail; int bad_csum; int refil_partial; int bytes; int cnt; } ;
struct ena_stats_dev {int admin_q_pause; int interface_down; int interface_up; int wd_expired; } ;
struct ena_ring {struct ena_stats_rx rx_stats; struct ena_stats_tx tx_stats; } ;
struct ena_hw_stats {int rx_drops; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct ena_com_stats_admin {int no_completion; int out_of_space; int completed_cmd; int submitted_cmd; int aborted_cmd; } ;
struct ena_adapter {int num_queues; TYPE_2__* ena_dev; struct ena_stats_dev dev_stats; struct ena_hw_stats hw_stats; struct ena_ring* rx_ring; struct ena_ring* tx_ring; int pdev; } ;
typedef int device_t ;
struct TYPE_3__ {struct ena_com_stats_admin stats; } ;
struct TYPE_4__ {TYPE_1__ admin_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_7(struct ena_adapter *VAR_3)
{
 device_t VAR_4;

 struct ena_ring *VAR_5;
 struct ena_ring *VAR_6;

 struct ena_hw_stats *VAR_7;
 struct ena_stats_dev *VAR_8;
 struct ena_stats_tx *VAR_9;
 struct ena_stats_rx *VAR_10;
 struct ena_com_stats_admin *VAR_11;

 struct sysctl_ctx_list *VAR_12;
 struct sysctl_oid *VAR_13;
 struct sysctl_oid_list *VAR_14;

 struct sysctl_oid *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 struct sysctl_oid *VAR_19;
 struct sysctl_oid_list *VAR_20, *VAR_21, *VAR_22, *VAR_23;
 struct sysctl_oid_list *VAR_24;


 char VAR_25[32];
 int VAR_26;

 VAR_4 = VAR_3->pdev;

 VAR_12 = FUNC_4(VAR_4);
 VAR_13 = FUNC_5(VAR_4);
 VAR_14 = FUNC_3(VAR_13);

 VAR_5 = VAR_3->tx_ring;
 VAR_6 = VAR_3->rx_ring;

 VAR_7 = &VAR_3->hw_stats;
 VAR_8 = &VAR_3->dev_stats;
 VAR_11 = &VAR_3->ena_dev->admin_queue.stats;

 FUNC_0(VAR_12, VAR_14, VAR_1, "wd_expired",
     VAR_0, &VAR_8->wd_expired,
     "Watchdog expiry count");
 FUNC_0(VAR_12, VAR_14, VAR_1, "interface_up",
     VAR_0, &VAR_8->interface_up,
     "Network interface up count");
 FUNC_0(VAR_12, VAR_14, VAR_1, "interface_down",
     VAR_0, &VAR_8->interface_down,
     "Network interface down count");
 FUNC_0(VAR_12, VAR_14, VAR_1, "admin_q_pause",
     VAR_0, &VAR_8->admin_q_pause,
     "Admin queue pauses");

 for (VAR_26 = 0; VAR_26 < VAR_3->num_queues; ++VAR_26, ++VAR_5, ++VAR_6) {
  FUNC_6(VAR_25, 32, "queue%d", VAR_26);

  VAR_15 = FUNC_1(VAR_12, VAR_14, VAR_1,
      VAR_25, VAR_0, ((void*)0), "Queue Name");
  VAR_20 = FUNC_3(VAR_15);


  VAR_16 = FUNC_1(VAR_12, VAR_20, VAR_1,
      "tx_ring", VAR_0, ((void*)0), "TX ring");
  VAR_21 = FUNC_3(VAR_16);

  VAR_9 = &VAR_5->tx_stats;

  FUNC_0(VAR_12, VAR_21, VAR_1,
      "count", VAR_0,
      &VAR_9->cnt, "Packets sent");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "bytes", VAR_0,
      &VAR_9->bytes, "Bytes sent");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "prepare_ctx_err", VAR_0,
      &VAR_9->prepare_ctx_err,
      "TX buffer preparation failures");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "dma_mapping_err", VAR_0,
      &VAR_9->dma_mapping_err, "DMA mapping failures");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "doorbells", VAR_0,
      &VAR_9->doorbells, "Queue doorbells");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "missing_tx_comp", VAR_0,
      &VAR_9->missing_tx_comp, "TX completions missed");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "bad_req_id", VAR_0,
      &VAR_9->bad_req_id, "Bad request id count");
  FUNC_0(VAR_12, VAR_21, VAR_1,
          "mbuf_collapses", VAR_0,
          &VAR_9->collapse,
          "Mbuf collapse count");
  FUNC_0(VAR_12, VAR_21, VAR_1,
          "mbuf_collapse_err", VAR_0,
          &VAR_9->collapse_err,
          "Mbuf collapse failures");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "queue_wakeups", VAR_0,
      &VAR_9->queue_wakeup, "Queue wakeups");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "queue_stops", VAR_0,
      &VAR_9->queue_stop, "Queue stops");
  FUNC_0(VAR_12, VAR_21, VAR_1,
      "llq_buffer_copy", VAR_0,
      &VAR_9->llq_buffer_copy,
      "Header copies for llq transaction");


  VAR_17 = FUNC_1(VAR_12, VAR_20, VAR_1,
      "rx_ring", VAR_0, ((void*)0), "RX ring");
  VAR_22 = FUNC_3(VAR_17);

  VAR_10 = &VAR_6->rx_stats;

  FUNC_0(VAR_12, VAR_22, VAR_1,
      "count", VAR_0,
      &VAR_10->cnt, "Packets received");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "bytes", VAR_0,
      &VAR_10->bytes, "Bytes received");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "refil_partial", VAR_0,
      &VAR_10->refil_partial, "Partial refilled mbufs");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "bad_csum", VAR_0,
      &VAR_10->bad_csum, "Bad RX checksum");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "mbuf_alloc_fail", VAR_0,
      &VAR_10->mbuf_alloc_fail, "Failed mbuf allocs");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "mjum_alloc_fail", VAR_0,
      &VAR_10->mjum_alloc_fail, "Failed jumbo mbuf allocs");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "dma_mapping_err", VAR_0,
      &VAR_10->dma_mapping_err, "DMA mapping errors");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "bad_desc_num", VAR_0,
      &VAR_10->bad_desc_num, "Bad descriptor count");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "bad_req_id", VAR_0,
      &VAR_10->bad_req_id, "Bad request id count");
  FUNC_0(VAR_12, VAR_22, VAR_1,
      "empty_rx_ring", VAR_0,
      &VAR_10->empty_rx_ring, "RX descriptors depletion count");
 }


 VAR_18 = FUNC_1(VAR_12, VAR_14, VAR_1, "hw_stats",
     VAR_0, ((void*)0), "Statistics from hardware");
 VAR_23 = FUNC_3(VAR_18);

 FUNC_0(VAR_12, VAR_23, VAR_1, "rx_packets", VAR_0,
     &VAR_7->rx_packets, "Packets received");
 FUNC_0(VAR_12, VAR_23, VAR_1, "tx_packets", VAR_0,
     &VAR_7->tx_packets, "Packets transmitted");
 FUNC_0(VAR_12, VAR_23, VAR_1, "rx_bytes", VAR_0,
     &VAR_7->rx_bytes, "Bytes received");
 FUNC_0(VAR_12, VAR_23, VAR_1, "tx_bytes", VAR_0,
     &VAR_7->tx_bytes, "Bytes transmitted");
 FUNC_0(VAR_12, VAR_23, VAR_1, "rx_drops", VAR_0,
     &VAR_7->rx_drops, "Receive packet drops");


 VAR_19 = FUNC_1(VAR_12, VAR_14, VAR_1, "admin_stats",
     VAR_0, ((void*)0), "ENA Admin Queue statistics");
 VAR_24 = FUNC_3(VAR_19);

 FUNC_2(VAR_12, VAR_24, VAR_1, "aborted_cmd", VAR_0,
     &VAR_11->aborted_cmd, 0, "Aborted commands");
 FUNC_2(VAR_12, VAR_24, VAR_1, "sumbitted_cmd", VAR_0,
     &VAR_11->submitted_cmd, 0, "Submitted commands");
 FUNC_2(VAR_12, VAR_24, VAR_1, "completed_cmd", VAR_0,
     &VAR_11->completed_cmd, 0, "Completed commands");
 FUNC_2(VAR_12, VAR_24, VAR_1, "out_of_space", VAR_0,
     &VAR_11->out_of_space, 0, "Queue out of space");
 FUNC_2(VAR_12, VAR_24, VAR_1, "no_completion", VAR_0,
     &VAR_11->no_completion, 0, "Commands not completed");
}
