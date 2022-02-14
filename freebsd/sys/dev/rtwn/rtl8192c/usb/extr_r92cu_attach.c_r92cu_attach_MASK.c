
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {int ackto; int txdesc_len; scalar_t__ rcr; void** bcn_status_reg; int temp_delta; int fwsize_limit; int cam_entry_limit; scalar_t__ macid_limit; int rx_dma_size; int efuse_maplen; int efuse_maxlen; int page_size; int npubqpages; int pktbuf_count; int page_count; int * rf_prog; void* bb_size; int * bb_prog; void* mac_size; int * mac_prog; int sc_init_bcnq1_boundary; int sc_post_init; int sc_init_antsel; int sc_init_rf; int sc_init_bb; int sc_init_edca; int sc_init_intr; int sc_init_ampdu; int sc_init_rx_agg; int sc_init_tx_agg; int sc_temp_read; int sc_temp_measure; int sc_beacon_select; int sc_beacon_set_rate; int sc_beacon_enable; int sc_beacon_init; int sc_set_rssi; int sc_set_pwrmode; int sc_set_rsvd_page; int sc_set_media_status; int sc_detach_private; int sc_postattach; int sc_vap_preattach; int sc_adj_devcaps; int sc_read_chipid_vendor; int sc_iq_calib; int sc_lc_calib; int sc_set_page_size; int sc_llt_init; int sc_fw_download_enable; int sc_fw_reset; int sc_power_off; int sc_power_on; int sc_set_led; int sc_parse_rom; int sc_efuse_postread; int sc_check_condition; int sc_rf_write; int sc_rf_read; int sc_check_frame; void* sc_handle_c2h_report; void* sc_handle_tx_report; int sc_classify_intr; int sc_get_rssi_ofdm; int sc_get_rssi_cck; int sc_get_rx_stats; int sc_rx_radiotap_flags; int sc_tx_radiotap_flags; int sc_dump_tx_desc; int sc_fill_tx_desc_null; int sc_fill_tx_desc_raw; int sc_fill_tx_desc; int sc_set_chan; int sc_flags; } ;
struct rtwn_usb_softc {int tx_agg_desc_num; int uc_align_rx; struct rtwn_softc uc_sc; } ;
struct r92cu_tx_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int *) ;
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
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int FUNC_1 (struct rtwn_softc*) ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int * VAR_60 ;
 int * VAR_61 ;
 int * VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 void* VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;

void
FUNC_2(struct rtwn_usb_softc *VAR_69)
{
 struct rtwn_softc *VAR_70 = &VAR_69->uc_sc;


 VAR_69->uc_align_rx = VAR_49;
 VAR_69->tx_agg_desc_num = 6;


 VAR_70->sc_flags = VAR_12;

 VAR_70->sc_set_chan = VAR_40;
 VAR_70->sc_fill_tx_desc = VAR_19;
 VAR_70->sc_fill_tx_desc_raw = VAR_21;
 VAR_70->sc_fill_tx_desc_null = VAR_20;
 VAR_70->sc_dump_tx_desc = VAR_50;
 VAR_70->sc_tx_radiotap_flags = VAR_47;
 VAR_70->sc_rx_radiotap_flags = VAR_39;
 VAR_70->sc_get_rx_stats = VAR_26;
 VAR_70->sc_get_rssi_cck = VAR_24;
 VAR_70->sc_get_rssi_ofdm = VAR_25;
 VAR_70->sc_classify_intr = VAR_16;
 VAR_70->sc_handle_tx_report = VAR_66;
 VAR_70->sc_handle_c2h_report = VAR_66;
 VAR_70->sc_check_frame = VAR_64;
 VAR_70->sc_rf_read = VAR_37;
 VAR_70->sc_rf_write = VAR_38;
 VAR_70->sc_check_condition = VAR_15;
 VAR_70->sc_efuse_postread = VAR_18;
 VAR_70->sc_parse_rom = VAR_35;
 VAR_70->sc_set_led = VAR_59;
 VAR_70->sc_power_on = VAR_58;
 VAR_70->sc_power_off = VAR_57;

 VAR_70->sc_fw_reset = VAR_23;
 VAR_70->sc_fw_download_enable = VAR_22;

 VAR_70->sc_llt_init = VAR_34;
 VAR_70->sc_set_page_size = VAR_41;
 VAR_70->sc_lc_calib = VAR_33;
 VAR_70->sc_iq_calib = VAR_31;
 VAR_70->sc_read_chipid_vendor = VAR_36;
 VAR_70->sc_adj_devcaps = VAR_48;
 VAR_70->sc_vap_preattach = VAR_67;
 VAR_70->sc_postattach = VAR_56;
 VAR_70->sc_detach_private = VAR_17;
 VAR_70->sc_set_media_status = VAR_32;

 VAR_70->sc_set_rsvd_page = VAR_44;
 VAR_70->sc_set_pwrmode = VAR_42;
 VAR_70->sc_set_rssi = VAR_43;

 VAR_70->sc_beacon_init = VAR_14;
 VAR_70->sc_beacon_enable = VAR_13;
 VAR_70->sc_beacon_set_rate = VAR_68;
 VAR_70->sc_beacon_select = VAR_65;
 VAR_70->sc_temp_measure = VAR_45;
 VAR_70->sc_temp_read = VAR_46;
 VAR_70->sc_init_tx_agg = VAR_54;
 VAR_70->sc_init_rx_agg = VAR_53;
 VAR_70->sc_init_ampdu = VAR_27;
 VAR_70->sc_init_intr = VAR_52;
 VAR_70->sc_init_edca = VAR_29;
 VAR_70->sc_init_bb = VAR_51;
 VAR_70->sc_init_rf = VAR_30;
 VAR_70->sc_init_antsel = VAR_28;
 VAR_70->sc_post_init = VAR_55;
 VAR_70->sc_init_bcnq1_boundary = VAR_63;

 VAR_70->mac_prog = &VAR_62[0];
 VAR_70->mac_size = FUNC_0(VAR_62);
 VAR_70->bb_prog = &VAR_61[0];
 VAR_70->bb_size = FUNC_0(VAR_61);
 VAR_70->rf_prog = &VAR_60[0];

 VAR_70->page_count = VAR_1;
 VAR_70->pktbuf_count = VAR_10;

 VAR_70->ackto = 0x40;
 VAR_70->npubqpages = VAR_0;
 VAR_70->page_size = VAR_11;

 VAR_70->txdesc_len = sizeof(struct r92cu_tx_desc);
 VAR_70->efuse_maxlen = VAR_5;
 VAR_70->efuse_maplen = VAR_4;
 VAR_70->rx_dma_size = VAR_8;

 VAR_70->macid_limit = VAR_6 + 1;
 VAR_70->cam_entry_limit = VAR_3;
 VAR_70->fwsize_limit = VAR_7;
 VAR_70->temp_delta = VAR_2;

 VAR_70->bcn_status_reg[0] = VAR_9;
 VAR_70->bcn_status_reg[1] = VAR_9;
 VAR_70->rcr = 0;

 FUNC_1(VAR_70);
}
