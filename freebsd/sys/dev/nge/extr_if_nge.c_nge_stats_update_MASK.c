
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nge_stats {int rx_pkts_errs; int rx_crc_errs; int rx_fifo_oflows; int rx_align_errs; int rx_sym_errs; int rx_pkts_jumbos; int rx_len_errs; int rx_unctl_frames; int rx_pause; int tx_pause; int tx_seq_errs; } ;
struct nge_softc {struct nge_stats nge_stats; struct ifnet* nge_ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct nge_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nge_softc*) ;
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
 int FUNC_2 (struct ifnet*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct nge_softc *VAR_12)
{
 struct ifnet *VAR_13;
 struct nge_stats VAR_14, *VAR_15, *VAR_16;

 FUNC_1(VAR_12);

 VAR_13 = VAR_12->nge_ifp;
 VAR_15 = &VAR_14;
 VAR_15->rx_pkts_errs =
     FUNC_0(VAR_12, VAR_6) & 0xFFFF;
 VAR_15->rx_crc_errs =
     FUNC_0(VAR_12, VAR_3) & 0xFFFF;
 VAR_15->rx_fifo_oflows =
     FUNC_0(VAR_12, VAR_5) & 0xFFFF;
 VAR_15->rx_align_errs =
     FUNC_0(VAR_12, VAR_2) & 0xFFFF;
 VAR_15->rx_sym_errs =
     FUNC_0(VAR_12, VAR_8) & 0xFFFF;
 VAR_15->rx_pkts_jumbos =
     FUNC_0(VAR_12, VAR_4) & 0xFFFF;
 VAR_15->rx_len_errs =
     FUNC_0(VAR_12, VAR_7) & 0xFFFF;
 VAR_15->rx_unctl_frames =
     FUNC_0(VAR_12, VAR_1) & 0xFFFF;
 VAR_15->rx_pause =
     FUNC_0(VAR_12, VAR_9) & 0xFFFF;
 VAR_15->tx_pause =
     FUNC_0(VAR_12, VAR_11) & 0xFFFF;
 VAR_15->tx_seq_errs =
     FUNC_0(VAR_12, VAR_10) & 0xFF;




 FUNC_2(VAR_13, VAR_0,
     VAR_15->rx_pkts_errs + VAR_15->rx_crc_errs +
     VAR_15->rx_fifo_oflows + VAR_15->rx_sym_errs);

 VAR_16 = &VAR_12->nge_stats;
 VAR_16->rx_pkts_errs += VAR_15->rx_pkts_errs;
 VAR_16->rx_crc_errs += VAR_15->rx_crc_errs;
 VAR_16->rx_fifo_oflows += VAR_15->rx_fifo_oflows;
 VAR_16->rx_align_errs += VAR_15->rx_align_errs;
 VAR_16->rx_sym_errs += VAR_15->rx_sym_errs;
 VAR_16->rx_pkts_jumbos += VAR_15->rx_pkts_jumbos;
 VAR_16->rx_len_errs += VAR_15->rx_len_errs;
 VAR_16->rx_unctl_frames += VAR_15->rx_unctl_frames;
 VAR_16->rx_pause += VAR_15->rx_pause;
 VAR_16->tx_pause += VAR_15->tx_pause;
 VAR_16->tx_seq_errs += VAR_15->tx_seq_errs;
}
