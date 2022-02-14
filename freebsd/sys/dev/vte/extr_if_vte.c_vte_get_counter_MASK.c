
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vte_hw_stats {scalar_t__ rx_fifo_full; scalar_t__ rx_long_frames; scalar_t__ rx_runts; scalar_t__ rx_crcerrs; scalar_t__ rx_frames; scalar_t__ tx_underruns; scalar_t__ tx_late_colls; scalar_t__ tx_frames; } ;
struct vte_softc {struct vte_hw_stats vte_stats; } ;
struct ifnet {int dummy; } ;
typedef int ift_counter ;







 scalar_t__ FUNC_0 (struct ifnet*,int) ;
 struct vte_softc* FUNC_1 (struct ifnet*) ;

__attribute__((used)) static uint64_t
FUNC_2(struct ifnet *VAR_0, ift_counter VAR_1)
{
 struct vte_softc *VAR_2;
 struct vte_hw_stats *VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = &VAR_2->vte_stats;

 switch (VAR_1) {
 case 128:
  return (VAR_3->tx_frames);
 case 132:
  return (VAR_3->tx_late_colls);
 case 129:
  return (VAR_3->tx_late_colls + VAR_3->tx_underruns);
 case 130:
  return (VAR_3->rx_frames);
 case 131:
  return (VAR_3->rx_crcerrs + VAR_3->rx_runts +
      VAR_3->rx_long_frames + VAR_3->rx_fifo_full);
 default:
  return (FUNC_0(VAR_0, VAR_1));
 }
}
