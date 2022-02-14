
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ifnet {int dummy; } ;
struct bce_softc {scalar_t__ stat_Dot3StatsCarrierSenseErrors; scalar_t__ watchdog_timeouts; scalar_t__ stat_Dot3StatsLateCollisions; scalar_t__ stat_emac_tx_stat_dot3statsinternalmactransmiterrors; scalar_t__ stat_Dot3StatsExcessiveCollisions; scalar_t__ com_no_buffers; scalar_t__ l2fhdr_error_count; scalar_t__ stat_IfInFTQDiscards; scalar_t__ stat_IfInRuleCheckerDiscards; scalar_t__ stat_Dot3StatsFCSErrors; scalar_t__ stat_Dot3StatsAlignmentErrors; scalar_t__ stat_IfInMBUFDiscards; scalar_t__ stat_EtherStatsOversizePkts; scalar_t__ stat_EtherStatsUndersizePkts; scalar_t__ stat_EtherStatsCollisions; } ;
typedef int ift_counter ;


 int FUNC_0 (struct bce_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bce_softc*) ;
 int VAR_1 ;



 scalar_t__ FUNC_2 (struct ifnet*,int) ;
 struct bce_softc* FUNC_3 (struct ifnet*) ;

__attribute__((used)) static uint64_t
FUNC_4(struct ifnet *VAR_2, ift_counter VAR_3)
{
 struct bce_softc *VAR_4;
 uint64_t VAR_5;

 VAR_4 = FUNC_3(VAR_2);

 switch (VAR_3) {
 case 130:
  return (VAR_4->stat_EtherStatsCollisions);
 case 129:
  return (VAR_4->stat_EtherStatsUndersizePkts +
      VAR_4->stat_EtherStatsOversizePkts +
      VAR_4->stat_IfInMBUFDiscards +
      VAR_4->stat_Dot3StatsAlignmentErrors +
      VAR_4->stat_Dot3StatsFCSErrors +
      VAR_4->stat_IfInRuleCheckerDiscards +
      VAR_4->stat_IfInFTQDiscards +
      VAR_4->l2fhdr_error_count +
      VAR_4->com_no_buffers);
 case 128:
  VAR_5 = VAR_4->stat_Dot3StatsExcessiveCollisions +
      VAR_4->stat_emac_tx_stat_dot3statsinternalmactransmiterrors +
      VAR_4->stat_Dot3StatsLateCollisions +
      VAR_4->watchdog_timeouts;





  if (!(FUNC_1(VAR_4) == VAR_1) &&
      !(FUNC_0(VAR_4) == VAR_0))
   VAR_5 += VAR_4->stat_Dot3StatsCarrierSenseErrors;
  return (VAR_5);
 default:
  return (FUNC_2(VAR_2, VAR_3));
 }
}
