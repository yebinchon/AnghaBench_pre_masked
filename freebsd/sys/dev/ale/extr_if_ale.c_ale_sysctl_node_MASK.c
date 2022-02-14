
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ale_hw_stats {int tx_pkts_truncated; int tx_lenerrs; int tx_desc_underrun; int tx_underrun; int tx_excess_colls; int tx_late_colls; int tx_multi_colls; int tx_single_colls; int tx_pkts_1519_max; int tx_pkts_1024_1518; int tx_pkts_512_1023; int tx_pkts_256_511; int tx_pkts_128_255; int tx_pkts_65_127; int tx_pkts_64; int tx_mcast_bytes; int tx_bcast_bytes; int tx_bytes; int tx_excess_defer; int tx_control_frames; int tx_pause_frames; int tx_mcast_frames; int tx_bcast_frames; int tx_frames; int rx_pkts_filtered; int rx_alignerrs; int rx_rrs_errs; int rx_fifo_oflows; int rx_pkts_truncated; int rx_pkts_1519_max; int rx_pkts_1024_1518; int rx_pkts_512_1023; int rx_pkts_256_511; int rx_pkts_128_255; int rx_pkts_65_127; int rx_pkts_64; int rx_fragments; int rx_runts; int rx_mcast_bytes; int rx_bcast_bytes; int rx_bytes; int rx_lenerrs; int rx_crcerrs; int rx_control_frames; int rx_pause_frames; int rx_mcast_frames; int rx_bcast_frames; int rx_frames; int reset_brk_seq; } ;
struct ale_softc {scalar_t__ ale_int_rx_mod; scalar_t__ ale_int_tx_mod; scalar_t__ ale_process_limit; int ale_dev; struct ale_hw_stats ale_stats; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sysctl_oid* FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,scalar_t__*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,void*) ;
 int FUNC_10 (int ,int ,char*,scalar_t__*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_11(struct ale_softc *VAR_13)
{
 struct sysctl_ctx_list *VAR_14;
 struct sysctl_oid_list *VAR_15, *VAR_16;
 struct sysctl_oid *VAR_17;
 struct ale_hw_stats *VAR_18;
 int VAR_19;

 VAR_18 = &VAR_13->ale_stats;
 VAR_14 = FUNC_6(VAR_13->ale_dev);
 VAR_15 = FUNC_4(FUNC_7(VAR_13->ale_dev));

 FUNC_3(VAR_14, VAR_15, VAR_10, "int_rx_mod",
     VAR_9 | VAR_8, &VAR_13->ale_int_rx_mod, 0,
     VAR_11, "I", "ale Rx interrupt moderation");
 FUNC_3(VAR_14, VAR_15, VAR_10, "int_tx_mod",
     VAR_9 | VAR_8, &VAR_13->ale_int_tx_mod, 0,
     VAR_11, "I", "ale Tx interrupt moderation");

 VAR_13->ale_int_rx_mod = VAR_0;
 VAR_19 = FUNC_10(FUNC_5(VAR_13->ale_dev),
     FUNC_8(VAR_13->ale_dev), "int_rx_mod", &VAR_13->ale_int_rx_mod);
 if (VAR_19 == 0) {
  if (VAR_13->ale_int_rx_mod < VAR_2 ||
      VAR_13->ale_int_rx_mod > VAR_1) {
   FUNC_9(VAR_13->ale_dev, "int_rx_mod value out of "
       "range; using default: %d\n",
       VAR_0);
   VAR_13->ale_int_rx_mod = VAR_0;
  }
 }
 VAR_13->ale_int_tx_mod = VAR_3;
 VAR_19 = FUNC_10(FUNC_5(VAR_13->ale_dev),
     FUNC_8(VAR_13->ale_dev), "int_tx_mod", &VAR_13->ale_int_tx_mod);
 if (VAR_19 == 0) {
  if (VAR_13->ale_int_tx_mod < VAR_2 ||
      VAR_13->ale_int_tx_mod > VAR_1) {
   FUNC_9(VAR_13->ale_dev, "int_tx_mod value out of "
       "range; using default: %d\n",
       VAR_3);
   VAR_13->ale_int_tx_mod = VAR_3;
  }
 }
 FUNC_3(VAR_14, VAR_15, VAR_10, "process_limit",
     VAR_9 | VAR_8, &VAR_13->ale_process_limit, 0,
     VAR_12, "I",
     "max number of Rx events to process");

 VAR_13->ale_process_limit = VAR_4;
 VAR_19 = FUNC_10(FUNC_5(VAR_13->ale_dev),
     FUNC_8(VAR_13->ale_dev), "process_limit",
     &VAR_13->ale_process_limit);
 if (VAR_19 == 0) {
  if (VAR_13->ale_process_limit < VAR_6 ||
      VAR_13->ale_process_limit > VAR_5) {
   FUNC_9(VAR_13->ale_dev,
       "process_limit value out of range; "
       "using default: %d\n", VAR_4);
   VAR_13->ale_process_limit = VAR_4;
  }
 }


 FUNC_0(VAR_14, VAR_15, "reset_brk_seq",
     &VAR_18->reset_brk_seq,
     "Controller resets due to broken Rx sequnce number");

 VAR_17 = FUNC_2(VAR_14, VAR_15, VAR_10, "stats", VAR_7,
     ((void*)0), "ATE statistics");
 VAR_16 = FUNC_4(VAR_17);


 VAR_17 = FUNC_2(VAR_14, VAR_16, VAR_10, "rx", VAR_7,
     ((void*)0), "Rx MAC statistics");
 VAR_15 = FUNC_4(VAR_17);
 FUNC_0(VAR_14, VAR_15, "good_frames",
     &VAR_18->rx_frames, "Good frames");
 FUNC_0(VAR_14, VAR_15, "good_bcast_frames",
     &VAR_18->rx_bcast_frames, "Good broadcast frames");
 FUNC_0(VAR_14, VAR_15, "good_mcast_frames",
     &VAR_18->rx_mcast_frames, "Good multicast frames");
 FUNC_0(VAR_14, VAR_15, "pause_frames",
     &VAR_18->rx_pause_frames, "Pause control frames");
 FUNC_0(VAR_14, VAR_15, "control_frames",
     &VAR_18->rx_control_frames, "Control frames");
 FUNC_0(VAR_14, VAR_15, "crc_errs",
     &VAR_18->rx_crcerrs, "CRC errors");
 FUNC_0(VAR_14, VAR_15, "len_errs",
     &VAR_18->rx_lenerrs, "Frames with length mismatched");
 FUNC_1(VAR_14, VAR_15, "good_octets",
     &VAR_18->rx_bytes, "Good octets");
 FUNC_1(VAR_14, VAR_15, "good_bcast_octets",
     &VAR_18->rx_bcast_bytes, "Good broadcast octets");
 FUNC_1(VAR_14, VAR_15, "good_mcast_octets",
     &VAR_18->rx_mcast_bytes, "Good multicast octets");
 FUNC_0(VAR_14, VAR_15, "runts",
     &VAR_18->rx_runts, "Too short frames");
 FUNC_0(VAR_14, VAR_15, "fragments",
     &VAR_18->rx_fragments, "Fragmented frames");
 FUNC_0(VAR_14, VAR_15, "frames_64",
     &VAR_18->rx_pkts_64, "64 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_65_127",
     &VAR_18->rx_pkts_65_127, "65 to 127 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_128_255",
     &VAR_18->rx_pkts_128_255, "128 to 255 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_256_511",
     &VAR_18->rx_pkts_256_511, "256 to 511 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_512_1023",
     &VAR_18->rx_pkts_512_1023, "512 to 1023 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_1024_1518",
     &VAR_18->rx_pkts_1024_1518, "1024 to 1518 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_1519_max",
     &VAR_18->rx_pkts_1519_max, "1519 to max frames");
 FUNC_0(VAR_14, VAR_15, "trunc_errs",
     &VAR_18->rx_pkts_truncated, "Truncated frames due to MTU size");
 FUNC_0(VAR_14, VAR_15, "fifo_oflows",
     &VAR_18->rx_fifo_oflows, "FIFO overflows");
 FUNC_0(VAR_14, VAR_15, "rrs_errs",
     &VAR_18->rx_rrs_errs, "Return status write-back errors");
 FUNC_0(VAR_14, VAR_15, "align_errs",
     &VAR_18->rx_alignerrs, "Alignment errors");
 FUNC_0(VAR_14, VAR_15, "filtered",
     &VAR_18->rx_pkts_filtered,
     "Frames dropped due to address filtering");


 VAR_17 = FUNC_2(VAR_14, VAR_16, VAR_10, "tx", VAR_7,
     ((void*)0), "Tx MAC statistics");
 VAR_15 = FUNC_4(VAR_17);
 FUNC_0(VAR_14, VAR_15, "good_frames",
     &VAR_18->tx_frames, "Good frames");
 FUNC_0(VAR_14, VAR_15, "good_bcast_frames",
     &VAR_18->tx_bcast_frames, "Good broadcast frames");
 FUNC_0(VAR_14, VAR_15, "good_mcast_frames",
     &VAR_18->tx_mcast_frames, "Good multicast frames");
 FUNC_0(VAR_14, VAR_15, "pause_frames",
     &VAR_18->tx_pause_frames, "Pause control frames");
 FUNC_0(VAR_14, VAR_15, "control_frames",
     &VAR_18->tx_control_frames, "Control frames");
 FUNC_0(VAR_14, VAR_15, "excess_defers",
     &VAR_18->tx_excess_defer, "Frames with excessive derferrals");
 FUNC_0(VAR_14, VAR_15, "defers",
     &VAR_18->tx_excess_defer, "Frames with derferrals");
 FUNC_1(VAR_14, VAR_15, "good_octets",
     &VAR_18->tx_bytes, "Good octets");
 FUNC_1(VAR_14, VAR_15, "good_bcast_octets",
     &VAR_18->tx_bcast_bytes, "Good broadcast octets");
 FUNC_1(VAR_14, VAR_15, "good_mcast_octets",
     &VAR_18->tx_mcast_bytes, "Good multicast octets");
 FUNC_0(VAR_14, VAR_15, "frames_64",
     &VAR_18->tx_pkts_64, "64 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_65_127",
     &VAR_18->tx_pkts_65_127, "65 to 127 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_128_255",
     &VAR_18->tx_pkts_128_255, "128 to 255 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_256_511",
     &VAR_18->tx_pkts_256_511, "256 to 511 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_512_1023",
     &VAR_18->tx_pkts_512_1023, "512 to 1023 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_1024_1518",
     &VAR_18->tx_pkts_1024_1518, "1024 to 1518 bytes frames");
 FUNC_0(VAR_14, VAR_15, "frames_1519_max",
     &VAR_18->tx_pkts_1519_max, "1519 to max frames");
 FUNC_0(VAR_14, VAR_15, "single_colls",
     &VAR_18->tx_single_colls, "Single collisions");
 FUNC_0(VAR_14, VAR_15, "multi_colls",
     &VAR_18->tx_multi_colls, "Multiple collisions");
 FUNC_0(VAR_14, VAR_15, "late_colls",
     &VAR_18->tx_late_colls, "Late collisions");
 FUNC_0(VAR_14, VAR_15, "excess_colls",
     &VAR_18->tx_excess_colls, "Excessive collisions");
 FUNC_0(VAR_14, VAR_15, "underruns",
     &VAR_18->tx_underrun, "FIFO underruns");
 FUNC_0(VAR_14, VAR_15, "desc_underruns",
     &VAR_18->tx_desc_underrun, "Descriptor write-back errors");
 FUNC_0(VAR_14, VAR_15, "len_errs",
     &VAR_18->tx_lenerrs, "Frames with length mismatched");
 FUNC_0(VAR_14, VAR_15, "trunc_errs",
     &VAR_18->tx_pkts_truncated, "Truncated frames due to MTU size");
}
