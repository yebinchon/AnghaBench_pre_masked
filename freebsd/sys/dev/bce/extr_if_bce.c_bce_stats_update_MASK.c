
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct statistics_block {int stat_CatchupInRuleCheckerP4Hit; int stat_CatchupInMBUFDiscards; int stat_CatchupInFTQDiscards; int stat_CatchupInRuleCheckerDiscards; int stat_IfInRuleCheckerP4Hit; int stat_IfInMBUFDiscards; int stat_IfInFTQDiscards; int stat_IfInRuleCheckerDiscards; int stat_IfInFramesL2FilterDiscards; int stat_XoffStateEntered; int stat_MacControlFramesReceived; int stat_FlowControlDone; int stat_OutXoffSent; int stat_OutXonSent; int stat_XoffPauseFramesReceived; int stat_XonPauseFramesReceived; int stat_EtherStatsPktsTx1523Octetsto9022Octets; int stat_EtherStatsPktsTx1024Octetsto1522Octets; int stat_EtherStatsPktsTx512Octetsto1023Octets; int stat_EtherStatsPktsTx256Octetsto511Octets; int stat_EtherStatsPktsTx128Octetsto255Octets; int stat_EtherStatsPktsTx65Octetsto127Octets; int stat_EtherStatsPktsTx64Octets; int stat_EtherStatsPktsRx1523Octetsto9022Octets; int stat_EtherStatsPktsRx1024Octetsto1522Octets; int stat_EtherStatsPktsRx512Octetsto1023Octets; int stat_EtherStatsPktsRx256Octetsto511Octets; int stat_EtherStatsPktsRx128Octetsto255Octets; int stat_EtherStatsPktsRx65Octetsto127Octets; int stat_EtherStatsPktsRx64Octets; int stat_EtherStatsOversizePkts; int stat_EtherStatsUndersizePkts; int stat_EtherStatsJabbers; int stat_EtherStatsFragments; int stat_EtherStatsCollisions; int stat_Dot3StatsLateCollisions; int stat_Dot3StatsExcessiveCollisions; int stat_Dot3StatsDeferredTransmissions; int stat_Dot3StatsMultipleCollisionFrames; int stat_Dot3StatsSingleCollisionFrames; int stat_Dot3StatsAlignmentErrors; int stat_Dot3StatsFCSErrors; int stat_Dot3StatsCarrierSenseErrors; int stat_emac_tx_stat_dot3statsinternalmactransmiterrors; scalar_t__ stat_IfHCOutBroadcastPkts_lo; scalar_t__ stat_IfHCOutBroadcastPkts_hi; scalar_t__ stat_IfHCOutMulticastPkts_lo; scalar_t__ stat_IfHCOutMulticastPkts_hi; scalar_t__ stat_IfHCOutUcastPkts_lo; scalar_t__ stat_IfHCOutUcastPkts_hi; scalar_t__ stat_IfHCInBroadcastPkts_lo; scalar_t__ stat_IfHCInBroadcastPkts_hi; scalar_t__ stat_IfHCInMulticastPkts_lo; scalar_t__ stat_IfHCInMulticastPkts_hi; scalar_t__ stat_IfHCInUcastPkts_lo; scalar_t__ stat_IfHCInUcastPkts_hi; scalar_t__ stat_IfHCOutBadOctets_lo; scalar_t__ stat_IfHCOutBadOctets_hi; scalar_t__ stat_IfHCOutOctets_lo; scalar_t__ stat_IfHCOutOctets_hi; scalar_t__ stat_IfHCInBadOctets_lo; scalar_t__ stat_IfHCInBadOctets_hi; scalar_t__ stat_IfHCInOctets_lo; scalar_t__ stat_IfHCInOctets_hi; } ;
struct bce_softc {int stat_IfHCInOctets; int stat_IfHCInBadOctets; int stat_IfHCOutOctets; int stat_IfHCOutBadOctets; int stat_IfHCInUcastPkts; int stat_IfHCInMulticastPkts; int stat_IfHCInBroadcastPkts; int stat_IfHCOutUcastPkts; int stat_IfHCOutMulticastPkts; int stat_IfHCOutBroadcastPkts; int com_no_buffers; int stat_CatchupInRuleCheckerP4Hit; int stat_CatchupInMBUFDiscards; int stat_CatchupInFTQDiscards; int stat_CatchupInRuleCheckerDiscards; int stat_IfInRuleCheckerP4Hit; int stat_IfInMBUFDiscards; int stat_IfInFTQDiscards; int stat_IfInRuleCheckerDiscards; int stat_IfInFramesL2FilterDiscards; int stat_XoffStateEntered; int stat_MacControlFramesReceived; int stat_FlowControlDone; int stat_OutXoffSent; int stat_OutXonSent; int stat_XoffPauseFramesReceived; int stat_XonPauseFramesReceived; int stat_EtherStatsPktsTx1523Octetsto9022Octets; int stat_EtherStatsPktsTx1024Octetsto1522Octets; int stat_EtherStatsPktsTx512Octetsto1023Octets; int stat_EtherStatsPktsTx256Octetsto511Octets; int stat_EtherStatsPktsTx128Octetsto255Octets; int stat_EtherStatsPktsTx65Octetsto127Octets; int stat_EtherStatsPktsTx64Octets; int stat_EtherStatsPktsRx1523Octetsto9022Octets; int stat_EtherStatsPktsRx1024Octetsto1522Octets; int stat_EtherStatsPktsRx512Octetsto1023Octets; int stat_EtherStatsPktsRx256Octetsto511Octets; int stat_EtherStatsPktsRx128Octetsto255Octets; int stat_EtherStatsPktsRx65Octetsto127Octets; int stat_EtherStatsPktsRx64Octets; int stat_EtherStatsOversizePkts; int stat_EtherStatsUndersizePkts; int stat_EtherStatsJabbers; int stat_EtherStatsFragments; int stat_EtherStatsCollisions; int stat_Dot3StatsLateCollisions; int stat_Dot3StatsExcessiveCollisions; int stat_Dot3StatsDeferredTransmissions; int stat_Dot3StatsMultipleCollisionFrames; int stat_Dot3StatsSingleCollisionFrames; int stat_Dot3StatsAlignmentErrors; int stat_Dot3StatsFCSErrors; int stat_Dot3StatsCarrierSenseErrors; int stat_emac_tx_stat_dot3statsinternalmactransmiterrors; scalar_t__ stats_block; int stats_map; int stats_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bce_softc *VAR_2)
{
 struct statistics_block *VAR_3;

