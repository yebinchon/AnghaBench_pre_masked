
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_12__ {int deactivate; int activate; int queue_active; int defrag; int wake; int stall; int pkt_done; int done; int req; } ;
struct TYPE_11__ {int lro_queued; int lro_bad_csum; int lro_flushed; } ;
struct TYPE_10__ {int cnt; } ;
struct TYPE_9__ {int cnt; } ;
struct mxge_slice_state {TYPE_4__ tx; TYPE_3__ lc; TYPE_2__ rx_big; TYPE_1__ rx_small; void* sysctl_tree; struct sysctl_ctx_list sysctl_ctx; TYPE_6__* fw_stats; } ;
struct TYPE_13__ {int num_slices; void* slice_sysctl_tree; struct mxge_slice_state* ss; struct sysctl_ctx_list slice_sysctl_ctx; int watchdog_resets; int read_write_dma; int write_dma; int read_dma; int wc; int tx_boundary; int link_width; int product_code_string; int serial_number_string; int fw_version; int dev; } ;
typedef TYPE_5__ mxge_softc_t ;
struct TYPE_14__ {TYPE_5__ dropped_unicast_filtered; TYPE_5__ dropped_runt; TYPE_5__ dropped_pause; TYPE_5__ dropped_overrun; TYPE_5__ dropped_no_small_buffer; TYPE_5__ dropped_no_big_buffer; TYPE_5__ dropped_multicast_filtered; TYPE_5__ dropped_link_overflow; TYPE_5__ dropped_link_error_or_filtered; TYPE_5__ dropped_bad_phy; TYPE_5__ dropped_bad_crc32; TYPE_5__ rdma_tags_available; TYPE_5__ link_up; } ;
typedef TYPE_6__ mcp_irq_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 void* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,TYPE_5__*,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,int ,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_5 (void*) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (struct sysctl_ctx_list*) ;

