
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfe_hw_stats {int tx_broadcast; int tx_multicast; int tx_unicast; int rx_drops; int rx_pause; int tx_pause; int rx_octets; int tx_frames; int tx_deferals; int rx_broadcast; int rx_multicast; int rx_unicast; int rx_len_errors; int rx_fae; int rx_crc_errors; int rx_fifo_overuns; int rx_jumbos; int rx_runts; int rx_late_cols; int rx_extra_bytes; int rx_frame_errors; int tx_retry_errors; int tx_excess_deferals; int tx_carrier_losts; int tx_fifo_underuns; int tx_late_cols; int tx_multi_rexmits; int tx_one_rexmits; int tx_zero_rexmits; int tx_octets; } ;
struct nfe_softc {int nfe_flags; struct nfe_hw_stats nfe_stats; } ;


 int FUNC_0 (struct nfe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct nfe_softc*,int ) ;
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

__attribute__((used)) static void
FUNC_2(struct nfe_softc *VAR_33)
{
 struct nfe_hw_stats *VAR_34;

 FUNC_0(VAR_33);

 if ((VAR_33->nfe_flags & (VAR_0 | VAR_1 | VAR_2)) == 0)
  return;

 VAR_34 = &VAR_33->nfe_stats;
 VAR_34->tx_octets += FUNC_1(VAR_33, VAR_27);
 VAR_34->tx_zero_rexmits += FUNC_1(VAR_33, VAR_32);
 VAR_34->tx_one_rexmits += FUNC_1(VAR_33, VAR_28);
 VAR_34->tx_multi_rexmits += FUNC_1(VAR_33, VAR_26);
 VAR_34->tx_late_cols += FUNC_1(VAR_33, VAR_24);
 VAR_34->tx_fifo_underuns += FUNC_1(VAR_33, VAR_22);
 VAR_34->tx_carrier_losts += FUNC_1(VAR_33, VAR_19);
 VAR_34->tx_excess_deferals += FUNC_1(VAR_33, VAR_21);
 VAR_34->tx_retry_errors += FUNC_1(VAR_33, VAR_30);
 VAR_34->rx_frame_errors += FUNC_1(VAR_33, VAR_9);
 VAR_34->rx_extra_bytes += FUNC_1(VAR_33, VAR_6);
 VAR_34->rx_late_cols += FUNC_1(VAR_33, VAR_11);
 VAR_34->rx_runts += FUNC_1(VAR_33, VAR_16);
 VAR_34->rx_jumbos += FUNC_1(VAR_33, VAR_10);
 VAR_34->rx_fifo_overuns += FUNC_1(VAR_33, VAR_8);
 VAR_34->rx_crc_errors += FUNC_1(VAR_33, VAR_4);
 VAR_34->rx_fae += FUNC_1(VAR_33, VAR_7);
 VAR_34->rx_len_errors += FUNC_1(VAR_33, VAR_12);
 VAR_34->rx_unicast += FUNC_1(VAR_33, VAR_17);
 VAR_34->rx_multicast += FUNC_1(VAR_33, VAR_13);
 VAR_34->rx_broadcast += FUNC_1(VAR_33, VAR_3);

 if ((VAR_33->nfe_flags & VAR_1) != 0) {
  VAR_34->tx_deferals += FUNC_1(VAR_33, VAR_20);
  VAR_34->tx_frames += FUNC_1(VAR_33, VAR_23);
  VAR_34->rx_octets += FUNC_1(VAR_33, VAR_14);
  VAR_34->tx_pause += FUNC_1(VAR_33, VAR_29);
  VAR_34->rx_pause += FUNC_1(VAR_33, VAR_15);
  VAR_34->rx_drops += FUNC_1(VAR_33, VAR_5);
 }

 if ((VAR_33->nfe_flags & VAR_2) != 0) {
  VAR_34->tx_unicast += FUNC_1(VAR_33, VAR_31);
  VAR_34->tx_multicast += FUNC_1(VAR_33, VAR_25);
  VAR_34->tx_broadcast += FUNC_1(VAR_33, VAR_18);
 }
}