 FUNC_0(VAR_0);

 FUNC_3(VAR_2->stats_tag, VAR_2->stats_map, VAR_1);

 VAR_3 = (struct statistics_block *) VAR_2->stats_block;





 VAR_2->stat_IfHCInOctets =
     ((u64) VAR_3->stat_IfHCInOctets_hi << 32) +
      (u64) VAR_3->stat_IfHCInOctets_lo;

 VAR_2->stat_IfHCInBadOctets =
     ((u64) VAR_3->stat_IfHCInBadOctets_hi << 32) +
      (u64) VAR_3->stat_IfHCInBadOctets_lo;

 VAR_2->stat_IfHCOutOctets =
     ((u64) VAR_3->stat_IfHCOutOctets_hi << 32) +
      (u64) VAR_3->stat_IfHCOutOctets_lo;

 VAR_2->stat_IfHCOutBadOctets =
     ((u64) VAR_3->stat_IfHCOutBadOctets_hi << 32) +
      (u64) VAR_3->stat_IfHCOutBadOctets_lo;

 VAR_2->stat_IfHCInUcastPkts =
     ((u64) VAR_3->stat_IfHCInUcastPkts_hi << 32) +
      (u64) VAR_3->stat_IfHCInUcastPkts_lo;

 VAR_2->stat_IfHCInMulticastPkts =
     ((u64) VAR_3->stat_IfHCInMulticastPkts_hi << 32) +
      (u64) VAR_3->stat_IfHCInMulticastPkts_lo;

 VAR_2->stat_IfHCInBroadcastPkts =
     ((u64) VAR_3->stat_IfHCInBroadcastPkts_hi << 32) +
      (u64) VAR_3->stat_IfHCInBroadcastPkts_lo;

 VAR_2->stat_IfHCOutUcastPkts =
     ((u64) VAR_3->stat_IfHCOutUcastPkts_hi << 32) +
      (u64) VAR_3->stat_IfHCOutUcastPkts_lo;

 VAR_2->stat_IfHCOutMulticastPkts =
     ((u64) VAR_3->stat_IfHCOutMulticastPkts_hi << 32) +
      (u64) VAR_3->stat_IfHCOutMulticastPkts_lo;

 VAR_2->stat_IfHCOutBroadcastPkts =
     ((u64) VAR_3->stat_IfHCOutBroadcastPkts_hi << 32) +
      (u64) VAR_3->stat_IfHCOutBroadcastPkts_lo;




 VAR_2->stat_emac_tx_stat_dot3statsinternalmactransmiterrors =
     VAR_3->stat_emac_tx_stat_dot3statsinternalmactransmiterrors;

 VAR_2->stat_Dot3StatsCarrierSenseErrors =
     VAR_3->stat_Dot3StatsCarrierSenseErrors;

 VAR_2->stat_Dot3StatsFCSErrors =
     VAR_3->stat_Dot3StatsFCSErrors;

 VAR_2->stat_Dot3StatsAlignmentErrors =
     VAR_3->stat_Dot3StatsAlignmentErrors;

 VAR_2->stat_Dot3StatsSingleCollisionFrames =
     VAR_3->stat_Dot3StatsSingleCollisionFrames;

 VAR_2->stat_Dot3StatsMultipleCollisionFrames =
     VAR_3->stat_Dot3StatsMultipleCollisionFrames;

 VAR_2->stat_Dot3StatsDeferredTransmissions =
     VAR_3->stat_Dot3StatsDeferredTransmissions;

 VAR_2->stat_Dot3StatsExcessiveCollisions =
     VAR_3->stat_Dot3StatsExcessiveCollisions;

