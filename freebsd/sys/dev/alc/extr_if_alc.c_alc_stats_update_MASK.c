
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct smb {scalar_t__ updated; int tx_multi_colls; int tx_excess_colls; scalar_t__ rx_alignerrs; scalar_t__ rx_rrs_errs; scalar_t__ rx_fifo_oflows; scalar_t__ rx_pkts_truncated; scalar_t__ rx_runts; scalar_t__ rx_lenerrs; scalar_t__ rx_crcerrs; scalar_t__ rx_frames; scalar_t__ tx_pkts_truncated; scalar_t__ tx_underrun; scalar_t__ tx_late_colls; scalar_t__ tx_single_colls; scalar_t__ tx_frames; scalar_t__ tx_mcast_bytes; scalar_t__ tx_bcast_bytes; scalar_t__ tx_lenerrs; scalar_t__ tx_desc_underrun; scalar_t__ tx_pkts_1519_max; scalar_t__ tx_pkts_1024_1518; scalar_t__ tx_pkts_512_1023; scalar_t__ tx_pkts_256_511; scalar_t__ tx_pkts_128_255; scalar_t__ tx_pkts_65_127; scalar_t__ tx_pkts_64; scalar_t__ tx_bytes; scalar_t__ tx_deferred; scalar_t__ tx_control_frames; scalar_t__ tx_excess_defer; scalar_t__ tx_pause_frames; scalar_t__ tx_mcast_frames; scalar_t__ tx_bcast_frames; scalar_t__ rx_pkts_filtered; scalar_t__ rx_mcast_bytes; scalar_t__ rx_bcast_bytes; scalar_t__ rx_pkts_1519_max; scalar_t__ rx_pkts_1024_1518; scalar_t__ rx_pkts_512_1023; scalar_t__ rx_pkts_256_511; scalar_t__ rx_pkts_128_255; scalar_t__ rx_pkts_65_127; scalar_t__ rx_pkts_64; scalar_t__ rx_fragments; scalar_t__ rx_bytes; scalar_t__ rx_control_frames; scalar_t__ rx_pause_frames; scalar_t__ rx_mcast_frames; scalar_t__ rx_bcast_frames; } ;
struct ifnet {int dummy; } ;
struct TYPE_3__ {int alc_smb_map; int alc_smb_tag; } ;
struct TYPE_4__ {struct smb* alc_smb; } ;
struct alc_hw_stats {int tx_multi_colls; int tx_excess_colls; int tx_mcast_bytes; int tx_bcast_bytes; int tx_pkts_truncated; int tx_lenerrs; int tx_desc_underrun; int tx_underrun; int tx_late_colls; int tx_single_colls; int tx_pkts_1519_max; int tx_pkts_1024_1518; int tx_pkts_512_1023; int tx_pkts_256_511; int tx_pkts_128_255; int tx_pkts_65_127; int tx_pkts_64; int tx_bytes; int tx_deferred; int tx_control_frames; int tx_excess_defer; int tx_pause_frames; int tx_mcast_frames; int tx_bcast_frames; int tx_frames; int rx_pkts_filtered; int rx_mcast_bytes; int rx_bcast_bytes; int rx_alignerrs; int rx_rrs_errs; int rx_fifo_oflows; int rx_pkts_truncated; int rx_pkts_1519_max; int rx_pkts_1024_1518; int rx_pkts_512_1023; int rx_pkts_256_511; int rx_pkts_128_255; int rx_pkts_65_127; int rx_pkts_64; int rx_fragments; int rx_runts; int rx_bytes; int rx_lenerrs; int rx_crcerrs; int rx_control_frames; int rx_pause_frames; int rx_mcast_frames; int rx_bcast_frames; int rx_frames; } ;
struct alc_softc {int alc_flags; TYPE_1__ alc_cdata; TYPE_2__ alc_rdata; struct alc_hw_stats alc_stats; struct ifnet* alc_ifp; } ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct alc_softc*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct alc_softc *VAR_13)
{
 struct alc_hw_stats *VAR_14;
 struct smb VAR_15, *VAR_16;
 struct ifnet *VAR_17;
 uint32_t *VAR_18;
 int VAR_19;

 FUNC_0(VAR_13);

 VAR_17 = VAR_13->alc_ifp;
 VAR_14 = &VAR_13->alc_stats;
 if ((VAR_13->alc_flags & VAR_0) == 0) {
  FUNC_2(VAR_13->alc_cdata.alc_smb_tag,
      VAR_13->alc_cdata.alc_smb_map,
      VAR_3 | VAR_4);
  VAR_16 = VAR_13->alc_rdata.alc_smb;
  if (VAR_16->updated == 0)
   return;
 } else {
  VAR_16 = &VAR_15;

  for (VAR_18 = &VAR_15.rx_frames, VAR_19 = 0; VAR_18 <= &VAR_15.rx_pkts_filtered;
      VAR_18++) {
   *VAR_18 = FUNC_1(VAR_13, VAR_1 + VAR_19);
   VAR_19 += sizeof(uint32_t);
  }

  for (VAR_18 = &VAR_15.tx_frames, VAR_19 = 0; VAR_18 <= &VAR_15.tx_mcast_bytes;
      VAR_18++) {
   *VAR_18 = FUNC_1(VAR_13, VAR_2 + VAR_19);
   VAR_19 += sizeof(uint32_t);
  }
 }


