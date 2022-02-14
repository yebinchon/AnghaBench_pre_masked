
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bge_mac_stats {int ifHCOutBroadcastPkts; int ifHCOutMulticastPkts; int ifHCOutUcastPkts; int dot3StatsLateCollisions; int dot3StatsExcessiveCollisions; int dot3StatsDeferredTransmissions; int dot3StatsMultipleCollisionFrames; int dot3StatsSingleCollisionFrames; int dot3StatsInternalMacTransmitErrors; int outXoffSent; int outXonSent; int etherStatsCollisions; int ifHCOutOctets; int etherStatsUndersizePkts; int etherStatsJabbers; int dot3StatsFramesTooLong; int xoffStateEntered; int macControlFramesReceived; int xoffPauseFramesReceived; int xonPauseFramesReceived; int dot3StatsAlignmentErrors; int dot3StatsFCSErrors; int ifHCInBroadcastPkts; int ifHCInMulticastPkts; int ifHCInUcastPkts; int etherStatsFragments; int ifHCInOctets; int RecvThresholdHit; int InputErrors; int InputDiscards; int NoMoreRxBDs; int DmaWriteHighPriQueueFull; int DmaWriteQueueFull; int FramesDroppedDueToFilters; } ;
struct bge_softc {struct bge_mac_stats bge_mac_stats; } ;


 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;

__attribute__((used)) static void
FUNC_3(struct bge_softc *VAR_2, struct sysctl_ctx_list *VAR_3,
    struct sysctl_oid_list *VAR_4)
{
 struct sysctl_oid *VAR_5;
 struct sysctl_oid_list *VAR_6, *VAR_7;
 struct bge_mac_stats *VAR_8;

