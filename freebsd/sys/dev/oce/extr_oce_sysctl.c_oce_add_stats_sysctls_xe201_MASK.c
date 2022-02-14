
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_15__ {int tx_control_frames; int tx_pause_frames; int rx_fifo_overflow; int rx_udp_checksum_errors; int rx_tcp_checksum_errors; int rx_ip_checksum_errors; int rx_dropped_runt; int rx_dropped_invalid_tcp_length; int rx_dropped_header_too_small; int rx_dropped_too_short; int rx_dropped_too_small; int rx_address_match_errors; int rx_frames_too_long; int rx_out_of_range_errors; int rx_in_range_errors; int rx_alignment_errors; int rx_crc_errors; int rx_control_frames; int rx_pause_frames; } ;
struct TYPE_16__ {TYPE_5__ xe201; } ;
struct TYPE_14__ {int t_ipv6_ext_hdr_tx_drop; int t_tx_compl; int t_tx_wrbs; int t_tx_stops; int t_tx_reqs; int t_tx_bytes; int t_tx_pkts; } ;
struct TYPE_11__ {int t_rxcp_errs; int t_rx_ucast_pkts; int t_rx_mcast_pkts; int t_rx_frags; int t_rx_bytes; int t_rx_pkts; } ;
struct oce_drv_stats {TYPE_6__ u0; TYPE_4__ tx; TYPE_1__ rx; } ;
struct TYPE_19__ {int nrqs; int nwqs; TYPE_8__** wq; TYPE_3__** rq; struct oce_drv_stats oce_stats_info; } ;
struct TYPE_17__ {int ipv6_ext_hdr_tx_drop; int tx_compl; int tx_wrbs; int tx_stops; int tx_reqs; int tx_bytes; int tx_pkts; } ;
struct TYPE_18__ {TYPE_7__ tx_stats; } ;
struct TYPE_12__ {int rxcp_err; int rx_ucast_pkts; int rx_mcast_pkts; int rx_frags; int rx_bytes; int rx_pkts; } ;
struct TYPE_13__ {TYPE_2__ rx_stats; } ;
typedef TYPE_9__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
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

 VAR_5 = FUNC_0(VAR_3,
     FUNC_4(VAR_4),
     VAR_1, "rx", VAR_0,
     ((void*)0), "RX Ethernet Statistics");
 VAR_7 = FUNC_4(VAR_5);


 FUNC_1(VAR_3, VAR_7, VAR_1, "total_pkts",
   VAR_0, &VAR_11->rx.t_rx_pkts,
   "Total Received Packets");
 FUNC_1(VAR_3, VAR_7, VAR_1, "total_bytes",
   VAR_0, &VAR_11->rx.t_rx_bytes,
   "Total Received Bytes");
 FUNC_2(VAR_3, VAR_7, VAR_1, "total_frags",
   VAR_0, &VAR_11->rx.t_rx_frags, 0,
   "Total Received Fragements");
 FUNC_2(VAR_3, VAR_7, VAR_1, "total_mcast_pkts",
   VAR_0, &VAR_11->rx.t_rx_mcast_pkts, 0,
   "Total Received Multicast Packets");
 FUNC_2(VAR_3, VAR_7, VAR_1, "total_ucast_pkts",
   VAR_0, &VAR_11->rx.t_rx_ucast_pkts, 0,
   "Total Received Unicast Packets");
 FUNC_2(VAR_3, VAR_7, VAR_1, "total_rxcp_errs",
   VAR_0, &VAR_11->rx.t_rxcp_errs, 0,
   "Total Receive completion errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "pause_frames",
   VAR_0, &VAR_11->u0.xe201.rx_pause_frames,
   "Pause Frames");
 FUNC_3(VAR_3, VAR_7, VAR_1, "control_frames",
   VAR_0, &VAR_11->u0.xe201.rx_control_frames,
   "Control Frames");

 for (VAR_13 = 0; VAR_13 < VAR_2->nrqs; VAR_13++) {
  FUNC_5(VAR_12, "queue%d",VAR_13);
  VAR_10 = FUNC_0(VAR_3,
      FUNC_4(VAR_5),
      VAR_1, VAR_12, VAR_0,
      ((void*)0), "Queue name");
  VAR_9 = FUNC_4(VAR_10);

  FUNC_1(VAR_3, VAR_9, VAR_1, "rx_pkts",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rx_pkts,
   "Receive Packets");
  FUNC_1(VAR_3, VAR_9, VAR_1, "rx_bytes",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rx_bytes,
   "Recived Bytes");
  FUNC_2(VAR_3, VAR_9, VAR_1, "rx_frags",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rx_frags, 0,
   "Received Fragments");
  FUNC_2(VAR_3, VAR_9, VAR_1,
   "rx_mcast_pkts", VAR_0,
   &VAR_2->rq[VAR_13]->rx_stats.rx_mcast_pkts, 0,
   "Received Multicast Packets");
  FUNC_2(VAR_3, VAR_9, VAR_1,
   "rx_ucast_pkts",VAR_0,
   &VAR_2->rq[VAR_13]->rx_stats.rx_ucast_pkts, 0,
   "Received Unicast Packets");
  FUNC_2(VAR_3, VAR_9, VAR_1, "rxcp_err",
   VAR_0, &VAR_2->rq[VAR_13]->rx_stats.rxcp_err, 0,
   "Received Completion Errors");

 }

 VAR_5 = FUNC_0(VAR_3,
     FUNC_4(VAR_5),
     VAR_1, "err", VAR_0,
     ((void*)0), "Receive Error Stats");
 VAR_7 = FUNC_4(VAR_5);

 FUNC_3(VAR_3, VAR_7, VAR_1, "crc_errs",
   VAR_0, &VAR_11->u0.xe201.rx_crc_errors,
   "CRC Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "alignment_errors",
   VAR_0, &VAR_11->u0.xe201.rx_alignment_errors,
   "RX Alignmnet Errors");
 FUNC_2(VAR_3, VAR_7, VAR_1, "in_range_errors",
   VAR_0, &VAR_11->u0.xe201.rx_in_range_errors, 0,
   "In Range Errors");
 FUNC_2(VAR_3, VAR_7, VAR_1, "out_range_errors",
   VAR_0, &VAR_11->u0.xe201.rx_out_of_range_errors, 0,
   "Out Range Errors");
 FUNC_3(VAR_3, VAR_7, VAR_1, "frame_too_long",
   VAR_0, &VAR_11->u0.xe201.rx_frames_too_long,
   "Frame Too Long");
 FUNC_2(VAR_3, VAR_7, VAR_1, "address_match_errors",
   VAR_0, &VAR_11->u0.xe201.rx_address_match_errors, 0,
   "Address Match Errors");
 FUNC_2(VAR_3, VAR_7, VAR_1, "dropped_too_small",
   VAR_0, &VAR_11->u0.xe201.rx_dropped_too_small, 0,
   "Dropped Too Small");
 FUNC_2(VAR_3, VAR_7, VAR_1, "dropped_too_short",
   VAR_0, &VAR_11->u0.xe201.rx_dropped_too_short, 0,
   "Dropped Too Short");
 FUNC_2(VAR_3, VAR_7, VAR_1,
   "dropped_header_too_small", VAR_0,
   &VAR_11->u0.xe201.rx_dropped_header_too_small, 0,
   "Dropped Header Too Small");
 FUNC_2(VAR_3, VAR_7, VAR_1,
   "dropped_tcp_length", VAR_0,
   &VAR_11->u0.xe201.rx_dropped_invalid_tcp_length, 0,
   "Dropped TCP Length");
 FUNC_2(VAR_3, VAR_7, VAR_1, "dropped_runt",
   VAR_0, &VAR_11->u0.xe201.rx_dropped_runt, 0,
   "Dropped runt");
 FUNC_2(VAR_3, VAR_7, VAR_1, "ip_checksum_errs",
   VAR_0, &VAR_11->u0.xe201.rx_ip_checksum_errors, 0,
   "IP Checksum Errors");
 FUNC_2(VAR_3, VAR_7, VAR_1, "tcp_checksum_errs",
   VAR_0, &VAR_11->u0.xe201.rx_tcp_checksum_errors, 0,
   "TCP Checksum Errors");
 FUNC_2(VAR_3, VAR_7, VAR_1, "udp_checksum_errs",
   VAR_0, &VAR_11->u0.xe201.rx_udp_checksum_errors, 0,
   "UDP Checksum Errors");
 FUNC_2(VAR_3, VAR_7, VAR_1, "input_fifo_overflow_drop",
   VAR_0, &VAR_11->u0.xe201.rx_fifo_overflow, 0,
   "Input FIFO Overflow Drop");

 VAR_6 = FUNC_0(VAR_3,
     FUNC_4(VAR_4),
     VAR_1, "tx", VAR_0,
     ((void*)0), "TX Ethernet Statistics");
 VAR_8 = FUNC_4(VAR_6);

 FUNC_1(VAR_3, VAR_8, VAR_1, "total_tx_pkts",
   VAR_0, &VAR_11->tx.t_tx_pkts,
   "Total Transmit Packets");
 FUNC_1(VAR_3, VAR_8, VAR_1, "total_tx_bytes",
   VAR_0, &VAR_11->tx.t_tx_bytes,
   "Total Transmit Bytes");
 FUNC_2(VAR_3, VAR_8, VAR_1, "total_tx_reqs",
   VAR_0, &VAR_11->tx.t_tx_reqs, 0,
   "Total Transmit Requests");
 FUNC_2(VAR_3, VAR_8, VAR_1, "total_tx_stops",
   VAR_0, &VAR_11->tx.t_tx_stops, 0,
   "Total Transmit Stops");
 FUNC_2(VAR_3, VAR_8, VAR_1, "total_tx_wrbs",
   VAR_0, &VAR_11->tx.t_tx_wrbs, 0,
   "Total Transmit WRB's");
 FUNC_2(VAR_3, VAR_8, VAR_1, "total_tx_compl",
   VAR_0, &VAR_11->tx.t_tx_compl, 0,
   "Total Transmit Completions");
 FUNC_2(VAR_3, VAR_8, VAR_1,
   "total_ipv6_ext_hdr_tx_drop",
   VAR_0, &VAR_11->tx.t_ipv6_ext_hdr_tx_drop, 0,
   "Total Transmit IPV6 Drops");
 FUNC_3(VAR_3, VAR_8, VAR_1, "pauseframes",
   VAR_0, &VAR_11->u0.xe201.tx_pause_frames,
   "Pause Frames");
 FUNC_3(VAR_3, VAR_8, VAR_1, "controlframes",
   VAR_0, &VAR_11->u0.xe201.tx_control_frames,
   "Tx Control Frames");

 for (VAR_13 = 0; VAR_13 < VAR_2->nwqs; VAR_13++) {
  FUNC_5(VAR_12, "queue%d",VAR_13);
  VAR_10 = FUNC_0(VAR_3,
      FUNC_4(VAR_6),
      VAR_1, VAR_12, VAR_0,
      ((void*)0), "Queue name");
  VAR_9 = FUNC_4(VAR_10);

  FUNC_1(VAR_3, VAR_9, VAR_1, "tx_pkts",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_pkts,
   "Transmit Packets");
  FUNC_1(VAR_3, VAR_9, VAR_1, "tx_bytes",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_bytes,
   "Transmit Bytes");
  FUNC_2(VAR_3, VAR_9, VAR_1, "tx_reqs",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_reqs, 0,
   "Transmit Requests");
  FUNC_2(VAR_3, VAR_9, VAR_1, "tx_stops",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_stops, 0,
   "Transmit Stops");
  FUNC_2(VAR_3, VAR_9, VAR_1, "tx_wrbs",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_wrbs, 0,
   "Transmit WRB's");
  FUNC_2(VAR_3, VAR_9, VAR_1, "tx_compl",
   VAR_0, &VAR_2->wq[VAR_13]->tx_stats.tx_compl, 0,
   "Transmit Completions");
  FUNC_2(VAR_3, VAR_9, VAR_1,
   "ipv6_ext_hdr_tx_drop", VAR_0,
   &VAR_2->wq[VAR_13]->tx_stats.ipv6_ext_hdr_tx_drop, 0,
   "Transmit IPV6 Ext Header Drop");

 }
 return;
}
