
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_hw_stats {int tx_fragments; int tx_undersize; int tx_oversize; int tx_control; int tx_crcerrs; int tx_jabbers; int tx_drop; int tx_pause_honored; int tx_total_colls; int tx_excess_colls; int tx_late_colls; int tx_multi_colls; int tx_single_colls; int tx_excess_deferred; int tx_deferred; int tx_pause; int tx_bcast; int tx_mcast; int tx_frames; int tx_bytes; int rx_drop; int rx_jabbers; int rx_fragments; int rx_oversize; int rx_runts; int rx_cserrs; int rx_codeerrs; int rx_lenerrs; int rx_alignerrs; int rx_unknown_control; int rx_pause; int rx_control; int rx_bcast; int rx_mcast; int rx_crcerrs; int rx_frames; int rx_bytes; int pkts_1519; int pkts_1024; int pkts_512; int pkts_256; int pkts_128; int pkts_65; int pkts_64; } ;
struct et_softc {struct et_hw_stats sc_stats; } ;


 scalar_t__ FUNC_0 (struct et_softc*,int ) ;
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

__attribute__((used)) static void
FUNC_1(struct et_softc *VAR_44)
{
 struct et_hw_stats *VAR_45;

 VAR_45 = &VAR_44->sc_stats;
 VAR_45->pkts_64 += FUNC_0(VAR_44, VAR_5);
 VAR_45->pkts_65 += FUNC_0(VAR_44, VAR_6);
 VAR_45->pkts_128 += FUNC_0(VAR_44, VAR_1);
 VAR_45->pkts_256 += FUNC_0(VAR_44, VAR_3);
 VAR_45->pkts_512 += FUNC_0(VAR_44, VAR_4);
 VAR_45->pkts_1024 += FUNC_0(VAR_44, VAR_0);
 VAR_45->pkts_1519 += FUNC_0(VAR_44, VAR_2);

 VAR_45->rx_bytes += FUNC_0(VAR_44, VAR_9);
 VAR_45->rx_frames += FUNC_0(VAR_44, VAR_16);
 VAR_45->rx_crcerrs += FUNC_0(VAR_44, VAR_11);
 VAR_45->rx_mcast += FUNC_0(VAR_44, VAR_19);
 VAR_45->rx_bcast += FUNC_0(VAR_44, VAR_8);
 VAR_45->rx_control += FUNC_0(VAR_44, VAR_13);
 VAR_45->rx_pause += FUNC_0(VAR_44, VAR_21);
 VAR_45->rx_unknown_control += FUNC_0(VAR_44, VAR_23);
 VAR_45->rx_alignerrs += FUNC_0(VAR_44, VAR_7);
 VAR_45->rx_lenerrs += FUNC_0(VAR_44, VAR_18);
 VAR_45->rx_codeerrs += FUNC_0(VAR_44, VAR_10);
 VAR_45->rx_cserrs += FUNC_0(VAR_44, VAR_12);
 VAR_45->rx_runts += FUNC_0(VAR_44, VAR_22);
 VAR_45->rx_oversize += FUNC_0(VAR_44, VAR_20);
 VAR_45->rx_fragments += FUNC_0(VAR_44, VAR_15);
 VAR_45->rx_jabbers += FUNC_0(VAR_44, VAR_17);
 VAR_45->rx_drop += FUNC_0(VAR_44, VAR_14);

 VAR_45->tx_bytes += FUNC_0(VAR_44, VAR_25);
 VAR_45->tx_frames += FUNC_0(VAR_44, VAR_33);
 VAR_45->tx_mcast += FUNC_0(VAR_44, VAR_36);
 VAR_45->tx_bcast += FUNC_0(VAR_44, VAR_24);
 VAR_45->tx_pause += FUNC_0(VAR_44, VAR_39);
 VAR_45->tx_deferred += FUNC_0(VAR_44, VAR_28);
 VAR_45->tx_excess_deferred += FUNC_0(VAR_44, VAR_31);
 VAR_45->tx_single_colls += FUNC_0(VAR_44, VAR_41);
 VAR_45->tx_multi_colls += FUNC_0(VAR_44, VAR_37);
 VAR_45->tx_late_colls += FUNC_0(VAR_44, VAR_35);
 VAR_45->tx_excess_colls += FUNC_0(VAR_44, VAR_30);
 VAR_45->tx_total_colls += FUNC_0(VAR_44, VAR_42);
 VAR_45->tx_pause_honored += FUNC_0(VAR_44, VAR_40);
 VAR_45->tx_drop += FUNC_0(VAR_44, VAR_29);
 VAR_45->tx_jabbers += FUNC_0(VAR_44, VAR_34);
 VAR_45->tx_crcerrs += FUNC_0(VAR_44, VAR_26);
 VAR_45->tx_control += FUNC_0(VAR_44, VAR_27);
 VAR_45->tx_oversize += FUNC_0(VAR_44, VAR_38);
 VAR_45->tx_undersize += FUNC_0(VAR_44, VAR_43);
 VAR_45->tx_fragments += FUNC_0(VAR_44, VAR_32);
}
