
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_16__ {int tx_controlframes; int tx_priority_pauseframes; int tx_pauseframes; int rx_input_fifo_overflow_drop; int rxpp_fifo_overflow_drop; int rx_udp_checksum_errs; int rx_tcp_checksum_errs; int rx_ip_checksum_errs; int rx_dropped_runt; int rx_dropped_tcp_length; int rx_dropped_header_too_small; int rx_dropped_too_short; int rx_dropped_too_small; int rx_address_match_errors; int rx_frame_too_long; int rx_out_range_errors; int rx_in_range_errors; int rx_drops_too_many_frags; int rx_drops_no_erx_descr; int rx_drops_no_pbuf; int rx_crc_errors; int rx_control_frames; int rx_priority_pause_frames; int rx_pause_frames; } ;
struct TYPE_17__ {TYPE_5__ be; } ;
struct TYPE_15__ {int t_ipv6_ext_hdr_tx_drop; int t_tx_compl; int t_tx_wrbs; int t_tx_stops; int t_tx_reqs; int t_tx_bytes; int t_tx_pkts; } ;
struct TYPE_12__ {int t_rxcp_errs; int t_rx_ucast_pkts; int t_rx_mcast_pkts; int t_rx_frags; int t_rx_bytes; int t_rx_pkts; } ;
struct oce_drv_stats {TYPE_6__ u0; TYPE_4__ tx; TYPE_1__ rx; } ;
struct TYPE_20__ {int nrqs; int nwqs; TYPE_8__** wq; TYPE_3__** rq; struct oce_drv_stats oce_stats_info; } ;
struct TYPE_18__ {int ipv6_ext_hdr_tx_drop; int tx_compl; int tx_wrbs; int tx_stops; int tx_reqs; int tx_bytes; int tx_pkts; } ;
struct TYPE_19__ {TYPE_7__ tx_stats; } ;
struct TYPE_13__ {int rx_drops_no_frags; int rxcp_err; int rx_ucast_pkts; int rx_mcast_pkts; int rx_frags; int rx_bytes; int rx_pkts; } ;
struct TYPE_14__ {TYPE_2__ rx_stats; } ;
typedef TYPE_9__* POCE_SOFTC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_9__*) ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_6(POCE_SOFTC VAR_2,
      struct sysctl_ctx_list *VAR_3,
      struct sysctl_oid *VAR_4)
{
 struct sysctl_oid *VAR_5, *VAR_6;
 struct sysctl_oid_list *VAR_7, *VAR_8;
 struct sysctl_oid_list *VAR_9;
 struct sysctl_oid *VAR_10;
 struct oce_drv_stats *VAR_11;
 char VAR_12[32];
 int VAR_13;

 VAR_11 = &VAR_2->oce_stats_info;

 VAR_5 = FUNC_1(VAR_3,
     FUNC_4(VAR_4),
     VAR_1,"rx", VAR_0,
     ((void*)0), "RX Ethernet Statistics");
 VAR_7 = FUNC_4(VAR_5);


 FUNC_2(VAR_3, VAR_7, VAR_1, "total_pkts",
   VAR_0, &VAR_11->rx.t_rx_pkts,
   "Total Received Packets");
 FUNC_2(VAR_3, VAR_7, VAR_1, "total_bytes",
   VAR_0, &VAR_11->rx.t_rx_bytes,
   "Total Received Bytes");
 FUNC_3(VAR_3, VAR_7, VAR_1, "total_frags",
   VAR_0, &VAR_11->rx.t_rx_frags, 0,
   "Total Received Fragements");
 FUNC_3(VAR_3, VAR_7, VAR_1, "total_mcast_pkts",
   VAR_0, &VAR_11->rx.t_rx_mcast_pkts, 0,
   "Total Received Multicast Packets");
 FUNC_3(VAR_3, VAR_7, VAR_1, "total_ucast_pkts",
   VAR_0, &VAR_11->rx.t_rx_ucast_pkts, 0,
   "Total Received Unicast Packets");
 FUNC_3(VAR_3, VAR_7, VAR_1, "total_rxcp_errs",
   VAR_0, &VAR_11->rx.t_rxcp_errs, 0,
   "Total Receive completion errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "pause_frames",
   VAR_0, &VAR_11->u0.be.rx_pause_frames, 0,
   "Pause Frames");
 FUNC_3(VAR_3, VAR_7, VAR_1, "priority_pause_frames",
   VAR_0, &VAR_11->u0.be.rx_priority_pause_frames, 0,
   "Priority Pause Frames");
 FUNC_3(VAR_3, VAR_7, VAR_1, "control_frames",
   VAR_0, &VAR_11->u0.be.rx_control_frames, 0,
   "Control Frames");

