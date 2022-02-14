
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vge_hw_stats {int rx_frames; int rx_good_frames; int rx_fifo_oflows; int rx_runts; int rx_runts_errs; int rx_pkts_64; int rx_pkts_65_127; int rx_pkts_128_255; int rx_pkts_256_511; int rx_pkts_512_1023; int rx_pkts_1024_1518; int rx_pkts_1519_max; int rx_pkts_1519_max_errs; int rx_jumbos; int rx_crcerrs; int rx_pause_frames; int rx_alignerrs; int rx_nobufs; int rx_symerrs; int rx_lenerrs; int tx_good_frames; int tx_pkts_64; int tx_pkts_65_127; int tx_pkts_128_255; int tx_pkts_256_511; int tx_pkts_512_1023; int tx_pkts_1024_1518; int tx_jumbos; int tx_colls; int tx_pause; int tx_sqeerrs; int tx_latecolls; } ;
struct vge_softc {int vge_dev; struct ifnet* vge_ifp; struct vge_hw_stats vge_stats; } ;
struct ifnet {int dummy; } ;
typedef int mib ;


 int FUNC_0 (struct vge_softc*,int ) ;
 int FUNC_1 (struct vge_softc*,int ) ;
 int FUNC_2 (struct vge_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct vge_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 size_t VAR_11 ;
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
 int VAR_43 ;
 int FUNC_6 (int*,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ifnet*,int ,int) ;
 int FUNC_9 (struct vge_softc*) ;

__attribute__((used)) static void
FUNC_10(struct vge_softc *VAR_44)
{
 struct vge_hw_stats *VAR_45;
 struct ifnet *VAR_46;
 uint32_t VAR_47[VAR_9], VAR_48;
 int VAR_49;

 FUNC_4(VAR_44);

 VAR_45 = &VAR_44->vge_stats;
 VAR_46 = VAR_44->vge_ifp;

 FUNC_2(VAR_44, VAR_5,
     FUNC_0(VAR_44, VAR_5) | VAR_6);
 for (VAR_49 = VAR_43; VAR_49 > 0; VAR_49--) {
  FUNC_3(1);
  if ((FUNC_0(VAR_44, VAR_5) & VAR_6) == 0)
   break;
 }
 if (VAR_49 == 0) {
  FUNC_7(VAR_44->vge_dev, "MIB counter dump timed out!\n");
  FUNC_9(VAR_44);
  return;
 }

 FUNC_6(VAR_47, sizeof(VAR_47));
reset_idx:

 FUNC_2(VAR_44, VAR_5,
     FUNC_0(VAR_44, VAR_5) | VAR_7);
 for (VAR_49 = 0; VAR_49 < VAR_9; VAR_49++) {
  VAR_48 = FUNC_1(VAR_44, VAR_8);
  if (VAR_49 != FUNC_5(VAR_48)) {

   goto reset_idx;
  }
  VAR_47[VAR_49] = VAR_48 & VAR_10;
 }


 VAR_45->rx_frames += VAR_47[VAR_14];
 VAR_45->rx_good_frames += VAR_47[VAR_15];
 VAR_45->rx_fifo_oflows += VAR_47[VAR_13];
 VAR_45->rx_runts += VAR_47[VAR_28];
 VAR_45->rx_runts_errs += VAR_47[VAR_29];
 VAR_45->rx_pkts_64 += VAR_47[VAR_26];
 VAR_45->rx_pkts_65_127 += VAR_47[VAR_27];
 VAR_45->rx_pkts_128_255 += VAR_47[VAR_21];
 VAR_45->rx_pkts_256_511 += VAR_47[VAR_24];
 VAR_45->rx_pkts_512_1023 += VAR_47[VAR_25];
 VAR_45->rx_pkts_1024_1518 += VAR_47[VAR_20];
 VAR_45->rx_pkts_1519_max += VAR_47[VAR_22];
 VAR_45->rx_pkts_1519_max_errs += VAR_47[VAR_23];
 VAR_45->rx_jumbos += VAR_47[VAR_16];
 VAR_45->rx_crcerrs += VAR_47[VAR_12];
 VAR_45->rx_pause_frames += VAR_47[VAR_19];
 VAR_45->rx_alignerrs += VAR_47[VAR_11];
 VAR_45->rx_nobufs += VAR_47[VAR_18];
 VAR_45->rx_symerrs += VAR_47[VAR_30];
 VAR_45->rx_lenerrs += VAR_47[VAR_17];


 VAR_45->tx_good_frames += VAR_47[VAR_32];
 VAR_45->tx_pkts_64 += VAR_47[VAR_40];
 VAR_45->tx_pkts_65_127 += VAR_47[VAR_41];
 VAR_45->tx_pkts_128_255 += VAR_47[VAR_37];
 VAR_45->tx_pkts_256_511 += VAR_47[VAR_38];
 VAR_45->tx_pkts_512_1023 += VAR_47[VAR_39];
 VAR_45->tx_pkts_1024_1518 += VAR_47[VAR_36];
 VAR_45->tx_jumbos += VAR_47[VAR_33];
 VAR_45->tx_colls += VAR_47[VAR_31];
 VAR_45->tx_pause += VAR_47[VAR_35];



 VAR_45->tx_latecolls += VAR_47[VAR_34];


 FUNC_8(VAR_46, VAR_4, VAR_47[VAR_32]);

 FUNC_8(VAR_46, VAR_0,
     VAR_47[VAR_31] + VAR_47[VAR_34]);

 FUNC_8(VAR_46, VAR_3,
     VAR_47[VAR_31] + VAR_47[VAR_34]);

 FUNC_8(VAR_46, VAR_2, VAR_47[VAR_15]);

 FUNC_8(VAR_46, VAR_1,
     VAR_47[VAR_13] +
     VAR_47[VAR_28] +
     VAR_47[VAR_29] +
     VAR_47[VAR_12] +
     VAR_47[VAR_11] +
     VAR_47[VAR_18] +
     VAR_47[VAR_30] +
     VAR_47[VAR_17]);
}
