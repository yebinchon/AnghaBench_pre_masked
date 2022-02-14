
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vte_hw_stats {int tx_pause_frames; int tx_late_colls; int tx_underruns; int tx_frames; int rx_pause_frames; int rx_desc_unavail; int rx_fifo_full; int rx_long_frames; int rx_crcerrs; int rx_runts; int rx_mcast_frames; int rx_bcast_frames; int rx_frames; } ;
struct vte_softc {scalar_t__ vte_int_rx_mod; scalar_t__ vte_int_tx_mod; int vte_dev; struct vte_hw_stats vte_stats; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,scalar_t__*,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,void*) ;
 int FUNC_9 (int ,int ,char*,scalar_t__*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10(struct vte_softc *VAR_9)
{
 struct sysctl_ctx_list *VAR_10;
 struct sysctl_oid_list *VAR_11, *VAR_12;
 struct sysctl_oid *VAR_13;
 struct vte_hw_stats *VAR_14;
 int VAR_15;

 VAR_14 = &VAR_9->vte_stats;
 VAR_10 = FUNC_5(VAR_9->vte_dev);
 VAR_11 = FUNC_2(FUNC_6(VAR_9->vte_dev));

 FUNC_1(VAR_10, VAR_11, VAR_3, "int_rx_mod",
     VAR_2 | VAR_1, &VAR_9->vte_int_rx_mod, 0,
     VAR_8, "I", "vte RX interrupt moderation");
 FUNC_1(VAR_10, VAR_11, VAR_3, "int_tx_mod",
     VAR_2 | VAR_1, &VAR_9->vte_int_tx_mod, 0,
     VAR_8, "I", "vte TX interrupt moderation");

 VAR_9->vte_int_rx_mod = VAR_6;
 VAR_15 = FUNC_9(FUNC_4(VAR_9->vte_dev),
     FUNC_7(VAR_9->vte_dev), "int_rx_mod", &VAR_9->vte_int_rx_mod);
 if (VAR_15 == 0) {
  if (VAR_9->vte_int_rx_mod < VAR_5 ||
      VAR_9->vte_int_rx_mod > VAR_4) {
   FUNC_8(VAR_9->vte_dev, "int_rx_mod value out of "
       "range; using default: %d\n",
       VAR_6);
   VAR_9->vte_int_rx_mod = VAR_6;
  }
 }

 VAR_9->vte_int_tx_mod = VAR_7;
 VAR_15 = FUNC_9(FUNC_4(VAR_9->vte_dev),
     FUNC_7(VAR_9->vte_dev), "int_tx_mod", &VAR_9->vte_int_tx_mod);
 if (VAR_15 == 0) {
  if (VAR_9->vte_int_tx_mod < VAR_5 ||
      VAR_9->vte_int_tx_mod > VAR_4) {
   FUNC_8(VAR_9->vte_dev, "int_tx_mod value out of "
       "range; using default: %d\n",
       VAR_7);
   VAR_9->vte_int_tx_mod = VAR_7;
  }
 }

 VAR_13 = FUNC_0(VAR_10, VAR_11, VAR_3, "stats", VAR_0,
     ((void*)0), "VTE statistics");
 VAR_12 = FUNC_2(VAR_13);


 VAR_13 = FUNC_0(VAR_10, VAR_12, VAR_3, "rx", VAR_0,
     ((void*)0), "RX MAC statistics");
 VAR_11 = FUNC_2(VAR_13);
 FUNC_3(VAR_10, VAR_11, "good_frames",
     &VAR_14->rx_frames, "Good frames");
 FUNC_3(VAR_10, VAR_11, "good_bcast_frames",
     &VAR_14->rx_bcast_frames, "Good broadcast frames");
 FUNC_3(VAR_10, VAR_11, "good_mcast_frames",
     &VAR_14->rx_mcast_frames, "Good multicast frames");
 FUNC_3(VAR_10, VAR_11, "runt",
     &VAR_14->rx_runts, "Too short frames");
 FUNC_3(VAR_10, VAR_11, "crc_errs",
     &VAR_14->rx_crcerrs, "CRC errors");
 FUNC_3(VAR_10, VAR_11, "long_frames",
     &VAR_14->rx_long_frames,
     "Frames that have longer length than maximum packet length");
 FUNC_3(VAR_10, VAR_11, "fifo_full",
     &VAR_14->rx_fifo_full, "FIFO full");
 FUNC_3(VAR_10, VAR_11, "desc_unavail",
     &VAR_14->rx_desc_unavail, "Descriptor unavailable frames");
 FUNC_3(VAR_10, VAR_11, "pause_frames",
     &VAR_14->rx_pause_frames, "Pause control frames");


 VAR_13 = FUNC_0(VAR_10, VAR_12, VAR_3, "tx", VAR_0,
     ((void*)0), "TX MAC statistics");
 VAR_11 = FUNC_2(VAR_13);
 FUNC_3(VAR_10, VAR_11, "good_frames",
     &VAR_14->tx_frames, "Good frames");
 FUNC_3(VAR_10, VAR_11, "underruns",
     &VAR_14->tx_underruns, "FIFO underruns");
 FUNC_3(VAR_10, VAR_11, "late_colls",
     &VAR_14->tx_late_colls, "Late collisions");
 FUNC_3(VAR_10, VAR_11, "pause_frames",
     &VAR_14->tx_pause_frames, "Pause control frames");
}
