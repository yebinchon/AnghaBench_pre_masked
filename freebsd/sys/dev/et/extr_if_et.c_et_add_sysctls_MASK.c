
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct et_hw_stats {int tx_fragments; int tx_undersize; int tx_oversize; int tx_control; int tx_crcerrs; int tx_jabbers; int tx_drop; int tx_pause_honored; int tx_total_colls; int tx_excess_colls; int tx_late_colls; int tx_multi_colls; int tx_single_colls; int tx_excess_deferred; int tx_deferred; int tx_pause; int tx_bcast; int tx_mcast; int tx_frames; int tx_bytes; int rx_drop; int rx_jabbers; int rx_fragments; int rx_oversize; int rx_runts; int rx_cserrs; int rx_codeerrs; int rx_lenerrs; int rx_alignerrs; int rx_unknown_control; int rx_pause; int rx_control; int rx_bcast; int rx_mcast; int rx_crcerrs; int rx_frames; int rx_bytes; int pkts_1519; int pkts_1024; int pkts_512; int pkts_256; int pkts_128; int pkts_65; int pkts_64; } ;
struct et_softc {struct et_hw_stats sc_stats; int sc_timer; int sc_tx_intr_nsegs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid* FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct et_softc*,int ,int ,char*,char*) ;
 int FUNC_5 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_6 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 struct sysctl_oid* FUNC_8 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_9(struct et_softc * VAR_6)
{
 struct sysctl_ctx_list *VAR_7;
 struct sysctl_oid_list *VAR_8, *VAR_9;
 struct sysctl_oid *VAR_10;
 struct et_hw_stats *VAR_11;

 VAR_7 = FUNC_7(VAR_6->dev);
 VAR_8 = FUNC_6(FUNC_8(VAR_6->dev));

 FUNC_4(VAR_7, VAR_8, VAR_3, "rx_intr_npkts",
     VAR_2 | VAR_1, VAR_6, 0, VAR_5, "I",
     "RX IM, # packets per RX interrupt");
 FUNC_4(VAR_7, VAR_8, VAR_3, "rx_intr_delay",
     VAR_2 | VAR_1, VAR_6, 0, VAR_4, "I",
     "RX IM, RX interrupt delay (x10 usec)");
 FUNC_2(VAR_7, VAR_8, VAR_3, "tx_intr_nsegs",
     VAR_1, &VAR_6->sc_tx_intr_nsegs, 0,
     "TX IM, # segments per TX interrupt");
 FUNC_5(VAR_7, VAR_8, VAR_3, "timer",
     VAR_1, &VAR_6->sc_timer, 0, "TX timer");

 VAR_10 = FUNC_3(VAR_7, VAR_8, VAR_3, "stats", VAR_0,
     ((void*)0), "ET statistics");
        VAR_9 = FUNC_6(VAR_10);


 VAR_11 = &VAR_6->sc_stats;
 FUNC_1(VAR_7, VAR_9, "frames_64", &VAR_11->pkts_64,
     "0 to 64 bytes frames");
 FUNC_1(VAR_7, VAR_9, "frames_65_127", &VAR_11->pkts_65,
     "65 to 127 bytes frames");
 FUNC_1(VAR_7, VAR_9, "frames_128_255", &VAR_11->pkts_128,
     "128 to 255 bytes frames");
 FUNC_1(VAR_7, VAR_9, "frames_256_511", &VAR_11->pkts_256,
     "256 to 511 bytes frames");
 FUNC_1(VAR_7, VAR_9, "frames_512_1023", &VAR_11->pkts_512,
     "512 to 1023 bytes frames");
 FUNC_1(VAR_7, VAR_9, "frames_1024_1518", &VAR_11->pkts_1024,
     "1024 to 1518 bytes frames");
 FUNC_1(VAR_7, VAR_9, "frames_1519_1522", &VAR_11->pkts_1519,
     "1519 to 1522 bytes frames");


 VAR_10 = FUNC_3(VAR_7, VAR_9, VAR_3, "rx", VAR_0,
     ((void*)0), "RX MAC statistics");
 VAR_8 = FUNC_6(VAR_10);
 FUNC_1(VAR_7, VAR_8, "bytes",
     &VAR_11->rx_bytes, "Good bytes");
 FUNC_1(VAR_7, VAR_8, "frames",
     &VAR_11->rx_frames, "Good frames");
 FUNC_0(VAR_7, VAR_8, "crc_errs",
     &VAR_11->rx_crcerrs, "CRC errors");
 FUNC_1(VAR_7, VAR_8, "mcast_frames",
     &VAR_11->rx_mcast, "Multicast frames");
 FUNC_1(VAR_7, VAR_8, "bcast_frames",
     &VAR_11->rx_bcast, "Broadcast frames");
 FUNC_0(VAR_7, VAR_8, "control",
     &VAR_11->rx_control, "Control frames");
 FUNC_0(VAR_7, VAR_8, "pause",
     &VAR_11->rx_pause, "Pause frames");
 FUNC_0(VAR_7, VAR_8, "unknown_control",
     &VAR_11->rx_unknown_control, "Unknown control frames");
 FUNC_0(VAR_7, VAR_8, "align_errs",
     &VAR_11->rx_alignerrs, "Alignment errors");
 FUNC_0(VAR_7, VAR_8, "len_errs",
     &VAR_11->rx_lenerrs, "Frames with length mismatched");
 FUNC_0(VAR_7, VAR_8, "code_errs",
     &VAR_11->rx_codeerrs, "Frames with code error");
 FUNC_0(VAR_7, VAR_8, "cs_errs",
     &VAR_11->rx_cserrs, "Frames with carrier sense error");
 FUNC_0(VAR_7, VAR_8, "runts",
     &VAR_11->rx_runts, "Too short frames");
 FUNC_1(VAR_7, VAR_8, "oversize",
     &VAR_11->rx_oversize, "Oversized frames");
 FUNC_0(VAR_7, VAR_8, "fragments",
     &VAR_11->rx_fragments, "Fragmented frames");
 FUNC_0(VAR_7, VAR_8, "jabbers",
     &VAR_11->rx_jabbers, "Frames with jabber error");
 FUNC_0(VAR_7, VAR_8, "drop",
     &VAR_11->rx_drop, "Dropped frames");


 VAR_10 = FUNC_3(VAR_7, VAR_9, VAR_3, "tx", VAR_0,
     ((void*)0), "TX MAC statistics");
 VAR_8 = FUNC_6(VAR_10);
 FUNC_1(VAR_7, VAR_8, "bytes",
     &VAR_11->tx_bytes, "Good bytes");
 FUNC_1(VAR_7, VAR_8, "frames",
     &VAR_11->tx_frames, "Good frames");
 FUNC_1(VAR_7, VAR_8, "mcast_frames",
     &VAR_11->tx_mcast, "Multicast frames");
 FUNC_1(VAR_7, VAR_8, "bcast_frames",
     &VAR_11->tx_bcast, "Broadcast frames");
 FUNC_0(VAR_7, VAR_8, "pause",
     &VAR_11->tx_pause, "Pause frames");
 FUNC_0(VAR_7, VAR_8, "deferred",
     &VAR_11->tx_deferred, "Deferred frames");
 FUNC_0(VAR_7, VAR_8, "excess_deferred",
     &VAR_11->tx_excess_deferred, "Excessively deferred frames");
 FUNC_0(VAR_7, VAR_8, "single_colls",
     &VAR_11->tx_single_colls, "Single collisions");
 FUNC_0(VAR_7, VAR_8, "multi_colls",
     &VAR_11->tx_multi_colls, "Multiple collisions");
 FUNC_0(VAR_7, VAR_8, "late_colls",
     &VAR_11->tx_late_colls, "Late collisions");
 FUNC_0(VAR_7, VAR_8, "excess_colls",
     &VAR_11->tx_excess_colls, "Excess collisions");
 FUNC_0(VAR_7, VAR_8, "total_colls",
     &VAR_11->tx_total_colls, "Total collisions");
 FUNC_0(VAR_7, VAR_8, "pause_honored",
     &VAR_11->tx_pause_honored, "Honored pause frames");
 FUNC_0(VAR_7, VAR_8, "drop",
     &VAR_11->tx_drop, "Dropped frames");
 FUNC_0(VAR_7, VAR_8, "jabbers",
     &VAR_11->tx_jabbers, "Frames with jabber errors");
 FUNC_0(VAR_7, VAR_8, "crc_errs",
     &VAR_11->tx_crcerrs, "Frames with CRC errors");
 FUNC_0(VAR_7, VAR_8, "control",
     &VAR_11->tx_control, "Control frames");
 FUNC_1(VAR_7, VAR_8, "oversize",
     &VAR_11->tx_oversize, "Oversized frames");
 FUNC_0(VAR_7, VAR_8, "undersize",
     &VAR_11->tx_undersize, "Undersized frames");
 FUNC_0(VAR_7, VAR_8, "fragments",
     &VAR_11->tx_fragments, "Fragmented frames");
}