 for (VAR_13 = 0; VAR_13 < VAR_2->nrqs; VAR_13++) {
  FUNC_5(VAR_12, "queue%d",VAR_13);
  VAR_10 = FUNC_1(VAR_3,
      FUNC_4(VAR_5),
      VAR_1, VAR_12, VAR_0,
      ((void*)0), "Queue name");
  VAR_9 = FUNC_4(VAR_10);

  FUNC_2(VAR_3, VAR_9, VAR_1, "rx_pkts",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rx_pkts,
   "Receive Packets");
  FUNC_2(VAR_3, VAR_9, VAR_1, "rx_bytes",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rx_bytes,
   "Recived Bytes");
  FUNC_3(VAR_3, VAR_9, VAR_1, "rx_frags",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rx_frags, 0,
   "Received Fragments");
  FUNC_3(VAR_3, VAR_9, VAR_1,
    "rx_mcast_pkts", VAR_0,
    &VAR_2->rq[VAR_13]->rx_stats.rx_mcast_pkts, 0,
     "Received Multicast Packets");
  FUNC_3(VAR_3, VAR_9, VAR_1,
    "rx_ucast_pkts", VAR_0,
    &VAR_2->rq[VAR_13]->rx_stats.rx_ucast_pkts, 0,
     "Received Unicast Packets");
  FUNC_3(VAR_3, VAR_9, VAR_1, "rxcp_err",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rxcp_err, 0,
   "Received Completion Errors");
  if(FUNC_0(VAR_2)) {
   FUNC_3(VAR_3, VAR_9, VAR_1, "rx_drops_no_frags",
                         VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rx_drops_no_frags, 0,
                         "num of packet drops due to no fragments");
  }
 }

 VAR_5 = FUNC_1(VAR_3,
     FUNC_4(VAR_5),
     VAR_1, "err", VAR_0,
     ((void*)0), "Receive Error Stats");
 VAR_7 = FUNC_4(VAR_5);

 FUNC_3(VAR_3, VAR_7, VAR_1, "crc_errs",
   VAR_0, &VAR_11->u0.be.rx_crc_errors, 0,
   "CRC Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "pbuf_errors",
   VAR_0, &VAR_11->u0.be.rx_drops_no_pbuf, 0,
   "Drops due to pbuf full");
 FUNC_3(VAR_3, VAR_7, VAR_1, "erx_errors",
   VAR_0, &VAR_11->u0.be.rx_drops_no_erx_descr, 0,
   "ERX Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "alignment_errors",
   VAR_0, &VAR_11->u0.be.rx_drops_too_many_frags, 0,
   "RX Alignmnet Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "in_range_errors",
   VAR_0, &VAR_11->u0.be.rx_in_range_errors, 0,
   "In Range Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "out_range_errors",
   VAR_0, &VAR_11->u0.be.rx_out_range_errors, 0,
   "Out Range Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "frame_too_long",
   VAR_0, &VAR_11->u0.be.rx_frame_too_long, 0,
   "Frame Too Long");
 FUNC_3(VAR_3, VAR_7, VAR_1, "address_match_errors",
   VAR_0, &VAR_11->u0.be.rx_address_match_errors, 0,
   "Address Match Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "dropped_too_small",
   VAR_0, &VAR_11->u0.be.rx_dropped_too_small, 0,
   "Dropped Too Small");
 FUNC_3(VAR_3, VAR_7, VAR_1, "dropped_too_short",
   VAR_0, &VAR_11->u0.be.rx_dropped_too_short, 0,
   "Dropped Too Short");
 FUNC_3(VAR_3, VAR_7, VAR_1,
   "dropped_header_too_small", VAR_0,
   &VAR_11->u0.be.rx_dropped_header_too_small, 0,
   "Dropped Header Too Small");
 FUNC_3(VAR_3, VAR_7, VAR_1, "dropped_tcp_length",
   VAR_0, &VAR_11->u0.be.rx_dropped_tcp_length, 0,
   "Dropped TCP Length");
 FUNC_3(VAR_3, VAR_7, VAR_1, "dropped_runt",
   VAR_0, &VAR_11->u0.be.rx_dropped_runt, 0,
   "Dropped runt");
 FUNC_3(VAR_3, VAR_7, VAR_1, "ip_checksum_errs",
   VAR_0, &VAR_11->u0.be.rx_ip_checksum_errs, 0,
   "IP Checksum Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "tcp_checksum_errs",
   VAR_0, &VAR_11->u0.be.rx_tcp_checksum_errs, 0,
   "TCP Checksum Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "udp_checksum_errs",
   VAR_0, &VAR_11->u0.be.rx_udp_checksum_errs, 0,
   "UDP Checksum Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "fifo_overflow_drop",
   VAR_0, &VAR_11->u0.be.rxpp_fifo_overflow_drop, 0,
   "FIFO Overflow Drop");
 FUNC_3(VAR_3, VAR_7, VAR_1,
   "input_fifo_overflow_drop", VAR_0,
   &VAR_11->u0.be.rx_input_fifo_overflow_drop, 0,
   "Input FIFO Overflow Drop");

