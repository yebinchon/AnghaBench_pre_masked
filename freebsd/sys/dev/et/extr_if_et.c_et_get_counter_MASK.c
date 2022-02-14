
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct ifnet {int dummy; } ;
struct et_hw_stats {scalar_t__ rx_drop; scalar_t__ rx_jabbers; scalar_t__ rx_runts; scalar_t__ rx_cserrs; scalar_t__ rx_codeerrs; scalar_t__ rx_lenerrs; scalar_t__ rx_alignerrs; scalar_t__ rx_crcerrs; scalar_t__ rx_frames; scalar_t__ tx_late_colls; scalar_t__ tx_excess_deferred; scalar_t__ tx_crcerrs; scalar_t__ tx_jabbers; scalar_t__ tx_drop; scalar_t__ tx_total_colls; scalar_t__ tx_frames; } ;
struct et_softc {struct et_hw_stats sc_stats; } ;
typedef int ift_counter ;







 scalar_t__ FUNC_0 (struct ifnet*,int) ;
 struct et_softc* FUNC_1 (struct ifnet*) ;

__attribute__((used)) static uint64_t
FUNC_2(struct ifnet *VAR_0, ift_counter VAR_1)
{
 struct et_softc *VAR_2;
 struct et_hw_stats *VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = &VAR_2->sc_stats;

 switch (VAR_1) {
 case 128:
  return (VAR_3->tx_frames);
 case 132:
  return (VAR_3->tx_total_colls);
 case 129:
  return (VAR_3->tx_drop + VAR_3->tx_jabbers +
      VAR_3->tx_crcerrs + VAR_3->tx_excess_deferred +
      VAR_3->tx_late_colls);
 case 130:
  return (VAR_3->rx_frames);
 case 131:
  return (VAR_3->rx_crcerrs + VAR_3->rx_alignerrs +
      VAR_3->rx_lenerrs + VAR_3->rx_codeerrs + VAR_3->rx_cserrs +
      VAR_3->rx_runts + VAR_3->rx_jabbers + VAR_3->rx_drop);
 default:
  return (FUNC_0(VAR_0, VAR_1));
 }
}
