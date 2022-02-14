
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct msk_softc {int dummy; } ;
struct msk_hw_stats {int tx_underflows; int tx_single_colls; int tx_multi_colls; int tx_excess_colls; int tx_late_colls; int tx_colls; int tx_pkts_1519_max; int tx_pkts_1024_1518; int tx_pkts_512_1023; int tx_pkts_256_511; int tx_pkts_128_255; int tx_pkts_65_127; int tx_pkts_64; int tx_octets; int tx_mcast_frames; int tx_pause_frames; int tx_bcast_frames; int tx_ucast_frames; int rx_fifo_oflows; int rx_pkts_jabbers; int rx_pkts_too_long; int rx_pkts_1519_max; int rx_pkts_1024_1518; int rx_pkts_512_1023; int rx_pkts_256_511; int rx_pkts_128_255; int rx_pkts_65_127; int rx_pkts_64; int rx_runt_errs; int rx_runts; int rx_bad_octets; int rx_good_octets; int rx_crc_errs; int rx_mcast_frames; int rx_pause_frames; int rx_bcast_frames; int rx_ucast_frames; } ;
struct msk_if_softc {int msk_port; struct msk_hw_stats msk_stats; struct msk_softc* msk_softc; struct ifnet* msk_ifp; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ,int) ;
 int VAR_0 ;
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
 int VAR_43 ;
 int FUNC_2 (struct msk_if_softc*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct msk_if_softc *VAR_44)
{
 struct msk_softc *VAR_45;
 struct ifnet *VAR_46;
 struct msk_hw_stats *VAR_47;
 uint16_t VAR_48;
 uint32_t VAR_49;

 FUNC_2(VAR_44);

 VAR_46 = VAR_44->msk_ifp;
 if ((VAR_46->if_drv_flags & VAR_43) == 0)
  return;
 VAR_45 = VAR_44->msk_softc;
 VAR_47 = &VAR_44->msk_stats;

 VAR_48 = FUNC_0(VAR_45, VAR_44->msk_port, VAR_1);
 FUNC_1(VAR_45, VAR_44->msk_port, VAR_1, VAR_48 | VAR_0);


 VAR_47->rx_ucast_frames +=
     FUNC_3(VAR_44->msk_port, VAR_21);
 VAR_47->rx_bcast_frames +=
     FUNC_3(VAR_44->msk_port, VAR_10);
 VAR_47->rx_pause_frames +=
     FUNC_3(VAR_44->msk_port, VAR_16);
 VAR_47->rx_mcast_frames +=
     FUNC_3(VAR_44->msk_port, VAR_15);
 VAR_47->rx_crc_errs +=
     FUNC_3(VAR_44->msk_port, VAR_11);
 VAR_49 = FUNC_3(VAR_44->msk_port, VAR_18);
 VAR_47->rx_good_octets +=
     FUNC_4(VAR_44->msk_port, VAR_23);
 VAR_47->rx_bad_octets +=
     FUNC_4(VAR_44->msk_port, VAR_22);
 VAR_47->rx_runts +=
     FUNC_3(VAR_44->msk_port, VAR_17);
 VAR_47->rx_runt_errs +=
     FUNC_3(VAR_44->msk_port, VAR_3);
 VAR_47->rx_pkts_64 +=
     FUNC_3(VAR_44->msk_port, VAR_9);
 VAR_47->rx_pkts_65_127 +=
     FUNC_3(VAR_44->msk_port, VAR_5);
 VAR_47->rx_pkts_128_255 +=
     FUNC_3(VAR_44->msk_port, VAR_7);
 VAR_47->rx_pkts_256_511 +=
     FUNC_3(VAR_44->msk_port, VAR_8);
 VAR_47->rx_pkts_512_1023 +=
     FUNC_3(VAR_44->msk_port, VAR_4);
 VAR_47->rx_pkts_1024_1518 +=
     FUNC_3(VAR_44->msk_port, VAR_6);
 VAR_47->rx_pkts_1519_max +=
     FUNC_3(VAR_44->msk_port, VAR_14);
 VAR_47->rx_pkts_too_long +=
     FUNC_3(VAR_44->msk_port, VAR_13);
 VAR_47->rx_pkts_jabbers +=
     FUNC_3(VAR_44->msk_port, VAR_12);
 VAR_49 = FUNC_3(VAR_44->msk_port, VAR_19);
 VAR_47->rx_fifo_oflows +=
     FUNC_3(VAR_44->msk_port, VAR_2);
 VAR_49 = FUNC_3(VAR_44->msk_port, VAR_20);


 VAR_47->tx_ucast_frames +=
     FUNC_3(VAR_44->msk_port, VAR_41);
 VAR_47->tx_bcast_frames +=
     FUNC_3(VAR_44->msk_port, VAR_32);
 VAR_47->tx_pause_frames +=
     FUNC_3(VAR_44->msk_port, VAR_37);
 VAR_47->tx_mcast_frames +=
     FUNC_3(VAR_44->msk_port, VAR_36);
 VAR_47->tx_octets +=
     FUNC_4(VAR_44->msk_port, VAR_42);
 VAR_47->tx_pkts_64 +=
     FUNC_3(VAR_44->msk_port, VAR_30);
 VAR_47->tx_pkts_65_127 +=
     FUNC_3(VAR_44->msk_port, VAR_26);
 VAR_47->tx_pkts_128_255 +=
     FUNC_3(VAR_44->msk_port, VAR_28);
 VAR_47->tx_pkts_256_511 +=
     FUNC_3(VAR_44->msk_port, VAR_29);
 VAR_47->tx_pkts_512_1023 +=
     FUNC_3(VAR_44->msk_port, VAR_25);
 VAR_47->tx_pkts_1024_1518 +=
     FUNC_3(VAR_44->msk_port, VAR_27);
 VAR_47->tx_pkts_1519_max +=
     FUNC_3(VAR_44->msk_port, VAR_35);
 VAR_49 = FUNC_3(VAR_44->msk_port, VAR_40);
 VAR_47->tx_colls +=
     FUNC_3(VAR_44->msk_port, VAR_33);
 VAR_47->tx_late_colls +=
     FUNC_3(VAR_44->msk_port, VAR_34);
 VAR_47->tx_excess_colls +=
     FUNC_3(VAR_44->msk_port, VAR_31);
 VAR_47->tx_multi_colls +=
     FUNC_3(VAR_44->msk_port, VAR_38);
 VAR_47->tx_single_colls +=
     FUNC_3(VAR_44->msk_port, VAR_39);
 VAR_47->tx_underflows +=
     FUNC_3(VAR_44->msk_port, VAR_24);

 VAR_48 &= ~VAR_0;
 FUNC_1(VAR_45, VAR_44->msk_port, VAR_1, VAR_48);
}
