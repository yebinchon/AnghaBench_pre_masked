
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bge_mac_stats {scalar_t__ ifHCOutUcastPkts; scalar_t__ ifHCOutMulticastPkts; scalar_t__ ifHCOutBroadcastPkts; int RecvThresholdHit; int InputErrors; int InputDiscards; int NoMoreRxBDs; int DmaWriteHighPriQueueFull; int DmaWriteQueueFull; int FramesDroppedDueToFilters; int etherStatsUndersizePkts; int etherStatsJabbers; int dot3StatsFramesTooLong; int xoffStateEntered; int macControlFramesReceived; int xoffPauseFramesReceived; int xonPauseFramesReceived; int dot3StatsAlignmentErrors; int dot3StatsFCSErrors; int ifHCInBroadcastPkts; int ifHCInMulticastPkts; int ifHCInUcastPkts; int etherStatsFragments; int ifHCInOctets; int dot3StatsLateCollisions; int dot3StatsExcessiveCollisions; int dot3StatsDeferredTransmissions; int dot3StatsMultipleCollisionFrames; int dot3StatsSingleCollisionFrames; int dot3StatsInternalMacTransmitErrors; int outXoffSent; int outXonSent; int etherStatsCollisions; int ifHCOutOctets; } ;
struct bge_softc {scalar_t__ bge_asicrev; scalar_t__ bge_chipid; int bge_flags; struct bge_mac_stats bge_mac_stats; int bge_ifp; } ;
typedef int if_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ FUNC_0 (struct bge_softc*,int ) ;
 int FUNC_1 (struct bge_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct bge_softc *VAR_43)
{
 if_t VAR_44;
 struct bge_mac_stats *VAR_45;
 uint32_t VAR_46;

 VAR_44 = VAR_43->bge_ifp;
 VAR_45 = &VAR_43->bge_mac_stats;

 VAR_45->ifHCOutOctets +=
     FUNC_0(VAR_43, VAR_38);
 VAR_45->etherStatsCollisions +=
     FUNC_0(VAR_43, VAR_31);
 VAR_45->outXonSent +=
     FUNC_0(VAR_43, VAR_42);
 VAR_45->outXoffSent +=
     FUNC_0(VAR_43, VAR_41);
 VAR_45->dot3StatsInternalMacTransmitErrors +=
     FUNC_0(VAR_43, VAR_33);
 VAR_45->dot3StatsSingleCollisionFrames +=
     FUNC_0(VAR_43, VAR_39);
 VAR_45->dot3StatsMultipleCollisionFrames +=
     FUNC_0(VAR_43, VAR_37);
 VAR_45->dot3StatsDeferredTransmissions +=
     FUNC_0(VAR_43, VAR_32);
 VAR_45->dot3StatsExcessiveCollisions +=
     FUNC_0(VAR_43, VAR_34);
 VAR_45->dot3StatsLateCollisions +=
     FUNC_0(VAR_43, VAR_35);
 VAR_45->ifHCOutUcastPkts +=
     FUNC_0(VAR_43, VAR_40);
 VAR_45->ifHCOutMulticastPkts +=
     FUNC_0(VAR_43, VAR_36);
 VAR_45->ifHCOutBroadcastPkts +=
     FUNC_0(VAR_43, VAR_30);

 VAR_45->ifHCInOctets +=
     FUNC_0(VAR_43, VAR_24);
 VAR_45->etherStatsFragments +=
     FUNC_0(VAR_43, VAR_20);
 VAR_45->ifHCInUcastPkts +=
     FUNC_0(VAR_43, VAR_25);
 VAR_45->ifHCInMulticastPkts +=
     FUNC_0(VAR_43, VAR_23);
 VAR_45->ifHCInBroadcastPkts +=
     FUNC_0(VAR_43, VAR_17);
 VAR_45->dot3StatsFCSErrors +=
     FUNC_0(VAR_43, VAR_19);
 VAR_45->dot3StatsAlignmentErrors +=
     FUNC_0(VAR_43, VAR_16);
 VAR_45->xonPauseFramesReceived +=
     FUNC_0(VAR_43, VAR_29);
 VAR_45->xoffPauseFramesReceived +=
     FUNC_0(VAR_43, VAR_28);
 VAR_45->macControlFramesReceived +=
     FUNC_0(VAR_43, VAR_18);
 VAR_45->xoffStateEntered +=
     FUNC_0(VAR_43, VAR_27);
 VAR_45->dot3StatsFramesTooLong +=
     FUNC_0(VAR_43, VAR_21);
 VAR_45->etherStatsJabbers +=
     FUNC_0(VAR_43, VAR_22);
 VAR_45->etherStatsUndersizePkts +=
     FUNC_0(VAR_43, VAR_26);

 VAR_45->FramesDroppedDueToFilters +=
     FUNC_0(VAR_43, VAR_11);
 VAR_45->DmaWriteQueueFull +=
     FUNC_0(VAR_43, VAR_10);
 VAR_45->DmaWriteHighPriQueueFull +=
     FUNC_0(VAR_43, VAR_9);
 VAR_45->NoMoreRxBDs +=
     FUNC_0(VAR_43, VAR_14);
 if (VAR_43->bge_asicrev != VAR_0 &&
     VAR_43->bge_chipid != VAR_2 &&
     VAR_43->bge_chipid != VAR_3)
  VAR_45->InputDiscards +=
      FUNC_0(VAR_43, VAR_12);
 VAR_45->InputErrors +=
     FUNC_0(VAR_43, VAR_13);
 VAR_45->RecvThresholdHit +=
     FUNC_0(VAR_43, VAR_15);

 if (VAR_43->bge_flags & VAR_4) {





  if (VAR_45->ifHCOutUcastPkts + VAR_45->ifHCOutMulticastPkts +
      VAR_45->ifHCOutBroadcastPkts > VAR_5) {
   VAR_46 = FUNC_0(VAR_43, VAR_6);
   if (VAR_43->bge_asicrev == VAR_1)
    VAR_46 &= ~VAR_7;
   else
    VAR_46 &= ~VAR_8;
   FUNC_1(VAR_43, VAR_6, VAR_46);
   VAR_43->bge_flags &= ~VAR_4;
  }
 }
}
