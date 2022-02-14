
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wr_ihdr; } ;
struct TYPE_3__ {int wt_ihdr; } ;
struct ieee80211com {int ic_caps; int ic_transmit; int ic_parent; int ic_vap_delete; int ic_vap_create; int ic_set_channel; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_scan_end; int ic_scan_start; int ic_update_promisc; int ic_updateslot; int ic_raw_xmit; int ic_channels; int ic_nchans; int ic_phytype; int ic_opmode; int ic_name; struct rt2560_softc* ic_softc; int ic_macaddr; } ;
struct rt2560_softc {int sc_mtx; int txq; int atimq; int prioq; int bcnq; int rx_ant; int tx_ant; int sc_debug; TYPE_2__ sc_rxtap; TYPE_1__ sc_txtap; int sc_dev; int rxq; int rf_rev; int asic_rev; int sc_snd; int watchdog_ch; struct ieee80211com sc_ic; } ;
typedef int device_t ;


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
 int FUNC_0 (struct rt2560_softc*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_29 ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ) ;
 struct rt2560_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct ieee80211com*) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_30 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ,int) ;
 int FUNC_15 (struct rt2560_softc*,int *,int ) ;
 int FUNC_16 (struct rt2560_softc*,int *,int ) ;
 int FUNC_17 (struct rt2560_softc*,int *) ;
 int FUNC_18 (struct rt2560_softc*,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct ieee80211com*,int ,int *,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_21 (struct rt2560_softc*) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;

int
FUNC_22(device_t VAR_41, int VAR_42)
{
 struct rt2560_softc *VAR_43 = FUNC_5(VAR_41);
 struct ieee80211com *VAR_44 = &VAR_43->sc_ic;
 int VAR_45;

 VAR_43->sc_dev = VAR_41;

 FUNC_14(&VAR_43->sc_mtx, FUNC_4(VAR_41), VAR_18,
     VAR_17 | VAR_19);

 FUNC_3(&VAR_43->watchdog_ch, &VAR_43->sc_mtx, 0);
 FUNC_12(&VAR_43->sc_snd, VAR_30);


 VAR_43->asic_rev = FUNC_0(VAR_43, VAR_23);


 FUNC_21(VAR_43);

 FUNC_8(VAR_41, "MAC/BBP RT2560 (rev 0x%02x), RF %s\n",
     VAR_43->asic_rev, FUNC_19(VAR_43->rf_rev));




 VAR_45 = FUNC_16(VAR_43, &VAR_43->txq, VAR_28);
 if (VAR_45 != 0) {
  FUNC_8(VAR_43->sc_dev, "could not allocate Tx ring\n");
  goto fail1;
 }

 VAR_45 = FUNC_16(VAR_43, &VAR_43->atimq, VAR_21);
 if (VAR_45 != 0) {
  FUNC_8(VAR_43->sc_dev, "could not allocate ATIM ring\n");
  goto fail2;
 }

 VAR_45 = FUNC_16(VAR_43, &VAR_43->prioq, VAR_24);
 if (VAR_45 != 0) {
  FUNC_8(VAR_43->sc_dev, "could not allocate Prio ring\n");
  goto fail3;
 }

 VAR_45 = FUNC_16(VAR_43, &VAR_43->bcnq, VAR_22);
 if (VAR_45 != 0) {
  FUNC_8(VAR_43->sc_dev, "could not allocate Beacon ring\n");
  goto fail4;
 }

 VAR_45 = FUNC_15(VAR_43, &VAR_43->rxq, VAR_26);
 if (VAR_45 != 0) {
  FUNC_8(VAR_43->sc_dev, "could not allocate Rx ring\n");
  goto fail5;
 }


 FUNC_18(VAR_43, VAR_44->ic_macaddr);

 VAR_44->ic_softc = VAR_43;
 VAR_44->ic_name = FUNC_4(VAR_41);
 VAR_44->ic_opmode = VAR_15;
 VAR_44->ic_phytype = VAR_16;


 VAR_44->ic_caps =
    VAR_11
  | VAR_6
  | VAR_5
  | VAR_8
  | VAR_3
  | VAR_13
  | VAR_7
  | VAR_9
  | VAR_10
  | VAR_14
  | VAR_4



  ;

 FUNC_20(VAR_44, VAR_2, &VAR_44->ic_nchans,
     VAR_44->ic_channels);

 FUNC_10(VAR_44);
 VAR_44->ic_raw_xmit = VAR_32;
 VAR_44->ic_updateslot = VAR_38;
 VAR_44->ic_update_promisc = VAR_37;
 VAR_44->ic_scan_start = VAR_34;
 VAR_44->ic_scan_end = VAR_33;
 VAR_44->ic_getradiocaps = FUNC_20;
 VAR_44->ic_set_channel = VAR_35;

 VAR_44->ic_vap_create = VAR_39;
 VAR_44->ic_vap_delete = VAR_40;
 VAR_44->ic_parent = VAR_31;
 VAR_44->ic_transmit = VAR_36;

 FUNC_11(VAR_44,
     &VAR_43->sc_txtap.wt_ihdr, sizeof(VAR_43->sc_txtap),
  VAR_27,
     &VAR_43->sc_rxtap.wr_ihdr, sizeof(VAR_43->sc_rxtap),
  VAR_25);
 FUNC_1(FUNC_6(VAR_41),
     FUNC_2(FUNC_7(VAR_41)), VAR_20,
     "txantenna", VAR_0, &VAR_43->tx_ant, 0, "tx antenna (0=auto)");

 FUNC_1(FUNC_6(VAR_41),
     FUNC_2(FUNC_7(VAR_41)), VAR_20,
     "rxantenna", VAR_0, &VAR_43->rx_ant, 0, "rx antenna (0=auto)");

 if (VAR_29)
  FUNC_9(VAR_44);

 return 0;

fail5: FUNC_17(VAR_43, &VAR_43->bcnq);
fail4: FUNC_17(VAR_43, &VAR_43->prioq);
fail3: FUNC_17(VAR_43, &VAR_43->atimq);
fail2: FUNC_17(VAR_43, &VAR_43->txq);
fail1: FUNC_13(&VAR_43->sc_mtx);

 return VAR_1;
}