 VAR_6 = FUNC_1(VAR_3,
     FUNC_4(VAR_4), VAR_1,
     "tx",VAR_0, ((void*)0),
     "TX Ethernet Statistics");
 VAR_8 = FUNC_4(VAR_6);

 FUNC_2(VAR_3, VAR_8, VAR_1, "total_tx_pkts",
   VAR_0, &VAR_11->tx.t_tx_pkts,
   "Total Transmit Packets");
 FUNC_2(VAR_3, VAR_8, VAR_1, "total_tx_bytes",
   VAR_0, &VAR_11->tx.t_tx_bytes,
   "Total Transmit Bytes");
 FUNC_3(VAR_3, VAR_8, VAR_1, "total_tx_reqs",
   VAR_0, &VAR_11->tx.t_tx_reqs, 0,
   "Total Transmit Requests");
 FUNC_3(VAR_3, VAR_8, VAR_1, "total_tx_stops",
   VAR_0, &VAR_11->tx.t_tx_stops, 0,
   "Total Transmit Stops");
 FUNC_3(VAR_3, VAR_8, VAR_1, "total_tx_wrbs",
   VAR_0, &VAR_11->tx.t_tx_wrbs, 0,
   "Total Transmit WRB's");
 FUNC_3(VAR_3, VAR_8, VAR_1, "total_tx_compl",
   VAR_0, &VAR_11->tx.t_tx_compl, 0,
   "Total Transmit Completions");
 FUNC_3(VAR_3, VAR_8, VAR_1,
   "total_ipv6_ext_hdr_tx_drop", VAR_0,
   &VAR_11->tx.t_ipv6_ext_hdr_tx_drop, 0,
   "Total Transmit IPV6 Drops");
 FUNC_3(VAR_3, VAR_8, VAR_1, "pauseframes",
   VAR_0, &VAR_11->u0.be.tx_pauseframes, 0,
   "Pause Frames");
 FUNC_3(VAR_3, VAR_8, VAR_1, "priority_pauseframes",
   VAR_0, &VAR_11->u0.be.tx_priority_pauseframes, 0,
   "Priority Pauseframes");
 FUNC_3(VAR_3, VAR_8, VAR_1, "controlframes",
   VAR_0, &VAR_11->u0.be.tx_controlframes, 0,
   "Tx Control Frames");

 for (VAR_13 = 0; VAR_13 < VAR_2->nwqs; VAR_13++) {
  FUNC_5(VAR_12, "queue%d",VAR_13);
  VAR_10 = FUNC_1(VAR_3,
      FUNC_4(VAR_6),
      VAR_1, VAR_12, VAR_0,
      ((void*)0), "Queue name");
  VAR_9 = FUNC_4(VAR_10);

  FUNC_2(VAR_3, VAR_9, VAR_1, "tx_pkts",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_pkts,
   "Transmit Packets");
  FUNC_2(VAR_3, VAR_9, VAR_1, "tx_bytes",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_bytes,
   "Transmit Bytes");
  FUNC_3(VAR_3, VAR_9, VAR_1, "tx_reqs",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_reqs, 0,
   "Transmit Requests");
  FUNC_3(VAR_3, VAR_9, VAR_1, "tx_stops",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_stops, 0,
   "Transmit Stops");
  FUNC_3(VAR_3, VAR_9, VAR_1, "tx_wrbs",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_wrbs, 0,
   "Transmit WRB's");
  FUNC_3(VAR_3, VAR_9, VAR_1, "tx_compl",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_compl, 0,
   "Transmit Completions");
  FUNC_3(VAR_3, VAR_9, VAR_1,
   "ipv6_ext_hdr_tx_drop",VAR_0,
   &VAR_2->wq[VAR_13]->tx_stats.ipv6_ext_hdr_tx_drop, 0,
   "Transmit IPV6 Ext Header Drop");

 }
 return;
}
