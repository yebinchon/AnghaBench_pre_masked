
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb {scalar_t__ updated; int tx_excess_colls; scalar_t__ rx_alignerrs; scalar_t__ rx_desc_oflows; scalar_t__ rx_fifo_oflows; scalar_t__ rx_pkts_truncated; scalar_t__ rx_runts; scalar_t__ rx_lenerrs; scalar_t__ rx_crcerrs; scalar_t__ rx_frames; scalar_t__ tx_pkts_truncated; scalar_t__ tx_underrun; scalar_t__ tx_late_colls; scalar_t__ tx_multi_colls; scalar_t__ tx_single_colls; scalar_t__ tx_frames; scalar_t__ tx_mcast_bytes; scalar_t__ tx_bcast_bytes; scalar_t__ tx_lenerrs; scalar_t__ tx_desc_underrun; scalar_t__ tx_pkts_1519_max; scalar_t__ tx_pkts_1024_1518; scalar_t__ tx_pkts_512_1023; scalar_t__ tx_pkts_256_511; scalar_t__ tx_pkts_128_255; scalar_t__ tx_pkts_65_127; scalar_t__ tx_pkts_64; scalar_t__ tx_bytes; scalar_t__ tx_deferred; scalar_t__ tx_control_frames; scalar_t__ tx_excess_defer; scalar_t__ tx_pause_frames; scalar_t__ tx_mcast_frames; scalar_t__ tx_bcast_frames; scalar_t__ rx_pkts_filtered; scalar_t__ rx_mcast_bytes; scalar_t__ rx_bcast_bytes; scalar_t__ rx_pkts_1519_max; scalar_t__ rx_pkts_1024_1518; scalar_t__ rx_pkts_512_1023; scalar_t__ rx_pkts_256_511; scalar_t__ rx_pkts_128_255; scalar_t__ rx_pkts_65_127; scalar_t__ rx_pkts_64; scalar_t__ rx_fragments; scalar_t__ rx_bytes; scalar_t__ rx_control_frames; scalar_t__ rx_pause_frames; scalar_t__ rx_mcast_frames; scalar_t__ rx_bcast_frames; } ;
struct ifnet {int dummy; } ;
struct age_stats {int tx_excess_colls; int tx_mcast_bytes; int tx_bcast_bytes; int tx_pkts_truncated; int tx_lenerrs; int tx_desc_underrun; int tx_underrun; int tx_late_colls; int tx_multi_colls; int tx_single_colls; int tx_pkts_1519_max; int tx_pkts_1024_1518; int tx_pkts_512_1023; int tx_pkts_256_511; int tx_pkts_128_255; int tx_pkts_65_127; int tx_pkts_64; int tx_bytes; int tx_deferred; int tx_control_frames; int tx_excess_defer; int tx_pause_frames; int tx_mcast_frames; int tx_bcast_frames; int tx_frames; int rx_pkts_filtered; int rx_mcast_bytes; int rx_bcast_bytes; int rx_alignerrs; int rx_desc_oflows; int rx_fifo_oflows; int rx_pkts_truncated; int rx_pkts_1519_max; int rx_pkts_1024_1518; int rx_pkts_512_1023; int rx_pkts_256_511; int rx_pkts_128_255; int rx_pkts_65_127; int rx_pkts_64; int rx_fragments; int rx_runts; int rx_bytes; int rx_lenerrs; int rx_crcerrs; int rx_control_frames; int rx_pause_frames; int rx_mcast_frames; int rx_bcast_frames; int rx_frames; } ;
struct TYPE_3__ {int age_smb_block_map; int age_smb_block_tag; } ;
struct TYPE_4__ {struct smb* age_smb_block; } ;
struct age_softc {TYPE_1__ age_cdata; struct ifnet* age_ifp; TYPE_2__ age_rdata; struct age_stats age_stat; } ;


 int FUNC_0 (struct age_softc*) ;
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
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct age_softc *VAR_10)
{
 struct age_stats *VAR_11;
 struct smb *VAR_12;
 struct ifnet *VAR_13;

 FUNC_0(VAR_10);

 VAR_11 = &VAR_10->age_stat;

 FUNC_1(VAR_10->age_cdata.age_smb_block_tag,
     VAR_10->age_cdata.age_smb_block_map,
     VAR_0 | VAR_1);

 VAR_12 = VAR_10->age_rdata.age_smb_block;
 if (VAR_12->updated == 0)
  return;

 VAR_13 = VAR_10->age_ifp;

 VAR_11->rx_frames += VAR_12->rx_frames;
 VAR_11->rx_bcast_frames += VAR_12->rx_bcast_frames;
 VAR_11->rx_mcast_frames += VAR_12->rx_mcast_frames;
 VAR_11->rx_pause_frames += VAR_12->rx_pause_frames;
 VAR_11->rx_control_frames += VAR_12->rx_control_frames;
 VAR_11->rx_crcerrs += VAR_12->rx_crcerrs;
 VAR_11->rx_lenerrs += VAR_12->rx_lenerrs;
 VAR_11->rx_bytes += VAR_12->rx_bytes;
 VAR_11->rx_runts += VAR_12->rx_runts;
 VAR_11->rx_fragments += VAR_12->rx_fragments;
 VAR_11->rx_pkts_64 += VAR_12->rx_pkts_64;
 VAR_11->rx_pkts_65_127 += VAR_12->rx_pkts_65_127;
 VAR_11->rx_pkts_128_255 += VAR_12->rx_pkts_128_255;
 VAR_11->rx_pkts_256_511 += VAR_12->rx_pkts_256_511;
 VAR_11->rx_pkts_512_1023 += VAR_12->rx_pkts_512_1023;
 VAR_11->rx_pkts_1024_1518 += VAR_12->rx_pkts_1024_1518;
 VAR_11->rx_pkts_1519_max += VAR_12->rx_pkts_1519_max;
 VAR_11->rx_pkts_truncated += VAR_12->rx_pkts_truncated;
 VAR_11->rx_fifo_oflows += VAR_12->rx_fifo_oflows;
 VAR_11->rx_desc_oflows += VAR_12->rx_desc_oflows;
 VAR_11->rx_alignerrs += VAR_12->rx_alignerrs;
 VAR_11->rx_bcast_bytes += VAR_12->rx_bcast_bytes;
 VAR_11->rx_mcast_bytes += VAR_12->rx_mcast_bytes;
 VAR_11->rx_pkts_filtered += VAR_12->rx_pkts_filtered;


 VAR_11->tx_frames += VAR_12->tx_frames;
 VAR_11->tx_bcast_frames += VAR_12->tx_bcast_frames;
 VAR_11->tx_mcast_frames += VAR_12->tx_mcast_frames;
 VAR_11->tx_pause_frames += VAR_12->tx_pause_frames;
 VAR_11->tx_excess_defer += VAR_12->tx_excess_defer;
 VAR_11->tx_control_frames += VAR_12->tx_control_frames;
 VAR_11->tx_deferred += VAR_12->tx_deferred;
 VAR_11->tx_bytes += VAR_12->tx_bytes;
 VAR_11->tx_pkts_64 += VAR_12->tx_pkts_64;
 VAR_11->tx_pkts_65_127 += VAR_12->tx_pkts_65_127;
 VAR_11->tx_pkts_128_255 += VAR_12->tx_pkts_128_255;
 VAR_11->tx_pkts_256_511 += VAR_12->tx_pkts_256_511;
 VAR_11->tx_pkts_512_1023 += VAR_12->tx_pkts_512_1023;
 VAR_11->tx_pkts_1024_1518 += VAR_12->tx_pkts_1024_1518;
 VAR_11->tx_pkts_1519_max += VAR_12->tx_pkts_1519_max;
 VAR_11->tx_single_colls += VAR_12->tx_single_colls;
 VAR_11->tx_multi_colls += VAR_12->tx_multi_colls;
 VAR_11->tx_late_colls += VAR_12->tx_late_colls;
 VAR_11->tx_excess_colls += VAR_12->tx_excess_colls;
 VAR_11->tx_underrun += VAR_12->tx_underrun;
 VAR_11->tx_desc_underrun += VAR_12->tx_desc_underrun;
 VAR_11->tx_lenerrs += VAR_12->tx_lenerrs;
 VAR_11->tx_pkts_truncated += VAR_12->tx_pkts_truncated;
 VAR_11->tx_bcast_bytes += VAR_12->tx_bcast_bytes;
 VAR_11->tx_mcast_bytes += VAR_12->tx_mcast_bytes;


 FUNC_2(VAR_13, VAR_9, VAR_12->tx_frames);

 FUNC_2(VAR_13, VAR_5, VAR_12->tx_single_colls +
     VAR_12->tx_multi_colls + VAR_12->tx_late_colls +
     VAR_12->tx_excess_colls * VAR_4);

 FUNC_2(VAR_13, VAR_8, VAR_12->tx_excess_colls +
     VAR_12->tx_late_colls + VAR_12->tx_underrun +
     VAR_12->tx_pkts_truncated);

 FUNC_2(VAR_13, VAR_7, VAR_12->rx_frames);

 FUNC_2(VAR_13, VAR_6, VAR_12->rx_crcerrs +
     VAR_12->rx_lenerrs + VAR_12->rx_runts + VAR_12->rx_pkts_truncated +
     VAR_12->rx_fifo_oflows + VAR_12->rx_desc_oflows +
     VAR_12->rx_alignerrs);


 VAR_12->updated = 0;

 FUNC_1(VAR_10->age_cdata.age_smb_block_tag,
     VAR_10->age_cdata.age_smb_block_map,
     VAR_2 | VAR_3);
}
