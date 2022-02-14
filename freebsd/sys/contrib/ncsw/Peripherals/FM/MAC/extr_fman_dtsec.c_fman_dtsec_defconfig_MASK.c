
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_cfg {int wake_on_lan; int tbi_phy_addr; int maximum_frame; int back_to_back_ipg; int min_ifg_enforcement; int non_back_to_back_ipg2; int non_back_to_back_ipg1; int rx_promisc; int tx_pause_time_extd; int rx_group_hash_exd; int tx_flow; int rx_flow; int tx_time_stamp_en; int rx_time_stamp_en; int loopback; int tx_preamble; int rx_preamble; int preamble_len; int ptp_exception_en; int ptp_tsu_en; int rx_prepend; int tbipa; int tx_pause_time; int rx_ctrl_acc; int tx_crc; int tx_pad_crc; int rx_len_check; int rx_short_frm; int rx_drop_bcast; int halfdup_alt_backoff_en; int halfdup_alt_backoff_val; int halfdup_bp_no_backoff; int halfdup_no_backoff; int halfdup_excess_defer; int halfdup_coll_window; int halfdup_retransmit; int halfdup_on; } ;


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

void FUNC_0(struct dtsec_cfg *VAR_37)
{
 VAR_37->halfdup_on = VAR_7;
 VAR_37->halfdup_retransmit = VAR_8;
 VAR_37->halfdup_coll_window = VAR_4;
 VAR_37->halfdup_excess_defer = VAR_5;
 VAR_37->halfdup_no_backoff = VAR_6;
 VAR_37->halfdup_bp_no_backoff = VAR_3;
 VAR_37->halfdup_alt_backoff_val = VAR_2;
 VAR_37->halfdup_alt_backoff_en = VAR_1;
 VAR_37->rx_drop_bcast = VAR_18;
 VAR_37->rx_short_frm = VAR_25;
 VAR_37->rx_len_check = VAR_21;
 VAR_37->tx_pad_crc = VAR_31;
 VAR_37->tx_crc = VAR_29;
 VAR_37->rx_ctrl_acc = VAR_17;
 VAR_37->tx_pause_time = VAR_32;
 VAR_37->tbipa = VAR_27;
 VAR_37->rx_prepend = VAR_23;
 VAR_37->ptp_tsu_en = VAR_16;
 VAR_37->ptp_exception_en = VAR_15;
 VAR_37->preamble_len = VAR_14;
 VAR_37->rx_preamble = VAR_22;
 VAR_37->tx_preamble = VAR_34;
 VAR_37->loopback = VAR_9;
 VAR_37->rx_time_stamp_en = VAR_26;
 VAR_37->tx_time_stamp_en = VAR_35;
 VAR_37->rx_flow = VAR_19;
 VAR_37->tx_flow = VAR_30;
 VAR_37->rx_group_hash_exd = VAR_20;
 VAR_37->tx_pause_time_extd = VAR_33;
 VAR_37->rx_promisc = VAR_24;
 VAR_37->non_back_to_back_ipg1 = VAR_12;
 VAR_37->non_back_to_back_ipg2 = VAR_13;
 VAR_37->min_ifg_enforcement = VAR_11;
 VAR_37->back_to_back_ipg = VAR_0;
 VAR_37->maximum_frame = VAR_10;
 VAR_37->tbi_phy_addr = VAR_28;
 VAR_37->wake_on_lan = VAR_36;
}
