
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct fxp_hwstats {int tx_tco; int tx_pause; int tx_total_collisions; int tx_multiple_collisions; int tx_single_collisions; int tx_deffered; int tx_lostcrs; int tx_underruns; int tx_latecols; int tx_maxcols; int tx_good; int rx_tco; int rx_controls; int rx_pause; int rx_shortframes; int rx_cdt_errors; int rx_overrun_errors; int rx_rnr_errors; int rx_alignment_errors; int rx_crc_errors; int rx_good; } ;
struct fxp_softc {scalar_t__ revision; struct fxp_hwstats fxp_hwstats; scalar_t__ rnr; int tunable_bundle_max; int dev; int tunable_int_delay; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,scalar_t__*,int ,char*) ;
 struct sysctl_oid* FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int ,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_4 (struct sysctl_oid*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,char*,int *) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_10(struct fxp_softc *VAR_10)
{
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid_list *VAR_12, *VAR_13;
 struct sysctl_oid *VAR_14;
 struct fxp_hwstats *VAR_15;

 VAR_11 = FUNC_6(VAR_10->dev);
 VAR_12 = FUNC_4(FUNC_7(VAR_10->dev));

 FUNC_3(VAR_11, VAR_12,
     VAR_5, "int_delay", VAR_2 | VAR_1,
     &VAR_10->tunable_int_delay, 0, VAR_9, "I",
     "FXP driver receive interrupt microcode bundling delay");
 FUNC_3(VAR_11, VAR_12,
     VAR_5, "bundle_max", VAR_2 | VAR_1,
     &VAR_10->tunable_bundle_max, 0, VAR_8, "I",
     "FXP driver receive interrupt microcode bundle size limit");
 FUNC_1(VAR_11, VAR_12,VAR_5, "rnr", VAR_0, &VAR_10->rnr, 0,
     "FXP RNR events");




 VAR_10->tunable_int_delay = VAR_7;
 VAR_10->tunable_bundle_max = VAR_6;
 (void) FUNC_9(FUNC_5(VAR_10->dev),
     FUNC_8(VAR_10->dev), "int_delay", &VAR_10->tunable_int_delay);
 (void) FUNC_9(FUNC_5(VAR_10->dev),
     FUNC_8(VAR_10->dev), "bundle_max", &VAR_10->tunable_bundle_max);
 VAR_10->rnr = 0;

 VAR_15 = &VAR_10->fxp_hwstats;
 VAR_14 = FUNC_2(VAR_11, VAR_12, VAR_5, "stats", VAR_0,
     ((void*)0), "FXP statistics");
 VAR_13 = FUNC_4(VAR_14);


 VAR_14 = FUNC_2(VAR_11, VAR_13, VAR_5, "rx", VAR_0,
     ((void*)0), "Rx MAC statistics");
 VAR_12 = FUNC_4(VAR_14);
 FUNC_0(VAR_11, VAR_12, "good_frames",
     &VAR_15->rx_good, "Good frames");
 FUNC_0(VAR_11, VAR_12, "crc_errors",
     &VAR_15->rx_crc_errors, "CRC errors");
 FUNC_0(VAR_11, VAR_12, "alignment_errors",
     &VAR_15->rx_alignment_errors, "Alignment errors");
 FUNC_0(VAR_11, VAR_12, "rnr_errors",
     &VAR_15->rx_rnr_errors, "RNR errors");
 FUNC_0(VAR_11, VAR_12, "overrun_errors",
     &VAR_15->rx_overrun_errors, "Overrun errors");
 FUNC_0(VAR_11, VAR_12, "cdt_errors",
     &VAR_15->rx_cdt_errors, "Collision detect errors");
 FUNC_0(VAR_11, VAR_12, "shortframes",
     &VAR_15->rx_shortframes, "Short frame errors");
 if (VAR_10->revision >= VAR_3) {
  FUNC_0(VAR_11, VAR_12, "pause",
      &VAR_15->rx_pause, "Pause frames");
  FUNC_0(VAR_11, VAR_12, "controls",
      &VAR_15->rx_controls, "Unsupported control frames");
 }
 if (VAR_10->revision >= VAR_4)
  FUNC_0(VAR_11, VAR_12, "tco",
      &VAR_15->rx_tco, "TCO frames");


 VAR_14 = FUNC_2(VAR_11, VAR_13, VAR_5, "tx", VAR_0,
     ((void*)0), "Tx MAC statistics");
 VAR_12 = FUNC_4(VAR_14);
 FUNC_0(VAR_11, VAR_12, "good_frames",
     &VAR_15->tx_good, "Good frames");
 FUNC_0(VAR_11, VAR_12, "maxcols",
     &VAR_15->tx_maxcols, "Maximum collisions errors");
 FUNC_0(VAR_11, VAR_12, "latecols",
     &VAR_15->tx_latecols, "Late collisions errors");
 FUNC_0(VAR_11, VAR_12, "underruns",
     &VAR_15->tx_underruns, "Underrun errors");
 FUNC_0(VAR_11, VAR_12, "lostcrs",
     &VAR_15->tx_lostcrs, "Lost carrier sense");
 FUNC_0(VAR_11, VAR_12, "deffered",
     &VAR_15->tx_deffered, "Deferred");
 FUNC_0(VAR_11, VAR_12, "single_collisions",
     &VAR_15->tx_single_collisions, "Single collisions");
 FUNC_0(VAR_11, VAR_12, "multiple_collisions",
     &VAR_15->tx_multiple_collisions, "Multiple collisions");
 FUNC_0(VAR_11, VAR_12, "total_collisions",
     &VAR_15->tx_total_collisions, "Total collisions");
 if (VAR_10->revision >= VAR_3)
  FUNC_0(VAR_11, VAR_12, "pause",
      &VAR_15->tx_pause, "Pause frames");
 if (VAR_10->revision >= VAR_4)
  FUNC_0(VAR_11, VAR_12, "tco",
      &VAR_15->tx_tco, "TCO frames");
}