 VAR_8 = &VAR_2->bge_mac_stats;
 VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_1, "stats", VAR_0,
     ((void*)0), "BGE Statistics");
 VAR_7 = VAR_6 = FUNC_2(VAR_5);
 FUNC_0(VAR_3, VAR_6, "FramesDroppedDueToFilters",
     &VAR_8->FramesDroppedDueToFilters, "Frames Dropped Due to Filters");
 FUNC_0(VAR_3, VAR_6, "DmaWriteQueueFull",
     &VAR_8->DmaWriteQueueFull, "NIC DMA Write Queue Full");
 FUNC_0(VAR_3, VAR_6, "DmaWriteHighPriQueueFull",
     &VAR_8->DmaWriteHighPriQueueFull,
     "NIC DMA Write High Priority Queue Full");
 FUNC_0(VAR_3, VAR_6, "NoMoreRxBDs",
     &VAR_8->NoMoreRxBDs, "NIC No More RX Buffer Descriptors");
 FUNC_0(VAR_3, VAR_6, "InputDiscards",
     &VAR_8->InputDiscards, "Discarded Input Frames");
 FUNC_0(VAR_3, VAR_6, "InputErrors",
     &VAR_8->InputErrors, "Input Errors");
 FUNC_0(VAR_3, VAR_6, "RecvThresholdHit",
     &VAR_8->RecvThresholdHit, "NIC Recv Threshold Hit");

 VAR_5 = FUNC_1(VAR_3, VAR_7, VAR_1, "rx", VAR_0,
     ((void*)0), "BGE RX Statistics");
 VAR_6 = FUNC_2(VAR_5);
 FUNC_0(VAR_3, VAR_6, "ifHCInOctets",
     &VAR_8->ifHCInOctets, "Inbound Octets");
 FUNC_0(VAR_3, VAR_6, "Fragments",
     &VAR_8->etherStatsFragments, "Fragments");
 FUNC_0(VAR_3, VAR_6, "UnicastPkts",
     &VAR_8->ifHCInUcastPkts, "Inbound Unicast Packets");
 FUNC_0(VAR_3, VAR_6, "MulticastPkts",
     &VAR_8->ifHCInMulticastPkts, "Inbound Multicast Packets");
 FUNC_0(VAR_3, VAR_6, "BroadcastPkts",
     &VAR_8->ifHCInBroadcastPkts, "Inbound Broadcast Packets");
 FUNC_0(VAR_3, VAR_6, "FCSErrors",
     &VAR_8->dot3StatsFCSErrors, "FCS Errors");
 FUNC_0(VAR_3, VAR_6, "AlignmentErrors",
     &VAR_8->dot3StatsAlignmentErrors, "Alignment Errors");
 FUNC_0(VAR_3, VAR_6, "xonPauseFramesReceived",
     &VAR_8->xonPauseFramesReceived, "XON Pause Frames Received");
 FUNC_0(VAR_3, VAR_6, "xoffPauseFramesReceived",
     &VAR_8->xoffPauseFramesReceived, "XOFF Pause Frames Received");
 FUNC_0(VAR_3, VAR_6, "ControlFramesReceived",
     &VAR_8->macControlFramesReceived, "MAC Control Frames Received");
 FUNC_0(VAR_3, VAR_6, "xoffStateEntered",
     &VAR_8->xoffStateEntered, "XOFF State Entered");
 FUNC_0(VAR_3, VAR_6, "FramesTooLong",
     &VAR_8->dot3StatsFramesTooLong, "Frames Too Long");
 FUNC_0(VAR_3, VAR_6, "Jabbers",
     &VAR_8->etherStatsJabbers, "Jabbers");
 FUNC_0(VAR_3, VAR_6, "UndersizePkts",
     &VAR_8->etherStatsUndersizePkts, "Undersized Packets");

 VAR_5 = FUNC_1(VAR_3, VAR_7, VAR_1, "tx", VAR_0,
     ((void*)0), "BGE TX Statistics");
 VAR_6 = FUNC_2(VAR_5);
 FUNC_0(VAR_3, VAR_6, "ifHCOutOctets",
     &VAR_8->ifHCOutOctets, "Outbound Octets");
 FUNC_0(VAR_3, VAR_6, "Collisions",
     &VAR_8->etherStatsCollisions, "TX Collisions");
 FUNC_0(VAR_3, VAR_6, "XonSent",
     &VAR_8->outXonSent, "XON Sent");
 FUNC_0(VAR_3, VAR_6, "XoffSent",
     &VAR_8->outXoffSent, "XOFF Sent");
 FUNC_0(VAR_3, VAR_6, "InternalMacTransmitErrors",
     &VAR_8->dot3StatsInternalMacTransmitErrors,
     "Internal MAC TX Errors");
 FUNC_0(VAR_3, VAR_6, "SingleCollisionFrames",
     &VAR_8->dot3StatsSingleCollisionFrames, "Single Collision Frames");
 FUNC_0(VAR_3, VAR_6, "MultipleCollisionFrames",
     &VAR_8->dot3StatsMultipleCollisionFrames,
     "Multiple Collision Frames");
 FUNC_0(VAR_3, VAR_6, "DeferredTransmissions",
     &VAR_8->dot3StatsDeferredTransmissions, "Deferred Transmissions");
 FUNC_0(VAR_3, VAR_6, "ExcessiveCollisions",
     &VAR_8->dot3StatsExcessiveCollisions, "Excessive Collisions");
 FUNC_0(VAR_3, VAR_6, "LateCollisions",
     &VAR_8->dot3StatsLateCollisions, "Late Collisions");
 FUNC_0(VAR_3, VAR_6, "UnicastPkts",
     &VAR_8->ifHCOutUcastPkts, "Outbound Unicast Packets");
 FUNC_0(VAR_3, VAR_6, "MulticastPkts",
     &VAR_8->ifHCOutMulticastPkts, "Outbound Multicast Packets");
 FUNC_0(VAR_3, VAR_6, "BroadcastPkts",
     &VAR_8->ifHCOutBroadcastPkts, "Outbound Broadcast Packets");
}
