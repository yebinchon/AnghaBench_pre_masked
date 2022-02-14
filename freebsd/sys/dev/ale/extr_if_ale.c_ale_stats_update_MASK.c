
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct smb {int tx_multi_colls; int tx_excess_colls; scalar_t__ rx_alignerrs; scalar_t__ rx_rrs_errs; scalar_t__ rx_fifo_oflows; scalar_t__ rx_pkts_truncated; scalar_t__ rx_runts; scalar_t__ rx_lenerrs; scalar_t__ rx_crcerrs; scalar_t__ rx_frames; scalar_t__ tx_pkts_truncated; scalar_t__ tx_underrun; scalar_t__ tx_late_colls; scalar_t__ tx_single_colls; scalar_t__ tx_frames; scalar_t__ tx_mcast_bytes; scalar_t__ tx_bcast_bytes; scalar_t__ tx_lenerrs; scalar_t__ tx_desc_underrun; scalar_t__ tx_pkts_1519_max; scalar_t__ tx_pkts_1024_1518; scalar_t__ tx_pkts_512_1023; scalar_t__ tx_pkts_256_511; scalar_t__ tx_pkts_128_255; scalar_t__ tx_pkts_65_127; scalar_t__ tx_pkts_64; scalar_t__ tx_bytes; scalar_t__ tx_deferred; scalar_t__ tx_control_frames; scalar_t__ tx_excess_defer; scalar_t__ tx_pause_frames; scalar_t__ tx_mcast_frames; scalar_t__ tx_bcast_frames; scalar_t__ rx_pkts_filtered; scalar_t__ rx_mcast_bytes; scalar_t__ rx_bcast_bytes; scalar_t__ rx_pkts_1519_max; scalar_t__ rx_pkts_1024_1518; scalar_t__ rx_pkts_512_1023; scalar_t__ rx_pkts_256_511; scalar_t__ rx_pkts_128_255; scalar_t__ rx_pkts_65_127; scalar_t__ rx_pkts_64; scalar_t__ rx_fragments; scalar_t__ rx_bytes; scalar_t__ rx_control_frames; scalar_t__ rx_pause_frames; scalar_t__ rx_mcast_frames; scalar_t__ rx_bcast_frames; } ;
struct ifnet {int dummy; } ;
struct ale_hw_stats {int tx_multi_colls; int tx_excess_colls; int tx_mcast_bytes; int tx_bcast_bytes; int tx_pkts_truncated; int tx_lenerrs; int tx_desc_underrun; int tx_underrun; int tx_late_colls; int tx_single_colls; int tx_pkts_1519_max; int tx_pkts_1024_1518; int tx_pkts_512_1023; int tx_pkts_256_511; int tx_pkts_128_255; int tx_pkts_65_127; int tx_pkts_64; int tx_bytes; int tx_deferred; int tx_control_frames; int tx_excess_defer; int tx_pause_frames; int tx_mcast_frames; int tx_bcast_frames; int tx_frames; int rx_pkts_filtered; int rx_mcast_bytes; int rx_bcast_bytes; int rx_alignerrs; int rx_rrs_errs; int rx_fifo_oflows; int rx_pkts_truncated; int rx_pkts_1519_max; int rx_pkts_1024_1518; int rx_pkts_512_1023; int rx_pkts_256_511; int rx_pkts_128_255; int rx_pkts_65_127; int rx_pkts_64; int rx_fragments; int rx_runts; int rx_bytes; int rx_lenerrs; int rx_crcerrs; int rx_control_frames; int rx_pause_frames; int rx_mcast_frames; int rx_bcast_frames; int rx_frames; } ;
struct ale_softc {struct ale_hw_stats ale_stats; struct ifnet* ale_ifp; } ;


 int FUNC_0 (struct ale_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ale_softc*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct ale_softc *VAR_8)
{
 struct ale_hw_stats *VAR_9;
 struct smb VAR_10, *VAR_11;
 struct ifnet *VAR_12;
 uint32_t *VAR_13;
 int VAR_14;

 FUNC_0(VAR_8);

 VAR_12 = VAR_8->ale_ifp;
 VAR_9 = &VAR_8->ale_stats;
 VAR_11 = &VAR_10;


 for (VAR_13 = &VAR_10.rx_frames, VAR_14 = 0; VAR_13 <= &VAR_10.rx_pkts_filtered; VAR_13++) {
  *VAR_13 = FUNC_1(VAR_8, VAR_0 + VAR_14);
  VAR_14 += sizeof(uint32_t);
 }

 for (VAR_13 = &VAR_10.tx_frames, VAR_14 = 0; VAR_13 <= &VAR_10.tx_mcast_bytes; VAR_13++) {
  *VAR_13 = FUNC_1(VAR_8, VAR_1 + VAR_14);
  VAR_14 += sizeof(uint32_t);
 }


 VAR_9->rx_frames += VAR_11->rx_frames;
 VAR_9->rx_bcast_frames += VAR_11->rx_bcast_frames;
 VAR_9->rx_mcast_frames += VAR_11->rx_mcast_frames;
 VAR_9->rx_pause_frames += VAR_11->rx_pause_frames;
 VAR_9->rx_control_frames += VAR_11->rx_control_frames;
 VAR_9->rx_crcerrs += VAR_11->rx_crcerrs;
 VAR_9->rx_lenerrs += VAR_11->rx_lenerrs;
 VAR_9->rx_bytes += VAR_11->rx_bytes;
 VAR_9->rx_runts += VAR_11->rx_runts;
 VAR_9->rx_fragments += VAR_11->rx_fragments;
 VAR_9->rx_pkts_64 += VAR_11->rx_pkts_64;
 VAR_9->rx_pkts_65_127 += VAR_11->rx_pkts_65_127;
 VAR_9->rx_pkts_128_255 += VAR_11->rx_pkts_128_255;
 VAR_9->rx_pkts_256_511 += VAR_11->rx_pkts_256_511;
 VAR_9->rx_pkts_512_1023 += VAR_11->rx_pkts_512_1023;
 VAR_9->rx_pkts_1024_1518 += VAR_11->rx_pkts_1024_1518;
 VAR_9->rx_pkts_1519_max += VAR_11->rx_pkts_1519_max;
 VAR_9->rx_pkts_truncated += VAR_11->rx_pkts_truncated;
 VAR_9->rx_fifo_oflows += VAR_11->rx_fifo_oflows;
 VAR_9->rx_rrs_errs += VAR_11->rx_rrs_errs;
 VAR_9->rx_alignerrs += VAR_11->rx_alignerrs;
 VAR_9->rx_bcast_bytes += VAR_11->rx_bcast_bytes;
 VAR_9->rx_mcast_bytes += VAR_11->rx_mcast_bytes;
 VAR_9->rx_pkts_filtered += VAR_11->rx_pkts_filtered;


 VAR_9->tx_frames += VAR_11->tx_frames;
 VAR_9->tx_bcast_frames += VAR_11->tx_bcast_frames;
 VAR_9->tx_mcast_frames += VAR_11->tx_mcast_frames;
 VAR_9->tx_pause_frames += VAR_11->tx_pause_frames;
 VAR_9->tx_excess_defer += VAR_11->tx_excess_defer;
 VAR_9->tx_control_frames += VAR_11->tx_control_frames;
 VAR_9->tx_deferred += VAR_11->tx_deferred;
 VAR_9->tx_bytes += VAR_11->tx_bytes;
 VAR_9->tx_pkts_64 += VAR_11->tx_pkts_64;
 VAR_9->tx_pkts_65_127 += VAR_11->tx_pkts_65_127;
 VAR_9->tx_pkts_128_255 += VAR_11->tx_pkts_128_255;
 VAR_9->tx_pkts_256_511 += VAR_11->tx_pkts_256_511;
 VAR_9->tx_pkts_512_1023 += VAR_11->tx_pkts_512_1023;
 VAR_9->tx_pkts_1024_1518 += VAR_11->tx_pkts_1024_1518;
 VAR_9->tx_pkts_1519_max += VAR_11->tx_pkts_1519_max;
 VAR_9->tx_single_colls += VAR_11->tx_single_colls;
 VAR_9->tx_multi_colls += VAR_11->tx_multi_colls;
 VAR_9->tx_late_colls += VAR_11->tx_late_colls;
 VAR_9->tx_excess_colls += VAR_11->tx_excess_colls;
 VAR_9->tx_underrun += VAR_11->tx_underrun;
 VAR_9->tx_desc_underrun += VAR_11->tx_desc_underrun;
 VAR_9->tx_lenerrs += VAR_11->tx_lenerrs;
 VAR_9->tx_pkts_truncated += VAR_11->tx_pkts_truncated;
 VAR_9->tx_bcast_bytes += VAR_11->tx_bcast_bytes;
 VAR_9->tx_mcast_bytes += VAR_11->tx_mcast_bytes;


 FUNC_2(VAR_12, VAR_7, VAR_11->tx_frames);

 FUNC_2(VAR_12, VAR_3, VAR_11->tx_single_colls +
     VAR_11->tx_multi_colls * 2 + VAR_11->tx_late_colls +
     VAR_11->tx_excess_colls * VAR_2);

 FUNC_2(VAR_12, VAR_6, VAR_11->tx_late_colls +
     VAR_11->tx_excess_colls + VAR_11->tx_underrun + VAR_11->tx_pkts_truncated);

 FUNC_2(VAR_12, VAR_5, VAR_11->rx_frames);

 FUNC_2(VAR_12, VAR_4,
     VAR_11->rx_crcerrs + VAR_11->rx_lenerrs +
     VAR_11->rx_runts + VAR_11->rx_pkts_truncated +
     VAR_11->rx_fifo_oflows + VAR_11->rx_rrs_errs +
     VAR_11->rx_alignerrs);
}
