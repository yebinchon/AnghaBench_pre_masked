
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_long ;
struct ifnet {int dummy; } ;
struct bfe_hw_stats {int rx_control_frames; int rx_pause_frames; int rx_symbol_errs; int rx_align_errs; int rx_crc_errs; int rx_runts; int rx_crc_align_errs; int rx_missed_frames; int rx_frag_frames; int rx_oversize_frames; int rx_jabbers; int rx_pkts_1024_max; int rx_pkts_512_1023; int rx_pkts_256_511; int rx_pkts_128_255; int rx_pkts_65_127; int rx_pkts_64; int rx_mcast_frames; int rx_bcast_frames; int rx_frames; int rx_octets; int rx_good_frames; int rx_good_octets; int tx_pause_frames; int tx_carrier_losts; int tx_deferrals; int tx_late_colls; int tx_excess_colls; int tx_multi_colls; int tx_single_colls; int tx_colls; int tx_underruns; int tx_frag_frames; int tx_oversize_frames; int tx_jabbers; int tx_pkts_1024_max; int tx_pkts_512_1023; int tx_pkts_256_511; int tx_pkts_128_255; int tx_pkts_65_127; int tx_pkts_64; int tx_mcast_frames; int tx_bcast_frames; int tx_frames; int tx_octets; int tx_good_frames; int tx_good_octets; } ;
struct bfe_softc {struct bfe_hw_stats bfe_stats; struct ifnet* bfe_ifp; } ;


 int FUNC_0 (struct bfe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_1 (struct bfe_softc*,scalar_t__) ;
 int FUNC_2 (struct bfe_softc*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 size_t VAR_35 ;
 size_t VAR_36 ;
 size_t VAR_37 ;
 size_t VAR_38 ;
 size_t VAR_39 ;
 size_t VAR_40 ;
 size_t VAR_41 ;
 size_t VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 size_t VAR_50 ;
 size_t VAR_51 ;
 size_t VAR_52 ;
 size_t VAR_53 ;
 size_t VAR_54 ;
 size_t VAR_55 ;
 size_t VAR_56 ;
 size_t VAR_57 ;
 size_t VAR_58 ;
 int FUNC_3 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfe_softc *VAR_59)
{
 struct bfe_hw_stats *VAR_60;
 struct ifnet *VAR_61;
 uint32_t VAR_62[VAR_1];
 uint32_t VAR_63, *VAR_64;

 FUNC_0(VAR_59);

 VAR_64 = VAR_62;
 FUNC_2(VAR_59, VAR_2, VAR_0);
 for (VAR_63 = VAR_5; VAR_63 <= VAR_6; VAR_63 += 4)
  *VAR_64++ = FUNC_1(VAR_59, VAR_63);
 for (VAR_63 = VAR_3; VAR_63 <= VAR_4; VAR_63 += 4)
  *VAR_64++ = FUNC_1(VAR_59, VAR_63);

 VAR_61 = VAR_59->bfe_ifp;
 VAR_60 = &VAR_59->bfe_stats;

 VAR_60->tx_good_octets += VAR_62[VAR_46];
 VAR_60->tx_good_frames += VAR_62[VAR_47];
 VAR_60->tx_octets += VAR_62[VAR_52];
 VAR_60->tx_frames += VAR_62[VAR_54];
 VAR_60->tx_bcast_frames += VAR_62[VAR_41];
 VAR_60->tx_mcast_frames += VAR_62[VAR_50];
 VAR_60->tx_pkts_64 += VAR_62[VAR_39];
 VAR_60->tx_pkts_65_127 += VAR_62[VAR_40];
 VAR_60->tx_pkts_128_255 += VAR_62[VAR_36];
 VAR_60->tx_pkts_256_511 += VAR_62[VAR_37];
 VAR_60->tx_pkts_512_1023 += VAR_62[VAR_38];
 VAR_60->tx_pkts_1024_max += VAR_62[VAR_35];
 VAR_60->tx_jabbers += VAR_62[VAR_48];
 VAR_60->tx_oversize_frames += VAR_62[VAR_53];
 VAR_60->tx_frag_frames += VAR_62[VAR_45];
 VAR_60->tx_underruns += VAR_62[VAR_58];
 VAR_60->tx_colls += VAR_62[VAR_57];
 VAR_60->tx_single_colls += VAR_62[VAR_56];
 VAR_60->tx_multi_colls += VAR_62[VAR_51];
 VAR_60->tx_excess_colls += VAR_62[VAR_44];
 VAR_60->tx_late_colls += VAR_62[VAR_49];
 VAR_60->tx_deferrals += VAR_62[VAR_43];
 VAR_60->tx_carrier_losts += VAR_62[VAR_42];
 VAR_60->tx_pause_frames += VAR_62[VAR_55];

 VAR_60->rx_good_octets += VAR_62[VAR_23];
 VAR_60->rx_good_frames += VAR_62[VAR_24];
 VAR_60->rx_octets += VAR_62[VAR_29];
 VAR_60->rx_frames += VAR_62[VAR_31];
 VAR_60->rx_bcast_frames += VAR_62[VAR_19];
 VAR_60->rx_mcast_frames += VAR_62[VAR_26];
 VAR_60->rx_pkts_64 += VAR_62[VAR_16];
 VAR_60->rx_pkts_65_127 += VAR_62[VAR_17];
 VAR_60->rx_pkts_128_255 += VAR_62[VAR_13];
 VAR_60->rx_pkts_256_511 += VAR_62[VAR_14];
 VAR_60->rx_pkts_512_1023 += VAR_62[VAR_15];
 VAR_60->rx_pkts_1024_max += VAR_62[VAR_12];
 VAR_60->rx_jabbers += VAR_62[VAR_25];
 VAR_60->rx_oversize_frames += VAR_62[VAR_30];
 VAR_60->rx_frag_frames += VAR_62[VAR_22];
 VAR_60->rx_missed_frames += VAR_62[VAR_27];
 VAR_60->rx_crc_align_errs += VAR_62[VAR_21];
 VAR_60->rx_runts += VAR_62[VAR_34];
 VAR_60->rx_crc_errs += VAR_62[VAR_20];
 VAR_60->rx_align_errs += VAR_62[VAR_18];
 VAR_60->rx_symbol_errs += VAR_62[VAR_33];
 VAR_60->rx_pause_frames += VAR_62[VAR_32];
 VAR_60->rx_control_frames += VAR_62[VAR_28];


 FUNC_3(VAR_61, VAR_11, (u_long)VAR_62[VAR_47]);
 FUNC_3(VAR_61, VAR_7, (u_long)VAR_62[VAR_57]);
 FUNC_3(VAR_61, VAR_10, (u_long)VAR_62[VAR_58] +
     (u_long)VAR_62[VAR_44] +
     (u_long)VAR_62[VAR_43] +
     (u_long)VAR_62[VAR_42]);

 FUNC_3(VAR_61, VAR_9, (u_long)VAR_62[VAR_24]);

 FUNC_3(VAR_61, VAR_8, VAR_62[VAR_25] +
     VAR_62[VAR_27] +
     VAR_62[VAR_21] +
     VAR_62[VAR_34] +
     VAR_62[VAR_20] +
     VAR_62[VAR_18] +
     VAR_62[VAR_33]);
}
