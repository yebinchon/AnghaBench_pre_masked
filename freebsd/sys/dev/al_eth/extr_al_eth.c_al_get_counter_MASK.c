
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ifnet {int dummy; } ;
struct al_eth_mac_stats {scalar_t__ ifOutErrors; scalar_t__ aAlignmentErrors; scalar_t__ aFrameCheckSequenceErrors; scalar_t__ etherStatsOversizePkts; scalar_t__ etherStatsJabbers; scalar_t__ etherStatsFragments; scalar_t__ etherStatsUndersizePkts; scalar_t__ ifInErrors; scalar_t__ etherStatsDropEvents; scalar_t__ ifOutMulticastPkts; scalar_t__ ifInMulticastPkts; scalar_t__ aOctetsTransmittedOK; scalar_t__ aOctetsReceivedOK; scalar_t__ aFramesTransmittedOK; scalar_t__ aFramesReceivedOK; } ;
struct al_eth_adapter {struct al_eth_mac_stats mac_stats; } ;
typedef int ift_counter ;
 scalar_t__ FUNC_0 (struct ifnet*,int) ;
 struct al_eth_adapter* FUNC_1 (struct ifnet*) ;

__attribute__((used)) static uint64_t
FUNC_2(struct ifnet *VAR_0, ift_counter VAR_1)
{
 struct al_eth_adapter *VAR_2;
 struct al_eth_mac_stats *VAR_3;
 uint64_t VAR_4;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = &VAR_2->mac_stats;

 switch (VAR_1) {
 case 133:
  return (VAR_3->aFramesReceivedOK);
 case 128:
  return (VAR_3->aFramesTransmittedOK);
 case 136:
  return (VAR_3->aOctetsReceivedOK);
 case 131:
  return (VAR_3->aOctetsTransmittedOK);
 case 134:
  return (VAR_3->ifInMulticastPkts);
 case 129:
  return (VAR_3->ifOutMulticastPkts);
 case 137:
  return (0);
 case 132:
  return (VAR_3->etherStatsDropEvents);
 case 135:
  VAR_4 = VAR_3->ifInErrors +
      VAR_3->etherStatsUndersizePkts +
      VAR_3->etherStatsFragments +
      VAR_3->etherStatsJabbers +
      VAR_3->etherStatsOversizePkts +
      VAR_3->aFrameCheckSequenceErrors +
      VAR_3->aAlignmentErrors;
  return (VAR_4);
 case 130:
  return (VAR_3->ifOutErrors);
 default:
  return (FUNC_0(VAR_0, VAR_1));
 }
}