__attribute__((used)) static void
FUNC_10(mxge_softc_t *VAR_10)
{
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid_list *VAR_12;
 mcp_irq_data_t *VAR_13;
 struct mxge_slice_state *VAR_14;
 int VAR_15;
 char VAR_16[8];

 VAR_11 = FUNC_6(VAR_10->dev);
 VAR_12 = FUNC_5(FUNC_7(VAR_10->dev));
 VAR_13 = VAR_10->ss[0].fw_stats;


 FUNC_3(VAR_11, VAR_12, VAR_3,
         "firmware_version",
         VAR_0, VAR_10->fw_version,
         0, "firmware version");
 FUNC_3(VAR_11, VAR_12, VAR_3,
         "serial_number",
         VAR_0, VAR_10->serial_number_string,
         0, "serial number");
 FUNC_3(VAR_11, VAR_12, VAR_3,
         "product_code",
         VAR_0, VAR_10->product_code_string,
         0, "product_code");
 FUNC_0(VAR_11, VAR_12, VAR_3,
         "pcie_link_width",
         VAR_0, &VAR_10->link_width,
         0, "tx_boundary");
 FUNC_0(VAR_11, VAR_12, VAR_3,
         "tx_boundary",
         VAR_0, &VAR_10->tx_boundary,
         0, "tx_boundary");
 FUNC_0(VAR_11, VAR_12, VAR_3,
         "write_combine",
         VAR_0, &VAR_10->wc,
         0, "write combining PIO?");
 FUNC_0(VAR_11, VAR_12, VAR_3,
         "read_dma_MBs",
         VAR_0, &VAR_10->read_dma,
         0, "DMA Read speed in MB/s");
 FUNC_0(VAR_11, VAR_12, VAR_3,
         "write_dma_MBs",
         VAR_0, &VAR_10->write_dma,
         0, "DMA Write speed in MB/s");
 FUNC_0(VAR_11, VAR_12, VAR_3,
         "read_write_dma_MBs",
         VAR_0, &VAR_10->read_write_dma,
         0, "DMA concurrent Read/Write speed in MB/s");
 FUNC_0(VAR_11, VAR_12, VAR_3,
         "watchdog_resets",
         VAR_0, &VAR_10->watchdog_resets,
         0, "Number of times NIC was reset");



 FUNC_2(VAR_11, VAR_12, VAR_3,
   "intr_coal_delay",
   VAR_2|VAR_1, VAR_10,
   0, VAR_5,
   "I", "interrupt coalescing delay in usecs");

 FUNC_2(VAR_11, VAR_12, VAR_3,
   "throttle",
   VAR_2|VAR_1, VAR_10,
   0, VAR_6,
   "I", "transmit throttling");

 FUNC_2(VAR_11, VAR_12, VAR_3,
   "flow_control_enabled",
   VAR_2|VAR_1, VAR_10,
   0, VAR_4,
   "I", "interrupt coalescing delay in usecs");

 FUNC_0(VAR_11, VAR_12, VAR_3,
         "deassert_wait",
         VAR_1, &VAR_7,
         0, "Wait for IRQ line to go low in ihandler");



 FUNC_2(VAR_11, VAR_12, VAR_3,
   "link_up",
   VAR_2|VAR_0, &VAR_13->link_up,
   0, VAR_8,
   "I", "link up");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "rdma_tags_available",
   VAR_2|VAR_0, &VAR_13->rdma_tags_available,
   0, VAR_8,
   "I", "rdma_tags_available");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_bad_crc32",
   VAR_2|VAR_0,
   &VAR_13->dropped_bad_crc32,
   0, VAR_8,
   "I", "dropped_bad_crc32");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_bad_phy",
   VAR_2|VAR_0,
   &VAR_13->dropped_bad_phy,
   0, VAR_8,
   "I", "dropped_bad_phy");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_link_error_or_filtered",
   VAR_2|VAR_0,
   &VAR_13->dropped_link_error_or_filtered,
   0, VAR_8,
   "I", "dropped_link_error_or_filtered");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_link_overflow",
   VAR_2|VAR_0, &VAR_13->dropped_link_overflow,
   0, VAR_8,
   "I", "dropped_link_overflow");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_multicast_filtered",
   VAR_2|VAR_0,
   &VAR_13->dropped_multicast_filtered,
   0, VAR_8,
   "I", "dropped_multicast_filtered");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_no_big_buffer",
   VAR_2|VAR_0, &VAR_13->dropped_no_big_buffer,
   0, VAR_8,
   "I", "dropped_no_big_buffer");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_no_small_buffer",
   VAR_2|VAR_0,
   &VAR_13->dropped_no_small_buffer,
   0, VAR_8,
   "I", "dropped_no_small_buffer");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_overrun",
   VAR_2|VAR_0, &VAR_13->dropped_overrun,
   0, VAR_8,
   "I", "dropped_overrun");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_pause",
   VAR_2|VAR_0,
   &VAR_13->dropped_pause,
   0, VAR_8,
   "I", "dropped_pause");
 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_runt",
   VAR_2|VAR_0, &VAR_13->dropped_runt,
   0, VAR_8,
   "I", "dropped_runt");

 FUNC_2(VAR_11, VAR_12, VAR_3,
   "dropped_unicast_filtered",
   VAR_2|VAR_0, &VAR_13->dropped_unicast_filtered,
   0, VAR_8,
   "I", "dropped_unicast_filtered");


 FUNC_0(VAR_11, VAR_12, VAR_3,
         "verbose",
         VAR_1, &VAR_9,
         0, "verbose printing");


 FUNC_9(&VAR_10->slice_sysctl_ctx);
 VAR_10->slice_sysctl_tree =
  FUNC_1(&VAR_10->slice_sysctl_ctx, VAR_12, VAR_3,
    "slice", VAR_0, 0, "");

 for (VAR_15 = 0; VAR_15 < VAR_10->num_slices; VAR_15++) {
  VAR_14 = &VAR_10->ss[VAR_15];
  FUNC_9(&VAR_14->sysctl_ctx);
  VAR_11 = &VAR_14->sysctl_ctx;
  VAR_12 = FUNC_5(VAR_10->slice_sysctl_tree);
  FUNC_8(VAR_16, "%d", VAR_15);
  VAR_14->sysctl_tree =
   FUNC_1(VAR_11, VAR_12, VAR_3, VAR_16,
     VAR_0, 0, "");
  VAR_12 = FUNC_5(VAR_14->sysctl_tree);
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "rx_small_cnt",
          VAR_0, &VAR_14->rx_small.cnt,
          0, "rx_small_cnt");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "rx_big_cnt",
          VAR_0, &VAR_14->rx_big.cnt,
          0, "rx_small_cnt");
  FUNC_4(VAR_11, VAR_12, VAR_3,
          "lro_flushed", VAR_0, &VAR_14->lc.lro_flushed,
          0, "number of lro merge queues flushed");

  FUNC_4(VAR_11, VAR_12, VAR_3,
          "lro_bad_csum", VAR_0, &VAR_14->lc.lro_bad_csum,
          0, "number of bad csums preventing LRO");

  FUNC_4(VAR_11, VAR_12, VAR_3,
          "lro_queued", VAR_0, &VAR_14->lc.lro_queued,
          0, "number of frames appended to lro merge"
          "queues");



  if (VAR_15 > 0)
   continue;

  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_req",
          VAR_0, &VAR_14->tx.req,
          0, "tx_req");

  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_done",
          VAR_0, &VAR_14->tx.done,
          0, "tx_done");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_pkt_done",
          VAR_0, &VAR_14->tx.pkt_done,
          0, "tx_done");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_stall",
          VAR_0, &VAR_14->tx.stall,
          0, "tx_stall");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_wake",
          VAR_0, &VAR_14->tx.wake,
          0, "tx_wake");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_defrag",
          VAR_0, &VAR_14->tx.defrag,
          0, "tx_defrag");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_queue_active",
          VAR_0, &VAR_14->tx.queue_active,
          0, "tx_queue_active");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_activate",
          VAR_0, &VAR_14->tx.activate,
          0, "tx_activate");
  FUNC_0(VAR_11, VAR_12, VAR_3,
          "tx_deactivate",
          VAR_0, &VAR_14->tx.deactivate,
          0, "tx_deactivate");
 }
}
