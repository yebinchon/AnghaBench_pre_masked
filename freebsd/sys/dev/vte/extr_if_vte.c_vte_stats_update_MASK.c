
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vte_hw_stats {int rx_frames; int rx_bcast_frames; int rx_mcast_frames; int rx_runts; int rx_crcerrs; int rx_long_frames; int rx_fifo_full; int rx_desc_unavail; int tx_frames; int tx_underruns; int tx_late_colls; int tx_pause_frames; int rx_pause_frames; } ;
struct vte_softc {struct vte_hw_stats vte_stats; } ;


 int FUNC_0 (struct vte_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct vte_softc*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_2(struct vte_softc *VAR_9)
{
 struct vte_hw_stats *VAR_10;
 uint16_t VAR_11;

 FUNC_1(VAR_9);

 VAR_10 = &VAR_9->vte_stats;

 FUNC_0(VAR_9, VAR_8);

 VAR_10->rx_frames += FUNC_0(VAR_9, VAR_6);
 VAR_11 = FUNC_0(VAR_9, VAR_0);
 VAR_10->rx_bcast_frames += (VAR_11 >> 8);
 VAR_10->rx_mcast_frames += (VAR_11 & 0xFF);
 VAR_11 = FUNC_0(VAR_9, VAR_1);
 VAR_10->rx_runts += (VAR_11 >> 8);
 VAR_10->rx_crcerrs += (VAR_11 & 0xFF);
 VAR_11 = FUNC_0(VAR_9, VAR_2);
 VAR_10->rx_long_frames += (VAR_11 & 0xFF);
 VAR_11 = FUNC_0(VAR_9, VAR_3);
 VAR_10->rx_fifo_full += (VAR_11 >> 8);
 VAR_10->rx_desc_unavail += (VAR_11 & 0xFF);


 VAR_10->tx_frames += FUNC_0(VAR_9, VAR_7);
 VAR_11 = FUNC_0(VAR_9, VAR_4);
 VAR_10->tx_underruns += (VAR_11 >> 8);
 VAR_10->tx_late_colls += (VAR_11 & 0xFF);

 VAR_11 = FUNC_0(VAR_9, VAR_5);
 VAR_10->tx_pause_frames += (VAR_11 >> 8);
 VAR_10->rx_pause_frames += (VAR_11 & 0xFF);
}
