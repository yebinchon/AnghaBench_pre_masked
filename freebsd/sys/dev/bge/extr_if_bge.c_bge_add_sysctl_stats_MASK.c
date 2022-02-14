
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct bge_softc {int dummy; } ;
struct TYPE_4__ {int outRangeLengthError; int inRangeLengthError; int etherStatsUndersizePkts; int etherStatsJabbers; int dot3StatsFramesTooLong; int xoffStateEntered; int macControlFramesReceived; int xoffPauseFramesReceived; int xonPauseFramesReceived; int dot3StatsAlignmentErrors; int dot3StatsFCSErrors; int ifHCInMulticastPkts; int ifHCInUcastPkts; int etherStatsFragments; int ifHCInOctets; } ;
struct TYPE_3__ {int ifOutErrors; int ifOutDiscards; int dot3StatsCarrierSenseErrors; int ifHCOutBroadcastPkts; int ifHCOutMulticastPkts; int ifHCOutUcastPkts; int dot3StatsLateCollisions; int dot3StatsExcessiveCollisions; int dot3StatsDeferredTransmissions; int dot3StatsMultipleCollisionFrames; int dot3StatsSingleCollisionFrames; int dot3StatsInternalMacTransmitErrors; int flowControlDone; int outXoffSent; int outXonSent; int etherStatsCollisions; int ifHCOutOctets; } ;


 int FUNC_0 (struct bge_softc*,struct sysctl_ctx_list*,char*,struct sysctl_oid_list*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_2__ VAR_17 ;
 TYPE_1__ VAR_18 ;

__attribute__((used)) static void
FUNC_3(struct bge_softc *VAR_19, struct sysctl_ctx_list *VAR_20,
    struct sysctl_oid_list *VAR_21)
{
 struct sysctl_oid *VAR_22;
 struct sysctl_oid_list *VAR_23, *VAR_24;

 VAR_22 = FUNC_1(VAR_20, VAR_21, VAR_2, "stats", VAR_1,
     ((void*)0), "BGE Statistics");
 VAR_24 = VAR_23 = FUNC_2(VAR_22);
 FUNC_0(VAR_19, VAR_20, "Frames Dropped Due To Filters",
     VAR_23, VAR_0,
     "FramesDroppedDueToFilters");
 FUNC_0(VAR_19, VAR_20, "NIC DMA Write Queue Full",
     VAR_23, VAR_9, "DmaWriteQueueFull");
 FUNC_0(VAR_19, VAR_20, "NIC DMA Write High Priority Queue Full",
     VAR_23, VAR_8, "DmaWriteHighPriQueueFull");
 FUNC_0(VAR_19, VAR_20, "NIC No More RX Buffer Descriptors",
     VAR_23, VAR_11, "NoMoreRxBDs");
 FUNC_0(VAR_19, VAR_20, "Discarded Input Frames",
     VAR_23, VAR_3, "InputDiscards");
 FUNC_0(VAR_19, VAR_20, "Input Errors",
     VAR_23, VAR_4, "InputErrors");
 FUNC_0(VAR_19, VAR_20, "NIC Recv Threshold Hit",
     VAR_23, VAR_12, "RecvThresholdHit");
 FUNC_0(VAR_19, VAR_20, "NIC DMA Read Queue Full",
     VAR_23, VAR_7, "DmaReadQueueFull");
 FUNC_0(VAR_19, VAR_20, "NIC DMA Read High Priority Queue Full",
     VAR_23, VAR_6, "DmaReadHighPriQueueFull");
 FUNC_0(VAR_19, VAR_20, "NIC Send Data Complete Queue Full",
     VAR_23, VAR_15, "SendDataCompQueueFull");
 FUNC_0(VAR_19, VAR_20, "NIC Ring Set Send Producer Index",
     VAR_23, VAR_13, "RingSetSendProdIndex");
 FUNC_0(VAR_19, VAR_20, "NIC Ring Status Update",
     VAR_23, VAR_14, "RingStatusUpdate");
 FUNC_0(VAR_19, VAR_20, "NIC Interrupts",
     VAR_23, VAR_10, "Interrupts");
 FUNC_0(VAR_19, VAR_20, "NIC Avoided Interrupts",
     VAR_23, VAR_5, "AvoidedInterrupts");
 FUNC_0(VAR_19, VAR_20, "NIC Send Threshold Hit",
     VAR_23, VAR_16, "SendThresholdHit");

 VAR_22 = FUNC_1(VAR_20, VAR_24, VAR_2, "rx", VAR_1,
     ((void*)0), "BGE RX Statistics");
 VAR_23 = FUNC_2(VAR_22);
 FUNC_0(VAR_19, VAR_20, "Inbound Octets",
     VAR_23, VAR_17.ifHCInOctets, "ifHCInOctets");
 FUNC_0(VAR_19, VAR_20, "Fragments",
     VAR_23, VAR_17.etherStatsFragments, "Fragments");
 FUNC_0(VAR_19, VAR_20, "Inbound Unicast Packets",
     VAR_23, VAR_17.ifHCInUcastPkts, "UnicastPkts");
 FUNC_0(VAR_19, VAR_20, "Inbound Multicast Packets",
     VAR_23, VAR_17.ifHCInMulticastPkts, "MulticastPkts");
 FUNC_0(VAR_19, VAR_20, "FCS Errors",
     VAR_23, VAR_17.dot3StatsFCSErrors, "FCSErrors");
 FUNC_0(VAR_19, VAR_20, "Alignment Errors",
     VAR_23, VAR_17.dot3StatsAlignmentErrors, "AlignmentErrors");
 FUNC_0(VAR_19, VAR_20, "XON Pause Frames Received",
     VAR_23, VAR_17.xonPauseFramesReceived, "xonPauseFramesReceived");
 FUNC_0(VAR_19, VAR_20, "XOFF Pause Frames Received",
     VAR_23, VAR_17.xoffPauseFramesReceived,
     "xoffPauseFramesReceived");
 FUNC_0(VAR_19, VAR_20, "MAC Control Frames Received",
     VAR_23, VAR_17.macControlFramesReceived,
     "ControlFramesReceived");
 FUNC_0(VAR_19, VAR_20, "XOFF State Entered",
     VAR_23, VAR_17.xoffStateEntered, "xoffStateEntered");
 FUNC_0(VAR_19, VAR_20, "Frames Too Long",
     VAR_23, VAR_17.dot3StatsFramesTooLong, "FramesTooLong");
 FUNC_0(VAR_19, VAR_20, "Jabbers",
     VAR_23, VAR_17.etherStatsJabbers, "Jabbers");
 FUNC_0(VAR_19, VAR_20, "Undersized Packets",
     VAR_23, VAR_17.etherStatsUndersizePkts, "UndersizePkts");
 FUNC_0(VAR_19, VAR_20, "Inbound Range Length Errors",
     VAR_23, VAR_17.inRangeLengthError, "inRangeLengthError");
 FUNC_0(VAR_19, VAR_20, "Outbound Range Length Errors",
     VAR_23, VAR_17.outRangeLengthError, "outRangeLengthError");

 VAR_22 = FUNC_1(VAR_20, VAR_24, VAR_2, "tx", VAR_1,
     ((void*)0), "BGE TX Statistics");
 VAR_23 = FUNC_2(VAR_22);
 FUNC_0(VAR_19, VAR_20, "Outbound Octets",
     VAR_23, VAR_18.ifHCOutOctets, "ifHCOutOctets");
 FUNC_0(VAR_19, VAR_20, "TX Collisions",
     VAR_23, VAR_18.etherStatsCollisions, "Collisions");
 FUNC_0(VAR_19, VAR_20, "XON Sent",
     VAR_23, VAR_18.outXonSent, "XonSent");
 FUNC_0(VAR_19, VAR_20, "XOFF Sent",
     VAR_23, VAR_18.outXoffSent, "XoffSent");
 FUNC_0(VAR_19, VAR_20, "Flow Control Done",
     VAR_23, VAR_18.flowControlDone, "flowControlDone");
 FUNC_0(VAR_19, VAR_20, "Internal MAC TX errors",
     VAR_23, VAR_18.dot3StatsInternalMacTransmitErrors,
     "InternalMacTransmitErrors");
 FUNC_0(VAR_19, VAR_20, "Single Collision Frames",
     VAR_23, VAR_18.dot3StatsSingleCollisionFrames,
     "SingleCollisionFrames");
 FUNC_0(VAR_19, VAR_20, "Multiple Collision Frames",
     VAR_23, VAR_18.dot3StatsMultipleCollisionFrames,
     "MultipleCollisionFrames");
 FUNC_0(VAR_19, VAR_20, "Deferred Transmissions",
     VAR_23, VAR_18.dot3StatsDeferredTransmissions,
     "DeferredTransmissions");
 FUNC_0(VAR_19, VAR_20, "Excessive Collisions",
     VAR_23, VAR_18.dot3StatsExcessiveCollisions,
     "ExcessiveCollisions");
 FUNC_0(VAR_19, VAR_20, "Late Collisions",
     VAR_23, VAR_18.dot3StatsLateCollisions,
     "LateCollisions");
 FUNC_0(VAR_19, VAR_20, "Outbound Unicast Packets",
     VAR_23, VAR_18.ifHCOutUcastPkts, "UnicastPkts");
 FUNC_0(VAR_19, VAR_20, "Outbound Multicast Packets",
     VAR_23, VAR_18.ifHCOutMulticastPkts, "MulticastPkts");
 FUNC_0(VAR_19, VAR_20, "Outbound Broadcast Packets",
     VAR_23, VAR_18.ifHCOutBroadcastPkts, "BroadcastPkts");
 FUNC_0(VAR_19, VAR_20, "Carrier Sense Errors",
     VAR_23, VAR_18.dot3StatsCarrierSenseErrors,
     "CarrierSenseErrors");
 FUNC_0(VAR_19, VAR_20, "Outbound Discards",
     VAR_23, VAR_18.ifOutDiscards, "Discards");
 FUNC_0(VAR_19, VAR_20, "Outbound Errors",
     VAR_23, VAR_18.ifOutErrors, "Errors");
}
