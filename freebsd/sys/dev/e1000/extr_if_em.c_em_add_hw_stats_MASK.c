
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_ring {int tx_irq; int me; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rx_ring {int rx_irq; int me; } ;
struct em_tx_queue {struct tx_ring txr; } ;
struct em_rx_queue {struct rx_ring rxr; } ;
struct e1000_hw_stats {int icrxoc; int icrxdmtc; int ictxqmtc; int ictxqec; int ictxatc; int ictxptc; int icrxatc; int icrxptc; int iac; int tsctfc; int tsctc; int ptc1522; int ptc1023; int ptc511; int ptc255; int ptc127; int ptc64; int mptc; int bptc; int gptc; int tpt; int gotc; int gorc; int prc1522; int prc1023; int prc511; int prc255; int prc127; int prc64; int mprc; int bprc; int gprc; int tpr; int xofftxc; int xoffrxc; int xontxc; int xonrxc; int cexterr; int algnerrc; int crcerrs; int rxerrc; int rjc; int roc; int rfc; int ruc; int rnbc; int mpc; int dc; int sec; int symerrs; int colc; int latecol; int mcc; int scc; int ecol; } ;
struct TYPE_3__ {int low_water; int high_water; } ;
struct TYPE_4__ {TYPE_1__ fc; } ;
struct adapter {int tx_num_queues; int rx_num_queues; struct e1000_hw_stats stats; TYPE_2__ hw; int watchdog_events; int rx_overruns; int link_irq; int dropped_pkts; struct em_rx_queue* rx_queues; struct em_tx_queue* tx_queues; int ctx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sysctl_oid* FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct adapter*,int ,int ,char*,char*) ;
 int FUNC_6 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 int FUNC_7 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_8 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_9 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_10 (int ) ;
 struct sysctl_oid* FUNC_11 (int ) ;
 int VAR_6 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_14(struct adapter *VAR_7)
{
 device_t VAR_8 = FUNC_12(VAR_7->ctx);
 struct em_tx_queue *VAR_9 = VAR_7->tx_queues;
 struct em_rx_queue *VAR_10 = VAR_7->rx_queues;

 struct sysctl_ctx_list *VAR_11 = FUNC_10(VAR_8);
 struct sysctl_oid *VAR_12 = FUNC_11(VAR_8);
 struct sysctl_oid_list *VAR_13 = FUNC_9(VAR_12);
 struct e1000_hw_stats *VAR_14 = &VAR_7->stats;

 struct sysctl_oid *VAR_15, *VAR_16, *VAR_17;
 struct sysctl_oid_list *VAR_18, *VAR_19, *VAR_20;


 char VAR_21[32];


 FUNC_7(VAR_11, VAR_13, VAR_4, "dropped",
   VAR_0, &VAR_7->dropped_pkts,
   "Driver dropped packets");
 FUNC_7(VAR_11, VAR_13, VAR_4, "link_irq",
   VAR_0, &VAR_7->link_irq,
   "Link MSI-X IRQ Handled");
 FUNC_7(VAR_11, VAR_13, VAR_4, "rx_overruns",
   VAR_0, &VAR_7->rx_overruns,
   "RX overruns");
 FUNC_7(VAR_11, VAR_13, VAR_4, "watchdog_timeouts",
   VAR_0, &VAR_7->watchdog_events,
   "Watchdog timeouts");
 FUNC_5(VAR_11, VAR_13, VAR_4, "device_control",
   VAR_1 | VAR_0, VAR_7, VAR_2,
   VAR_6, "IU",
   "Device Control Register");
 FUNC_5(VAR_11, VAR_13, VAR_4, "rx_control",
   VAR_1 | VAR_0, VAR_7, VAR_3,
   VAR_6, "IU",
   "Receiver Control Register");
 FUNC_6(VAR_11, VAR_13, VAR_4, "fc_high_water",
   VAR_0, &VAR_7->hw.fc.high_water, 0,
   "Flow Control High Watermark");
 FUNC_6(VAR_11, VAR_13, VAR_4, "fc_low_water",
   VAR_0, &VAR_7->hw.fc.low_water, 0,
   "Flow Control Low Watermark");

 for (int VAR_22 = 0; VAR_22 < VAR_7->tx_num_queues; VAR_22++, VAR_9++) {
  struct tx_ring *VAR_23 = &VAR_9->txr;
  FUNC_13(VAR_21, 32, "queue_tx_%d", VAR_22);
  VAR_16 = FUNC_4(VAR_11, VAR_13, VAR_4, VAR_21,
         VAR_0, ((void*)0), "TX Queue Name");
  VAR_19 = FUNC_9(VAR_16);

  FUNC_5(VAR_11, VAR_19, VAR_4, "txd_head",
    VAR_1 | VAR_0, VAR_7,
    FUNC_2(VAR_23->me),
    VAR_6, "IU",
    "Transmit Descriptor Head");
  FUNC_5(VAR_11, VAR_19, VAR_4, "txd_tail",
    VAR_1 | VAR_0, VAR_7,
    FUNC_3(VAR_23->me),
    VAR_6, "IU",
    "Transmit Descriptor Tail");
  FUNC_7(VAR_11, VAR_19, VAR_4, "tx_irq",
    VAR_0, &VAR_23->tx_irq,
    "Queue MSI-X Transmit Interrupts");
 }

 for (int VAR_24 = 0; VAR_24 < VAR_7->rx_num_queues; VAR_24++, VAR_10++) {
  struct rx_ring *VAR_25 = &VAR_10->rxr;
  FUNC_13(VAR_21, 32, "queue_rx_%d", VAR_24);
  VAR_16 = FUNC_4(VAR_11, VAR_13, VAR_4, VAR_21,
         VAR_0, ((void*)0), "RX Queue Name");
  VAR_19 = FUNC_9(VAR_16);

  FUNC_5(VAR_11, VAR_19, VAR_4, "rxd_head",
    VAR_1 | VAR_0, VAR_7,
    FUNC_0(VAR_25->me),
    VAR_6, "IU",
    "Receive Descriptor Head");
  FUNC_5(VAR_11, VAR_19, VAR_4, "rxd_tail",
    VAR_1 | VAR_0, VAR_7,
    FUNC_1(VAR_25->me),
    VAR_6, "IU",
    "Receive Descriptor Tail");
  FUNC_7(VAR_11, VAR_19, VAR_4, "rx_irq",
    VAR_0, &VAR_25->rx_irq,
    "Queue MSI-X Receive Interrupts");
 }



 VAR_15 = FUNC_4(VAR_11, VAR_13, VAR_4, "mac_stats",
        VAR_0, ((void*)0), "Statistics");
 VAR_18 = FUNC_9(VAR_15);

 FUNC_8(VAR_11, VAR_18, VAR_4, "excess_coll",
   VAR_0, &VAR_14->ecol,
   "Excessive collisions");
 FUNC_8(VAR_11, VAR_18, VAR_4, "single_coll",
   VAR_0, &VAR_14->scc,
   "Single collisions");
 FUNC_8(VAR_11, VAR_18, VAR_4, "multiple_coll",
   VAR_0, &VAR_14->mcc,
   "Multiple collisions");
 FUNC_8(VAR_11, VAR_18, VAR_4, "late_coll",
   VAR_0, &VAR_14->latecol,
   "Late collisions");
 FUNC_8(VAR_11, VAR_18, VAR_4, "collision_count",
   VAR_0, &VAR_14->colc,
   "Collision Count");
 FUNC_8(VAR_11, VAR_18, VAR_4, "symbol_errors",
   VAR_0, &VAR_7->stats.symerrs,
   "Symbol Errors");
 FUNC_8(VAR_11, VAR_18, VAR_4, "sequence_errors",
   VAR_0, &VAR_7->stats.sec,
   "Sequence Errors");
 FUNC_8(VAR_11, VAR_18, VAR_4, "defer_count",
   VAR_0, &VAR_7->stats.dc,
   "Defer Count");
 FUNC_8(VAR_11, VAR_18, VAR_4, "missed_packets",
   VAR_0, &VAR_7->stats.mpc,
   "Missed Packets");
 FUNC_8(VAR_11, VAR_18, VAR_4, "recv_no_buff",
   VAR_0, &VAR_7->stats.rnbc,
   "Receive No Buffers");
 FUNC_8(VAR_11, VAR_18, VAR_4, "recv_undersize",
   VAR_0, &VAR_7->stats.ruc,
   "Receive Undersize");
 FUNC_8(VAR_11, VAR_18, VAR_4, "recv_fragmented",
   VAR_0, &VAR_7->stats.rfc,
   "Fragmented Packets Received ");
 FUNC_8(VAR_11, VAR_18, VAR_4, "recv_oversize",
   VAR_0, &VAR_7->stats.roc,
   "Oversized Packets Received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "recv_jabber",
   VAR_0, &VAR_7->stats.rjc,
   "Recevied Jabber");
 FUNC_8(VAR_11, VAR_18, VAR_4, "recv_errs",
   VAR_0, &VAR_7->stats.rxerrc,
   "Receive Errors");
 FUNC_8(VAR_11, VAR_18, VAR_4, "crc_errs",
   VAR_0, &VAR_7->stats.crcerrs,
   "CRC errors");
 FUNC_8(VAR_11, VAR_18, VAR_4, "alignment_errs",
   VAR_0, &VAR_7->stats.algnerrc,
   "Alignment Errors");

 FUNC_8(VAR_11, VAR_18, VAR_4, "coll_ext_errs",
   VAR_0, &VAR_7->stats.cexterr,
   "Collision/Carrier extension errors");
 FUNC_8(VAR_11, VAR_18, VAR_4, "xon_recvd",
   VAR_0, &VAR_7->stats.xonrxc,
   "XON Received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "xon_txd",
   VAR_0, &VAR_7->stats.xontxc,
   "XON Transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "xoff_recvd",
   VAR_0, &VAR_7->stats.xoffrxc,
   "XOFF Received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "xoff_txd",
   VAR_0, &VAR_7->stats.xofftxc,
   "XOFF Transmitted");


 FUNC_8(VAR_11, VAR_18, VAR_4, "total_pkts_recvd",
   VAR_0, &VAR_7->stats.tpr,
   "Total Packets Received ");
 FUNC_8(VAR_11, VAR_18, VAR_4, "good_pkts_recvd",
   VAR_0, &VAR_7->stats.gprc,
   "Good Packets Received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "bcast_pkts_recvd",
   VAR_0, &VAR_7->stats.bprc,
   "Broadcast Packets Received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "mcast_pkts_recvd",
   VAR_0, &VAR_7->stats.mprc,
   "Multicast Packets Received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "rx_frames_64",
   VAR_0, &VAR_7->stats.prc64,
   "64 byte frames received ");
 FUNC_8(VAR_11, VAR_18, VAR_4, "rx_frames_65_127",
   VAR_0, &VAR_7->stats.prc127,
   "65-127 byte frames received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "rx_frames_128_255",
   VAR_0, &VAR_7->stats.prc255,
   "128-255 byte frames received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "rx_frames_256_511",
   VAR_0, &VAR_7->stats.prc511,
   "256-511 byte frames received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "rx_frames_512_1023",
   VAR_0, &VAR_7->stats.prc1023,
   "512-1023 byte frames received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "rx_frames_1024_1522",
   VAR_0, &VAR_7->stats.prc1522,
   "1023-1522 byte frames received");
 FUNC_8(VAR_11, VAR_18, VAR_4, "good_octets_recvd",
   VAR_0, &VAR_7->stats.gorc,
   "Good Octets Received");


 FUNC_8(VAR_11, VAR_18, VAR_4, "good_octets_txd",
   VAR_0, &VAR_7->stats.gotc,
   "Good Octets Transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "total_pkts_txd",
   VAR_0, &VAR_7->stats.tpt,
   "Total Packets Transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "good_pkts_txd",
   VAR_0, &VAR_7->stats.gptc,
   "Good Packets Transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "bcast_pkts_txd",
   VAR_0, &VAR_7->stats.bptc,
   "Broadcast Packets Transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "mcast_pkts_txd",
   VAR_0, &VAR_7->stats.mptc,
   "Multicast Packets Transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tx_frames_64",
   VAR_0, &VAR_7->stats.ptc64,
   "64 byte frames transmitted ");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tx_frames_65_127",
   VAR_0, &VAR_7->stats.ptc127,
   "65-127 byte frames transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tx_frames_128_255",
   VAR_0, &VAR_7->stats.ptc255,
   "128-255 byte frames transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tx_frames_256_511",
   VAR_0, &VAR_7->stats.ptc511,
   "256-511 byte frames transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tx_frames_512_1023",
   VAR_0, &VAR_7->stats.ptc1023,
   "512-1023 byte frames transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tx_frames_1024_1522",
   VAR_0, &VAR_7->stats.ptc1522,
   "1024-1522 byte frames transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tso_txd",
   VAR_0, &VAR_7->stats.tsctc,
   "TSO Contexts Transmitted");
 FUNC_8(VAR_11, VAR_18, VAR_4, "tso_ctx_fail",
   VAR_0, &VAR_7->stats.tsctfc,
   "TSO Contexts Failed");




 VAR_17 = FUNC_4(VAR_11, VAR_13, VAR_4, "interrupts",
        VAR_0, ((void*)0), "Interrupt Statistics");
 VAR_20 = FUNC_9(VAR_17);

 FUNC_8(VAR_11, VAR_20, VAR_4, "asserts",
   VAR_0, &VAR_7->stats.iac,
   "Interrupt Assertion Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "rx_pkt_timer",
   VAR_0, &VAR_7->stats.icrxptc,
   "Interrupt Cause Rx Pkt Timer Expire Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "rx_abs_timer",
   VAR_0, &VAR_7->stats.icrxatc,
   "Interrupt Cause Rx Abs Timer Expire Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "tx_pkt_timer",
   VAR_0, &VAR_7->stats.ictxptc,
   "Interrupt Cause Tx Pkt Timer Expire Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "tx_abs_timer",
   VAR_0, &VAR_7->stats.ictxatc,
   "Interrupt Cause Tx Abs Timer Expire Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "tx_queue_empty",
   VAR_0, &VAR_7->stats.ictxqec,
   "Interrupt Cause Tx Queue Empty Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "tx_queue_min_thresh",
   VAR_0, &VAR_7->stats.ictxqmtc,
   "Interrupt Cause Tx Queue Min Thresh Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "rx_desc_min_thresh",
   VAR_0, &VAR_7->stats.icrxdmtc,
   "Interrupt Cause Rx Desc Min Thresh Count");

 FUNC_8(VAR_11, VAR_20, VAR_4, "rx_overrun",
   VAR_0, &VAR_7->stats.icrxoc,
   "Interrupt Cause Receiver Overrun Count");
}
