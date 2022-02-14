
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct nfe_hw_stats {int tx_pause; int tx_frames; int tx_deferals; int tx_retry_errors; int tx_excess_deferals; int tx_carrier_losts; int tx_fifo_underuns; int tx_late_cols; int tx_multi_rexmits; int tx_one_rexmits; int tx_zero_rexmits; int tx_octets; int rx_drops; int rx_pause; int rx_octets; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_len_errors; int rx_fae; int rx_crc_errors; int rx_fifo_overuns; int rx_jumbos; int rx_runts; int rx_late_cols; int rx_extra_bytes; int rx_frame_errors; } ;
struct nfe_softc {scalar_t__ nfe_process_limit; int nfe_flags; int nfe_dev; struct nfe_hw_stats nfe_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_9 ;
 struct sysctl_oid* FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,scalar_t__*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,void*) ;
 int FUNC_10 (int ,int ,char*,scalar_t__*) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_11(struct nfe_softc *VAR_11)
{
 struct sysctl_ctx_list *VAR_12;
 struct sysctl_oid_list *VAR_13, *VAR_14;
 struct sysctl_oid *VAR_15;
 struct nfe_hw_stats *VAR_16;
 int VAR_17;

 VAR_16 = &VAR_11->nfe_stats;
 VAR_12 = FUNC_6(VAR_11->nfe_dev);
 VAR_13 = FUNC_4(FUNC_7(VAR_11->nfe_dev));
 FUNC_3(VAR_12, VAR_13,
     VAR_9, "process_limit", VAR_2 | VAR_1,
     &VAR_11->nfe_process_limit, 0, VAR_10, "I",
     "max number of Rx events to process");

 VAR_11->nfe_process_limit = VAR_6;
 VAR_17 = FUNC_10(FUNC_5(VAR_11->nfe_dev),
     FUNC_8(VAR_11->nfe_dev), "process_limit",
     &VAR_11->nfe_process_limit);
 if (VAR_17 == 0) {
  if (VAR_11->nfe_process_limit < VAR_8 ||
      VAR_11->nfe_process_limit > VAR_7) {
   FUNC_9(VAR_11->nfe_dev,
       "process_limit value out of range; "
       "using default: %d\n", VAR_6);
   VAR_11->nfe_process_limit = VAR_6;
  }
 }

 if ((VAR_11->nfe_flags & (VAR_3 | VAR_4 | VAR_5)) == 0)
  return;

 VAR_15 = FUNC_2(VAR_12, VAR_13, VAR_9, "stats", VAR_0,
     ((void*)0), "NFE statistics");
 VAR_14 = FUNC_4(VAR_15);


 VAR_15 = FUNC_2(VAR_12, VAR_14, VAR_9, "rx", VAR_0,
     ((void*)0), "Rx MAC statistics");
 VAR_13 = FUNC_4(VAR_15);

 FUNC_0(VAR_12, VAR_13, "frame_errors",
     &VAR_16->rx_frame_errors, "Framing Errors");
 FUNC_0(VAR_12, VAR_13, "extra_bytes",
     &VAR_16->rx_extra_bytes, "Extra Bytes");
 FUNC_0(VAR_12, VAR_13, "late_cols",
     &VAR_16->rx_late_cols, "Late Collisions");
 FUNC_0(VAR_12, VAR_13, "runts",
     &VAR_16->rx_runts, "Runts");
 FUNC_0(VAR_12, VAR_13, "jumbos",
     &VAR_16->rx_jumbos, "Jumbos");
 FUNC_0(VAR_12, VAR_13, "fifo_overuns",
     &VAR_16->rx_fifo_overuns, "FIFO Overruns");
 FUNC_0(VAR_12, VAR_13, "crc_errors",
     &VAR_16->rx_crc_errors, "CRC Errors");
 FUNC_0(VAR_12, VAR_13, "fae",
     &VAR_16->rx_fae, "Frame Alignment Errors");
 FUNC_0(VAR_12, VAR_13, "len_errors",
     &VAR_16->rx_len_errors, "Length Errors");
 FUNC_0(VAR_12, VAR_13, "unicast",
     &VAR_16->rx_unicast, "Unicast Frames");
 FUNC_0(VAR_12, VAR_13, "multicast",
     &VAR_16->rx_multicast, "Multicast Frames");
 FUNC_0(VAR_12, VAR_13, "broadcast",
     &VAR_16->rx_broadcast, "Broadcast Frames");
 if ((VAR_11->nfe_flags & VAR_4) != 0) {
  FUNC_1(VAR_12, VAR_13, "octets",
      &VAR_16->rx_octets, "Octets");
  FUNC_0(VAR_12, VAR_13, "pause",
      &VAR_16->rx_pause, "Pause frames");
  FUNC_0(VAR_12, VAR_13, "drops",
      &VAR_16->rx_drops, "Drop frames");
 }


 VAR_15 = FUNC_2(VAR_12, VAR_14, VAR_9, "tx", VAR_0,
     ((void*)0), "Tx MAC statistics");
 VAR_13 = FUNC_4(VAR_15);
 FUNC_1(VAR_12, VAR_13, "octets",
     &VAR_16->tx_octets, "Octets");
 FUNC_0(VAR_12, VAR_13, "zero_rexmits",
     &VAR_16->tx_zero_rexmits, "Zero Retransmits");
 FUNC_0(VAR_12, VAR_13, "one_rexmits",
     &VAR_16->tx_one_rexmits, "One Retransmits");
 FUNC_0(VAR_12, VAR_13, "multi_rexmits",
     &VAR_16->tx_multi_rexmits, "Multiple Retransmits");
 FUNC_0(VAR_12, VAR_13, "late_cols",
     &VAR_16->tx_late_cols, "Late Collisions");
 FUNC_0(VAR_12, VAR_13, "fifo_underuns",
     &VAR_16->tx_fifo_underuns, "FIFO Underruns");
 FUNC_0(VAR_12, VAR_13, "carrier_losts",
     &VAR_16->tx_carrier_losts, "Carrier Losts");
 FUNC_0(VAR_12, VAR_13, "excess_deferrals",
     &VAR_16->tx_excess_deferals, "Excess Deferrals");
 FUNC_0(VAR_12, VAR_13, "retry_errors",
     &VAR_16->tx_retry_errors, "Retry Errors");
 if ((VAR_11->nfe_flags & VAR_4) != 0) {
  FUNC_0(VAR_12, VAR_13, "deferrals",
      &VAR_16->tx_deferals, "Deferrals");
  FUNC_0(VAR_12, VAR_13, "frames",
      &VAR_16->tx_frames, "Frames");
  FUNC_0(VAR_12, VAR_13, "pause",
      &VAR_16->tx_pause, "Pause Frames");
 }
 if ((VAR_11->nfe_flags & VAR_5) != 0) {
  FUNC_0(VAR_12, VAR_13, "unicast",
      &VAR_16->tx_deferals, "Unicast Frames");
  FUNC_0(VAR_12, VAR_13, "multicast",
      &VAR_16->tx_frames, "Multicast Frames");
  FUNC_0(VAR_12, VAR_13, "broadcast",
      &VAR_16->tx_pause, "Broadcast Frames");
 }
}
