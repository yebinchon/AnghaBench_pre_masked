
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ste_hw_stats {int tx_abort; int tx_excess_defers; int tx_frames_defered; int tx_late_colls; int tx_multi_colls; int tx_single_colls; int tx_carrsense_errs; int tx_mcast_frames; int tx_bcast_frames; int tx_frames; int tx_bytes; int rx_lost_frames; int rx_mcast_frames; int rx_bcast_frames; int rx_frames; int rx_bytes; } ;
struct ste_softc {int ste_int_rx_mod; int ste_dev; struct ste_hw_stats ste_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid* FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 int FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,char*,int *) ;

__attribute__((used)) static void
FUNC_10(struct ste_softc *VAR_4)
{
 struct sysctl_ctx_list *VAR_5;
 struct sysctl_oid_list *VAR_6, *VAR_7;
 struct sysctl_oid *VAR_8;
 struct ste_hw_stats *VAR_9;

 VAR_9 = &VAR_4->ste_stats;
 VAR_5 = FUNC_6(VAR_4->ste_dev);
 VAR_6 = FUNC_4(FUNC_7(VAR_4->ste_dev));

 FUNC_2(VAR_5, VAR_6, VAR_2, "int_rx_mod",
     VAR_1, &VAR_4->ste_int_rx_mod, 0, "ste RX interrupt moderation");

 VAR_4->ste_int_rx_mod = VAR_3;
 FUNC_9(FUNC_5(VAR_4->ste_dev),
     FUNC_8(VAR_4->ste_dev), "int_rx_mod", &VAR_4->ste_int_rx_mod);

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_2, "stats", VAR_0,
     ((void*)0), "STE statistics");
 VAR_7 = FUNC_4(VAR_8);


 VAR_8 = FUNC_3(VAR_5, VAR_7, VAR_2, "rx", VAR_0,
     ((void*)0), "Rx MAC statistics");
 VAR_6 = FUNC_4(VAR_8);
 FUNC_1(VAR_5, VAR_6, "good_octets",
     &VAR_9->rx_bytes, "Good octets");
 FUNC_0(VAR_5, VAR_6, "good_frames",
     &VAR_9->rx_frames, "Good frames");
 FUNC_0(VAR_5, VAR_6, "good_bcast_frames",
     &VAR_9->rx_bcast_frames, "Good broadcast frames");
 FUNC_0(VAR_5, VAR_6, "good_mcast_frames",
     &VAR_9->rx_mcast_frames, "Good multicast frames");
 FUNC_0(VAR_5, VAR_6, "lost_frames",
     &VAR_9->rx_lost_frames, "Lost frames");


 VAR_8 = FUNC_3(VAR_5, VAR_7, VAR_2, "tx", VAR_0,
     ((void*)0), "Tx MAC statistics");
 VAR_6 = FUNC_4(VAR_8);
 FUNC_1(VAR_5, VAR_6, "good_octets",
     &VAR_9->tx_bytes, "Good octets");
 FUNC_0(VAR_5, VAR_6, "good_frames",
     &VAR_9->tx_frames, "Good frames");
 FUNC_0(VAR_5, VAR_6, "good_bcast_frames",
     &VAR_9->tx_bcast_frames, "Good broadcast frames");
 FUNC_0(VAR_5, VAR_6, "good_mcast_frames",
     &VAR_9->tx_mcast_frames, "Good multicast frames");
 FUNC_0(VAR_5, VAR_6, "carrier_errs",
     &VAR_9->tx_carrsense_errs, "Carrier sense errors");
 FUNC_0(VAR_5, VAR_6, "single_colls",
     &VAR_9->tx_single_colls, "Single collisions");
 FUNC_0(VAR_5, VAR_6, "multi_colls",
     &VAR_9->tx_multi_colls, "Multiple collisions");
 FUNC_0(VAR_5, VAR_6, "late_colls",
     &VAR_9->tx_late_colls, "Late collisions");
 FUNC_0(VAR_5, VAR_6, "defers",
     &VAR_9->tx_frames_defered, "Frames with deferrals");
 FUNC_0(VAR_5, VAR_6, "excess_defers",
     &VAR_9->tx_excess_defers, "Frames with excessive derferrals");
 FUNC_0(VAR_5, VAR_6, "abort",
     &VAR_9->tx_abort, "Aborted frames due to Excessive collisions");
}