 VAR_14->rx_frames += VAR_16->rx_frames;
 VAR_14->rx_bcast_frames += VAR_16->rx_bcast_frames;
 VAR_14->rx_mcast_frames += VAR_16->rx_mcast_frames;
 VAR_14->rx_pause_frames += VAR_16->rx_pause_frames;
 VAR_14->rx_control_frames += VAR_16->rx_control_frames;
 VAR_14->rx_crcerrs += VAR_16->rx_crcerrs;
 VAR_14->rx_lenerrs += VAR_16->rx_lenerrs;
 VAR_14->rx_bytes += VAR_16->rx_bytes;
 VAR_14->rx_runts += VAR_16->rx_runts;
 VAR_14->rx_fragments += VAR_16->rx_fragments;
 VAR_14->rx_pkts_64 += VAR_16->rx_pkts_64;
 VAR_14->rx_pkts_65_127 += VAR_16->rx_pkts_65_127;
 VAR_14->rx_pkts_128_255 += VAR_16->rx_pkts_128_255;
 VAR_14->rx_pkts_256_511 += VAR_16->rx_pkts_256_511;
 VAR_14->rx_pkts_512_1023 += VAR_16->rx_pkts_512_1023;
 VAR_14->rx_pkts_1024_1518 += VAR_16->rx_pkts_1024_1518;
 VAR_14->rx_pkts_1519_max += VAR_16->rx_pkts_1519_max;
 VAR_14->rx_pkts_truncated += VAR_16->rx_pkts_truncated;
 VAR_14->rx_fifo_oflows += VAR_16->rx_fifo_oflows;
 VAR_14->rx_rrs_errs += VAR_16->rx_rrs_errs;
 VAR_14->rx_alignerrs += VAR_16->rx_alignerrs;
 VAR_14->rx_bcast_bytes += VAR_16->rx_bcast_bytes;
 VAR_14->rx_mcast_bytes += VAR_16->rx_mcast_bytes;
 VAR_14->rx_pkts_filtered += VAR_16->rx_pkts_filtered;


 VAR_14->tx_frames += VAR_16->tx_frames;
 VAR_14->tx_bcast_frames += VAR_16->tx_bcast_frames;
 VAR_14->tx_mcast_frames += VAR_16->tx_mcast_frames;
 VAR_14->tx_pause_frames += VAR_16->tx_pause_frames;
 VAR_14->tx_excess_defer += VAR_16->tx_excess_defer;
 VAR_14->tx_control_frames += VAR_16->tx_control_frames;
 VAR_14->tx_deferred += VAR_16->tx_deferred;
 VAR_14->tx_bytes += VAR_16->tx_bytes;
 VAR_14->tx_pkts_64 += VAR_16->tx_pkts_64;
 VAR_14->tx_pkts_65_127 += VAR_16->tx_pkts_65_127;
 VAR_14->tx_pkts_128_255 += VAR_16->tx_pkts_128_255;
 VAR_14->tx_pkts_256_511 += VAR_16->tx_pkts_256_511;
 VAR_14->tx_pkts_512_1023 += VAR_16->tx_pkts_512_1023;
 VAR_14->tx_pkts_1024_1518 += VAR_16->tx_pkts_1024_1518;
 VAR_14->tx_pkts_1519_max += VAR_16->tx_pkts_1519_max;
 VAR_14->tx_single_colls += VAR_16->tx_single_colls;
 VAR_14->tx_multi_colls += VAR_16->tx_multi_colls;
 VAR_14->tx_late_colls += VAR_16->tx_late_colls;
 VAR_14->tx_excess_colls += VAR_16->tx_excess_colls;
 VAR_14->tx_underrun += VAR_16->tx_underrun;
 VAR_14->tx_desc_underrun += VAR_16->tx_desc_underrun;
 VAR_14->tx_lenerrs += VAR_16->tx_lenerrs;
 VAR_14->tx_pkts_truncated += VAR_16->tx_pkts_truncated;
 VAR_14->tx_bcast_bytes += VAR_16->tx_bcast_bytes;
 VAR_14->tx_mcast_bytes += VAR_16->tx_mcast_bytes;


 FUNC_3(VAR_17, VAR_12, VAR_16->tx_frames);

 FUNC_3(VAR_17, VAR_8, VAR_16->tx_single_colls +
     VAR_16->tx_multi_colls * 2 + VAR_16->tx_late_colls +
     VAR_16->tx_excess_colls * VAR_7);

 FUNC_3(VAR_17, VAR_11, VAR_16->tx_late_colls +
     VAR_16->tx_excess_colls + VAR_16->tx_underrun + VAR_16->tx_pkts_truncated);

 FUNC_3(VAR_17, VAR_10, VAR_16->rx_frames);

 FUNC_3(VAR_17, VAR_9,
     VAR_16->rx_crcerrs + VAR_16->rx_lenerrs +
     VAR_16->rx_runts + VAR_16->rx_pkts_truncated +
     VAR_16->rx_fifo_oflows + VAR_16->rx_rrs_errs +
     VAR_16->rx_alignerrs);

 if ((VAR_13->alc_flags & VAR_0) == 0) {

  VAR_16->updated = 0;
  FUNC_2(VAR_13->alc_cdata.alc_smb_tag,
      VAR_13->alc_cdata.alc_smb_map,
      VAR_5 | VAR_6);
 }
}
