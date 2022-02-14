
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vge_hw_stats {int tx_sqeerrs; int tx_pause; int tx_latecolls; int tx_colls; int tx_jumbos; int tx_pkts_1024_1518; int tx_pkts_512_1023; int tx_pkts_256_511; int tx_pkts_128_255; int tx_pkts_65_127; int tx_pkts_64; int tx_good_frames; int rx_lenerrs; int rx_symerrs; int rx_nobufs; int rx_alignerrs; int rx_pause_frames; int rx_crcerrs; int rx_jumbos; int rx_pkts_1519_max_errs; int rx_pkts_1519_max; int rx_pkts_1024_1518; int rx_pkts_512_1023; int rx_pkts_256_511; int rx_pkts_128_255; int rx_pkts_65_127; int rx_pkts_64; int rx_runts_errs; int rx_runts; int rx_fifo_oflows; int rx_good_frames; int rx_frames; } ;
struct vge_softc {int vge_tx_coal_pkt; int vge_dev; int vge_rx_coal_pkt; int vge_int_holdoff; struct vge_hw_stats vge_stats; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,char*,int *) ;
 int FUNC_9 (struct vge_softc*) ;

__attribute__((used)) static void
FUNC_10(struct vge_softc *VAR_6)
{
 struct sysctl_ctx_list *VAR_7;
 struct sysctl_oid_list *VAR_8, *VAR_9;
 struct sysctl_oid *VAR_10;
 struct vge_hw_stats *VAR_11;

 VAR_11 = &VAR_6->vge_stats;
 VAR_7 = FUNC_5(VAR_6->vge_dev);
 VAR_8 = FUNC_2(FUNC_6(VAR_6->vge_dev));

 FUNC_0(VAR_7, VAR_8, VAR_2, "int_holdoff",
     VAR_1, &VAR_6->vge_int_holdoff, 0, "interrupt holdoff");
 FUNC_0(VAR_7, VAR_8, VAR_2, "rx_coal_pkt",
     VAR_1, &VAR_6->vge_rx_coal_pkt, 0, "rx coalescing packet");
 FUNC_0(VAR_7, VAR_8, VAR_2, "tx_coal_pkt",
     VAR_1, &VAR_6->vge_tx_coal_pkt, 0, "tx coalescing packet");


 VAR_6->vge_int_holdoff = VAR_3;
 FUNC_8(FUNC_4(VAR_6->vge_dev),
     FUNC_7(VAR_6->vge_dev), "int_holdoff", &VAR_6->vge_int_holdoff);
 VAR_6->vge_rx_coal_pkt = VAR_4;
 FUNC_8(FUNC_4(VAR_6->vge_dev),
     FUNC_7(VAR_6->vge_dev), "rx_coal_pkt", &VAR_6->vge_rx_coal_pkt);
 VAR_6->vge_tx_coal_pkt = VAR_5;
 FUNC_8(FUNC_4(VAR_6->vge_dev),
     FUNC_7(VAR_6->vge_dev), "tx_coal_pkt", &VAR_6->vge_tx_coal_pkt);

 VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_2, "stats", VAR_0,
     ((void*)0), "VGE statistics");
 VAR_9 = FUNC_2(VAR_10);


 VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_2, "rx", VAR_0,
     ((void*)0), "RX MAC statistics");
 VAR_8 = FUNC_2(VAR_10);
 FUNC_3(VAR_7, VAR_8, "frames",
     &VAR_11->rx_frames, "frames");
 FUNC_3(VAR_7, VAR_8, "good_frames",
     &VAR_11->rx_good_frames, "Good frames");
 FUNC_3(VAR_7, VAR_8, "fifo_oflows",
     &VAR_11->rx_fifo_oflows, "FIFO overflows");
 FUNC_3(VAR_7, VAR_8, "runts",
     &VAR_11->rx_runts, "Too short frames");
 FUNC_3(VAR_7, VAR_8, "runts_errs",
     &VAR_11->rx_runts_errs, "Too short frames with errors");
 FUNC_3(VAR_7, VAR_8, "frames_64",
     &VAR_11->rx_pkts_64, "64 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_65_127",
     &VAR_11->rx_pkts_65_127, "65 to 127 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_128_255",
     &VAR_11->rx_pkts_128_255, "128 to 255 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_256_511",
     &VAR_11->rx_pkts_256_511, "256 to 511 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_512_1023",
     &VAR_11->rx_pkts_512_1023, "512 to 1023 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_1024_1518",
     &VAR_11->rx_pkts_1024_1518, "1024 to 1518 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_1519_max",
     &VAR_11->rx_pkts_1519_max, "1519 to max frames");
 FUNC_3(VAR_7, VAR_8, "frames_1519_max_errs",
     &VAR_11->rx_pkts_1519_max_errs, "1519 to max frames with error");
 FUNC_3(VAR_7, VAR_8, "frames_jumbo",
     &VAR_11->rx_jumbos, "Jumbo frames");
 FUNC_3(VAR_7, VAR_8, "crcerrs",
     &VAR_11->rx_crcerrs, "CRC errors");
 FUNC_3(VAR_7, VAR_8, "pause_frames",
     &VAR_11->rx_pause_frames, "CRC errors");
 FUNC_3(VAR_7, VAR_8, "align_errs",
     &VAR_11->rx_alignerrs, "Alignment errors");
 FUNC_3(VAR_7, VAR_8, "nobufs",
     &VAR_11->rx_nobufs, "Frames with no buffer event");
 FUNC_3(VAR_7, VAR_8, "sym_errs",
     &VAR_11->rx_symerrs, "Frames with symbol errors");
 FUNC_3(VAR_7, VAR_8, "len_errs",
     &VAR_11->rx_lenerrs, "Frames with length mismatched");


 VAR_10 = FUNC_1(VAR_7, VAR_9, VAR_2, "tx", VAR_0,
     ((void*)0), "TX MAC statistics");
 VAR_8 = FUNC_2(VAR_10);
 FUNC_3(VAR_7, VAR_8, "good_frames",
     &VAR_11->tx_good_frames, "Good frames");
 FUNC_3(VAR_7, VAR_8, "frames_64",
     &VAR_11->tx_pkts_64, "64 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_65_127",
     &VAR_11->tx_pkts_65_127, "65 to 127 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_128_255",
     &VAR_11->tx_pkts_128_255, "128 to 255 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_256_511",
     &VAR_11->tx_pkts_256_511, "256 to 511 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_512_1023",
     &VAR_11->tx_pkts_512_1023, "512 to 1023 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_1024_1518",
     &VAR_11->tx_pkts_1024_1518, "1024 to 1518 bytes frames");
 FUNC_3(VAR_7, VAR_8, "frames_jumbo",
     &VAR_11->tx_jumbos, "Jumbo frames");
 FUNC_3(VAR_7, VAR_8, "colls",
     &VAR_11->tx_colls, "Collisions");
 FUNC_3(VAR_7, VAR_8, "late_colls",
     &VAR_11->tx_latecolls, "Late collisions");
 FUNC_3(VAR_7, VAR_8, "pause_frames",
     &VAR_11->tx_pause, "Pause frames");





 FUNC_9(VAR_6);
}
