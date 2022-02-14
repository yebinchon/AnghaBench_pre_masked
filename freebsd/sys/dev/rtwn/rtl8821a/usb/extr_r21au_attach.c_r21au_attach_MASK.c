
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtwn_softc {char* name; char* fwname; int fwsig; int ackto; int txdesc_len; int rcr; int ntxchains; int nrxchains; int * bcn_status_reg; int temp_delta; int fwsize_limit; int cam_entry_limit; scalar_t__ macid_limit; int rx_dma_size; int efuse_maplen; int efuse_maxlen; int page_size; int npubqpages; int pktbuf_count; int page_count; int * rf_prog; void* agc_size; int * agc_prog; void* bb_size; int * bb_prog; void* mac_size; int * mac_prog; void** chan_num_5ghz; int ** chan_list_5ghz; int sc_init_bcnq1_boundary; int sc_post_init; int sc_init_antsel; int sc_init_rf; int sc_init_bb; int sc_init_edca; int sc_init_intr; int sc_init_ampdu; int sc_init_rx_agg; int sc_init_tx_agg; int sc_temp_read; int sc_temp_measure; int sc_beacon_select; int sc_beacon_set_rate; int sc_beacon_enable; int sc_beacon_init; int sc_set_media_status; void* sc_set_rssi; int sc_set_pwrmode; int sc_set_rsvd_page; int sc_detach_private; int sc_postattach; int sc_vap_preattach; int sc_adj_devcaps; int sc_read_chipid_vendor; int sc_iq_calib; void* sc_lc_calib; int sc_set_page_size; int sc_llt_init; int sc_fw_download_enable; int sc_fw_reset; int sc_power_off; int sc_power_on; int sc_parse_rom; void* sc_efuse_postread; int sc_check_condition; int sc_rf_write; int sc_rf_read; int sc_check_frame; int sc_handle_c2h_report; int sc_handle_tx_report; int sc_classify_intr; int sc_get_rssi_ofdm; int sc_get_rssi_cck; int sc_get_rx_stats; int sc_rx_radiotap_flags; int sc_tx_radiotap_flags; int sc_dump_tx_desc; int sc_fill_tx_desc_null; int sc_fill_tx_desc_raw; int sc_fill_tx_desc; int sc_set_chan; int sc_flags; } ;
struct rtwn_usb_softc {int tx_agg_desc_num; int uc_align_rx; struct rtwn_softc uc_sc; } ;
struct r12au_tx_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 void* FUNC_0 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
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
 int FUNC_1 (struct rtwn_softc*) ;
 int VAR_49 ;
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
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int * VAR_68 ;
 int * VAR_69 ;
 int * VAR_70 ;
 int * VAR_71 ;
 int VAR_72 ;
 void* VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;

