
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211com {int ic_caps; int ic_headroom; int ic_curchan; int ic_parent; int ic_transmit; int ic_set_channel; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_scan_end; int ic_scan_start; int ic_updateslot; int ic_raw_xmit; int ic_vap_delete; int ic_vap_create; int ic_opmode; int ic_name; int ic_channels; int ic_nchans; struct bwi_softc* ic_softc; int ic_macaddr; int ic_phytype; } ;
struct bwi_txbuf_hdr {int dummy; } ;
struct TYPE_4__ {int wr_ihdr; } ;
struct TYPE_3__ {int wt_ihdr; } ;
struct bwi_softc {int sc_fw_version; int sc_led_idle; int sc_led_blink; int sc_txpwr_calib; int sc_nmac; int sc_debug; TYPE_2__ sc_rx_th; TYPE_1__ sc_tx_th; int sc_rates; int sc_locale; int sc_mtx; int sc_watchdog_timer; struct bwi_mac* sc_mac; int sc_com_regwin; scalar_t__ sc_led_ticks; int sc_snd; int sc_calib_ch; int sc_restart_task; int sc_tq; int sc_dev; struct ieee80211com sc_ic; } ;
struct bwi_regwin {int dummy; } ;
struct bwi_phy {scalar_t__ phy_mode; } ;
struct bwi_mac {struct bwi_phy mac_phy; struct bwi_regwin mac_regwin; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwi_softc*) ;
 int FUNC_1 (struct bwi_softc*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bwi_softc*,int ,char*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_5 (int ,int ,int ,char*,int ,int*,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ,int ,struct bwi_softc*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_10 (struct bwi_softc*) ;
 int FUNC_11 (struct bwi_softc*) ;
 int FUNC_12 (struct bwi_softc*,int ) ;
 int FUNC_13 (struct bwi_softc*) ;
 int VAR_30 ;
 int FUNC_14 (struct bwi_softc*) ;
 int FUNC_15 (struct bwi_softc*) ;
 int FUNC_16 (struct bwi_softc*,int ,int ) ;
 int FUNC_17 (struct bwi_softc*) ;
 int FUNC_18 (struct ieee80211com*,int ,int *,int ) ;
 int FUNC_19 (struct bwi_softc*) ;
 int FUNC_20 (struct bwi_mac*) ;
 int FUNC_21 (struct bwi_mac*) ;
 int VAR_31 ;
 int FUNC_22 (struct bwi_softc*,int) ;
 int VAR_32 ;
 int FUNC_23 (struct bwi_softc*,int ) ;
 int FUNC_24 (struct bwi_softc*,struct bwi_regwin*,struct bwi_regwin**) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_25 (struct bwi_softc*) ;
 int FUNC_26 (struct bwi_softc*,int ) ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_27 (int *,int *,int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ,char*,int ,char*) ;
 int VAR_41 ;
 int FUNC_32 (struct ieee80211com*) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (struct ieee80211com*) ;
 int FUNC_35 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_42 ;
 int FUNC_36 (int *,int ) ;
 int FUNC_37 (char*,scalar_t__) ;
 int FUNC_38 (char*,int,int ,int *) ;
 int FUNC_39 (int *,int,int ,char*,int ) ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;

int
FUNC_40(struct bwi_softc *VAR_45)
{
 struct ieee80211com *VAR_46 = &VAR_45->sc_ic;
 device_t VAR_47 = VAR_45->sc_dev;
 struct bwi_mac *VAR_48;
 struct bwi_phy *VAR_49;
 int VAR_50, VAR_51;

 FUNC_1(VAR_45);




 VAR_45->sc_tq = FUNC_38("bwi_taskq", VAR_25 | VAR_26,
  VAR_43, &VAR_45->sc_tq);
 FUNC_39(&VAR_45->sc_tq, 1, VAR_28, "%s taskq",
  FUNC_28(VAR_47));
 FUNC_8(&VAR_45->sc_restart_task, 0, VAR_33, VAR_45);
 FUNC_27(&VAR_45->sc_calib_ch, &VAR_45->sc_mtx, 0);
 FUNC_36(&VAR_45->sc_snd, VAR_42);




 VAR_45->sc_fw_version = VAR_2;
 VAR_45->sc_led_idle = (2350 * VAR_41) / 1000;
 VAR_45->sc_led_ticks = VAR_44 - VAR_45->sc_led_idle;
 VAR_45->sc_led_blink = 1;
 VAR_45->sc_txpwr_calib = 1;



 FUNC_22(VAR_45, 1);

 VAR_51 = FUNC_10(VAR_45);
 if (VAR_51)
  goto fail;

 VAR_51 = FUNC_12(VAR_45, VAR_0);
 if (VAR_51)
  goto fail;

 if (FUNC_2(&VAR_45->sc_com_regwin)) {
  VAR_51 = FUNC_25(VAR_45);
  if (VAR_51)
   goto fail;

  VAR_51 = FUNC_26(VAR_45, VAR_0);
  if (VAR_51)
   goto fail;

  VAR_51 = FUNC_17(VAR_45);
  if (VAR_51)
   goto fail;
 }

 VAR_51 = FUNC_13(VAR_45);
 if (VAR_51)
  goto fail;

 FUNC_15(VAR_45);

 FUNC_19(VAR_45);

 for (VAR_50 = 0; VAR_50 < VAR_45->sc_nmac; ++VAR_50) {
  struct bwi_regwin *VAR_52;

  VAR_48 = &VAR_45->sc_mac[VAR_50];
  VAR_51 = FUNC_24(VAR_45, &VAR_48->mac_regwin, &VAR_52);
  if (VAR_51)
   goto fail;

  VAR_51 = FUNC_21(VAR_48);
  if (VAR_51)
   goto fail;

  VAR_51 = FUNC_24(VAR_45, VAR_52, ((void*)0));
  if (VAR_51)
   goto fail;
 }





 VAR_48 = &VAR_45->sc_mac[0];
 VAR_49 = &VAR_48->mac_phy;

 FUNC_11(VAR_45);

 VAR_51 = FUNC_14(VAR_45);
 if (VAR_51)
  goto fail;

 VAR_51 = FUNC_20(VAR_48);
 if (VAR_51)
  goto fail;

 FUNC_27(&VAR_45->sc_watchdog_timer, &VAR_45->sc_mtx, 0);




 if (VAR_49->phy_mode == VAR_20 ||
     VAR_49->phy_mode == VAR_21) {
  if (VAR_49->phy_mode == VAR_20) {
   VAR_46->ic_phytype = VAR_23;
  } else {
   VAR_46->ic_phytype = VAR_24;
  }

  FUNC_16(VAR_45, VAR_5, VAR_46->ic_macaddr);
  if (FUNC_4(VAR_46->ic_macaddr)) {
   FUNC_16(VAR_45, VAR_4, VAR_46->ic_macaddr);
   if (FUNC_4(VAR_46->ic_macaddr)) {
    FUNC_31(VAR_47,
        "invalid MAC address: %6D\n",
        VAR_46->ic_macaddr, ":");
   }
  }
 } else if (VAR_49->phy_mode == VAR_19) {

  VAR_51 = VAR_11;
  goto fail;
 } else {
  FUNC_37("unknown phymode %d\n", VAR_49->phy_mode);
 }


 VAR_45->sc_locale = FUNC_9(FUNC_23(VAR_45, VAR_6),
       VAR_7);
 FUNC_3(VAR_45, VAR_1, "locale: %d\n", VAR_45->sc_locale);


 VAR_46->ic_softc = VAR_45;

 FUNC_18(VAR_46, VAR_12, &VAR_46->ic_nchans,
     VAR_46->ic_channels);

 VAR_46->ic_name = FUNC_28(VAR_47);
 VAR_46->ic_caps = VAR_17 |
        VAR_16 |
        VAR_15 |
        VAR_18 |
        VAR_13 |
        VAR_14;
 VAR_46->ic_opmode = VAR_22;
 FUNC_34(VAR_46);

 VAR_46->ic_headroom = sizeof(struct bwi_txbuf_hdr);


 VAR_46->ic_vap_create = VAR_39;
 VAR_46->ic_vap_delete = VAR_40;
 VAR_46->ic_raw_xmit = VAR_32;
 VAR_46->ic_updateslot = VAR_38;
 VAR_46->ic_scan_start = VAR_35;
 VAR_46->ic_scan_end = VAR_34;
 VAR_46->ic_getradiocaps = FUNC_18;
 VAR_46->ic_set_channel = VAR_36;
 VAR_46->ic_transmit = VAR_37;
 VAR_46->ic_parent = VAR_31;

 VAR_45->sc_rates = FUNC_33(VAR_46->ic_curchan);

 FUNC_35(VAR_46,
     &VAR_45->sc_tx_th.wt_ihdr, sizeof(VAR_45->sc_tx_th),
  VAR_8,
     &VAR_45->sc_rx_th.wr_ihdr, sizeof(VAR_45->sc_rx_th),
  VAR_3);




 FUNC_5(FUNC_29(VAR_47),
          FUNC_7(FUNC_30(VAR_47)), VAR_27,
          "fw_version", VAR_9, &VAR_45->sc_fw_version, 0,
          "Firmware version");
 FUNC_5(FUNC_29(VAR_47),
          FUNC_7(FUNC_30(VAR_47)), VAR_27,
          "led_idle", VAR_10, &VAR_45->sc_led_idle, 0,
          "# ticks before LED enters idle state");
 FUNC_5(FUNC_29(VAR_47),
         FUNC_7(FUNC_30(VAR_47)), VAR_27,
         "led_blink", VAR_10, &VAR_45->sc_led_blink, 0,
         "Allow LED to blink");
 FUNC_5(FUNC_29(VAR_47),
         FUNC_7(FUNC_30(VAR_47)), VAR_27,
         "txpwr_calib", VAR_10, &VAR_45->sc_txpwr_calib, 0,
         "Enable software TX power calibration");





 if (VAR_29)
  FUNC_32(VAR_46);

 return (0);
fail:
 FUNC_0(VAR_45);
 return (VAR_51);
}
