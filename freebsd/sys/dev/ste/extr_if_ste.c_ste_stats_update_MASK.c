
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ste_hw_stats {int rx_bytes; int rx_bcast_frames; int rx_mcast_frames; int rx_lost_frames; int tx_bytes; int tx_bcast_frames; int tx_mcast_frames; int tx_carrsense_errs; int tx_single_colls; int tx_multi_colls; int tx_late_colls; int tx_frames_defered; int tx_excess_defers; int tx_abort; int tx_frames; int rx_frames; } ;
struct ste_softc {struct ste_hw_stats ste_stats; struct ifnet* ste_ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 scalar_t__ FUNC_1 (struct ste_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct ste_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct ste_softc *VAR_19)
{
 struct ifnet *VAR_20;
 struct ste_hw_stats *VAR_21;
 uint32_t VAR_22;

 FUNC_2(VAR_19);

 VAR_20 = VAR_19->ste_ifp;
 VAR_21 = &VAR_19->ste_stats;

 VAR_22 = (uint32_t)FUNC_1(VAR_19, VAR_9) |
     ((uint32_t)FUNC_1(VAR_19, VAR_8)) << 16;
 VAR_22 &= 0x000FFFFF;
 VAR_21->rx_bytes += VAR_22;
 VAR_21->rx_frames += FUNC_1(VAR_19, VAR_5);
 VAR_21->rx_bcast_frames += FUNC_0(VAR_19, VAR_4);
 VAR_21->rx_mcast_frames += FUNC_0(VAR_19, VAR_7);
 VAR_21->rx_lost_frames += FUNC_0(VAR_19, VAR_6);

 VAR_22 = (uint32_t)FUNC_1(VAR_19, VAR_18) |
     ((uint32_t)FUNC_1(VAR_19, VAR_17)) << 16;
 VAR_22 &= 0x000FFFFF;
 VAR_21->tx_bytes += VAR_22;
 VAR_21->tx_frames += FUNC_1(VAR_19, VAR_15);
 VAR_21->tx_bcast_frames += FUNC_0(VAR_19, VAR_12);
 VAR_21->tx_mcast_frames += FUNC_0(VAR_19, VAR_16);
 VAR_21->tx_carrsense_errs += FUNC_0(VAR_19, VAR_1);
 VAR_22 = FUNC_0(VAR_19, VAR_10);
 VAR_21->tx_single_colls += VAR_22;
 FUNC_3(VAR_20, VAR_0, VAR_22);
 VAR_22 = FUNC_0(VAR_19, VAR_3);
 VAR_21->tx_multi_colls += VAR_22;
 FUNC_3(VAR_20, VAR_0, VAR_22);
 VAR_22 += FUNC_0(VAR_19, VAR_2);
 VAR_21->tx_late_colls += VAR_22;
 FUNC_3(VAR_20, VAR_0, VAR_22);
 VAR_21->tx_frames_defered += FUNC_0(VAR_19, VAR_13);
 VAR_21->tx_excess_defers += FUNC_0(VAR_19, VAR_14);
 VAR_21->tx_abort += FUNC_0(VAR_19, VAR_11);
}