void
FUNC_2(struct rtwn_usb_softc *VAR_76)
{
 struct rtwn_softc *VAR_77 = &VAR_76->uc_sc;


 VAR_76->uc_align_rx = VAR_43;
 VAR_76->tx_agg_desc_num = 6;


 VAR_77->sc_flags = VAR_16;

 VAR_77->sc_set_chan = VAR_39;
 VAR_77->sc_fill_tx_desc = VAR_24;
 VAR_77->sc_fill_tx_desc_raw = VAR_26;
 VAR_77->sc_fill_tx_desc_null = VAR_25;
 VAR_77->sc_dump_tx_desc = VAR_45;
 VAR_77->sc_tx_radiotap_flags = VAR_42;
 VAR_77->sc_rx_radiotap_flags = VAR_38;
 VAR_77->sc_get_rx_stats = VAR_28;
 VAR_77->sc_get_rssi_cck = VAR_53;
 VAR_77->sc_get_rssi_ofdm = VAR_62;
 VAR_77->sc_classify_intr = VAR_44;
 VAR_77->sc_handle_tx_report = VAR_36;
 VAR_77->sc_handle_c2h_report = VAR_29;
 VAR_77->sc_check_frame = VAR_22;
 VAR_77->sc_rf_read = VAR_18;
 VAR_77->sc_rf_write = VAR_37;
 VAR_77->sc_check_condition = VAR_51;
 VAR_77->sc_efuse_postread = VAR_73;
 VAR_77->sc_parse_rom = VAR_55;
 VAR_77->sc_power_on = VAR_58;
 VAR_77->sc_power_off = VAR_57;

 VAR_77->sc_fw_reset = VAR_52;
 VAR_77->sc_fw_download_enable = VAR_27;

 VAR_77->sc_llt_init = VAR_67;
 VAR_77->sc_set_page_size = VAR_72;
 VAR_77->sc_lc_calib = VAR_73;
 VAR_77->sc_iq_calib = VAR_35;
 VAR_77->sc_read_chipid_vendor = VAR_75;
 VAR_77->sc_adj_devcaps = VAR_59;
 VAR_77->sc_vap_preattach = VAR_61;
 VAR_77->sc_postattach = VAR_56;
 VAR_77->sc_detach_private = VAR_23;

 VAR_77->sc_set_media_status = VAR_40;
 VAR_77->sc_set_rsvd_page = VAR_63;
 VAR_77->sc_set_pwrmode = VAR_41;
 VAR_77->sc_set_rssi = VAR_73;



 VAR_77->sc_beacon_init = VAR_49;
 VAR_77->sc_beacon_enable = VAR_66;
 VAR_77->sc_beacon_set_rate = VAR_17;
 VAR_77->sc_beacon_select = VAR_50;
 VAR_77->sc_temp_measure = VAR_64;
 VAR_77->sc_temp_read = VAR_65;
 VAR_77->sc_init_tx_agg = VAR_60;
 VAR_77->sc_init_rx_agg = VAR_47;
 VAR_77->sc_init_ampdu = VAR_46;
 VAR_77->sc_init_intr = VAR_33;
 VAR_77->sc_init_edca = VAR_32;
 VAR_77->sc_init_bb = VAR_31;
 VAR_77->sc_init_rf = VAR_34;
 VAR_77->sc_init_antsel = VAR_30;
 VAR_77->sc_post_init = VAR_48;
 VAR_77->sc_init_bcnq1_boundary = VAR_54;

 VAR_77->chan_list_5ghz[0] = VAR_19;
 VAR_77->chan_list_5ghz[1] = VAR_20;
 VAR_77->chan_list_5ghz[2] = VAR_21;
 VAR_77->chan_num_5ghz[0] = FUNC_0(VAR_19);
 VAR_77->chan_num_5ghz[1] = FUNC_0(VAR_20);
 VAR_77->chan_num_5ghz[2] = FUNC_0(VAR_21);

 VAR_77->mac_prog = &VAR_70[0];
 VAR_77->mac_size = FUNC_0(VAR_70);
 VAR_77->bb_prog = &VAR_69[0];
 VAR_77->bb_size = FUNC_0(VAR_69);
 VAR_77->agc_prog = &VAR_68[0];
 VAR_77->agc_size = FUNC_0(VAR_68);
 VAR_77->rf_prog = &VAR_71[0];

 VAR_77->name = "RTL8821AU";
 VAR_77->fwname = "rtwn-rtl8821aufw";
 VAR_77->fwsig = 0x210;

 VAR_77->page_count = VAR_12;
 VAR_77->pktbuf_count = VAR_10;

 VAR_77->ackto = 0x80;
 VAR_77->npubqpages = VAR_5;
 VAR_77->page_size = VAR_13;

 VAR_77->txdesc_len = sizeof(struct r12au_tx_desc);
 VAR_77->efuse_maxlen = VAR_2;
 VAR_77->efuse_maplen = VAR_1;
 VAR_77->rx_dma_size = VAR_9;

 VAR_77->macid_limit = VAR_3 + 1;
 VAR_77->cam_entry_limit = VAR_0;
 VAR_77->fwsize_limit = VAR_4;
 VAR_77->temp_delta = VAR_14;

 VAR_77->bcn_status_reg[0] = VAR_15;
 VAR_77->bcn_status_reg[1] = VAR_11;
 VAR_77->rcr = VAR_6 |
       VAR_8 |
       VAR_7;

 VAR_77->ntxchains = 1;
 VAR_77->nrxchains = 1;

 FUNC_1(VAR_77);
}