 VAR_2->stat_Dot3StatsLateCollisions =
     VAR_3->stat_Dot3StatsLateCollisions;

 VAR_2->stat_EtherStatsCollisions =
     VAR_3->stat_EtherStatsCollisions;

 VAR_2->stat_EtherStatsFragments =
     VAR_3->stat_EtherStatsFragments;

 VAR_2->stat_EtherStatsJabbers =
     VAR_3->stat_EtherStatsJabbers;

 VAR_2->stat_EtherStatsUndersizePkts =
     VAR_3->stat_EtherStatsUndersizePkts;

 VAR_2->stat_EtherStatsOversizePkts =
      VAR_3->stat_EtherStatsOversizePkts;

 VAR_2->stat_EtherStatsPktsRx64Octets =
     VAR_3->stat_EtherStatsPktsRx64Octets;

 VAR_2->stat_EtherStatsPktsRx65Octetsto127Octets =
     VAR_3->stat_EtherStatsPktsRx65Octetsto127Octets;

 VAR_2->stat_EtherStatsPktsRx128Octetsto255Octets =
     VAR_3->stat_EtherStatsPktsRx128Octetsto255Octets;

 VAR_2->stat_EtherStatsPktsRx256Octetsto511Octets =
     VAR_3->stat_EtherStatsPktsRx256Octetsto511Octets;

 VAR_2->stat_EtherStatsPktsRx512Octetsto1023Octets =
     VAR_3->stat_EtherStatsPktsRx512Octetsto1023Octets;

 VAR_2->stat_EtherStatsPktsRx1024Octetsto1522Octets =
     VAR_3->stat_EtherStatsPktsRx1024Octetsto1522Octets;

 VAR_2->stat_EtherStatsPktsRx1523Octetsto9022Octets =
     VAR_3->stat_EtherStatsPktsRx1523Octetsto9022Octets;

 VAR_2->stat_EtherStatsPktsTx64Octets =
     VAR_3->stat_EtherStatsPktsTx64Octets;

 VAR_2->stat_EtherStatsPktsTx65Octetsto127Octets =
     VAR_3->stat_EtherStatsPktsTx65Octetsto127Octets;

 VAR_2->stat_EtherStatsPktsTx128Octetsto255Octets =
     VAR_3->stat_EtherStatsPktsTx128Octetsto255Octets;

 VAR_2->stat_EtherStatsPktsTx256Octetsto511Octets =
     VAR_3->stat_EtherStatsPktsTx256Octetsto511Octets;

 VAR_2->stat_EtherStatsPktsTx512Octetsto1023Octets =
     VAR_3->stat_EtherStatsPktsTx512Octetsto1023Octets;

 VAR_2->stat_EtherStatsPktsTx1024Octetsto1522Octets =
     VAR_3->stat_EtherStatsPktsTx1024Octetsto1522Octets;

 VAR_2->stat_EtherStatsPktsTx1523Octetsto9022Octets =
     VAR_3->stat_EtherStatsPktsTx1523Octetsto9022Octets;

 VAR_2->stat_XonPauseFramesReceived =
     VAR_3->stat_XonPauseFramesReceived;

 VAR_2->stat_XoffPauseFramesReceived =
     VAR_3->stat_XoffPauseFramesReceived;

 VAR_2->stat_OutXonSent =
     VAR_3->stat_OutXonSent;

 VAR_2->stat_OutXoffSent =
     VAR_3->stat_OutXoffSent;

 VAR_2->stat_FlowControlDone =
     VAR_3->stat_FlowControlDone;

 VAR_2->stat_MacControlFramesReceived =
     VAR_3->stat_MacControlFramesReceived;

 VAR_2->stat_XoffStateEntered =
     VAR_3->stat_XoffStateEntered;

 VAR_2->stat_IfInFramesL2FilterDiscards =
     VAR_3->stat_IfInFramesL2FilterDiscards;

 VAR_2->stat_IfInRuleCheckerDiscards =
     VAR_3->stat_IfInRuleCheckerDiscards;

 VAR_2->stat_IfInFTQDiscards =
     VAR_3->stat_IfInFTQDiscards;

 VAR_2->stat_IfInMBUFDiscards =
     VAR_3->stat_IfInMBUFDiscards;

 VAR_2->stat_IfInRuleCheckerP4Hit =
     VAR_3->stat_IfInRuleCheckerP4Hit;

 VAR_2->stat_CatchupInRuleCheckerDiscards =
     VAR_3->stat_CatchupInRuleCheckerDiscards;

 VAR_2->stat_CatchupInFTQDiscards =
     VAR_3->stat_CatchupInFTQDiscards;

 VAR_2->stat_CatchupInMBUFDiscards =
     VAR_3->stat_CatchupInMBUFDiscards;

 VAR_2->stat_CatchupInRuleCheckerP4Hit =
     VAR_3->stat_CatchupInRuleCheckerP4Hit;

 VAR_2->com_no_buffers = FUNC_2(VAR_2, 0x120084);



 FUNC_1(VAR_0);
}
