
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int wr_ihdr; } ;
struct TYPE_5__ {int wt_ihdr; } ;
struct TYPE_4__ {int wme_update; } ;
struct ieee80211com {int ic_caps; int ic_vap_delete; int ic_vap_create; int ic_parent; int ic_transmit; int ic_raw_xmit; int ic_update_promisc; int ic_updateslot; int ic_set_channel; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_scan_end; int ic_scan_start; TYPE_1__ ic_wme; int ic_channels; int ic_nchans; int ic_phytype; int ic_opmode; int ic_name; struct rt2661_softc* ic_softc; int ic_macaddr; } ;
struct rt2661_softc {int sc_id; int sc_mtx; int * txq; int mgtq; int sc_debug; TYPE_3__ sc_rxtap; TYPE_2__ sc_txtap; int sc_dev; int rxq; int rf_rev; int sc_snd; int watchdog_ch; struct ieee80211com sc_ic; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct rt2661_softc*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_28 ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int ) ;
 struct rt2661_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*) ;
 int FUNC_12 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_29 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ,int) ;
 int FUNC_16 (struct rt2661_softc*,int *,int ) ;
 int FUNC_17 (struct rt2661_softc*,int *,int ) ;
 int FUNC_18 (struct rt2661_softc*,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (struct ieee80211com*,int ,int *,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_21 (struct rt2661_softc*,int ) ;
 int VAR_32 ;
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
 struct rt2661_softc *VAR_43 = FUNC_6(VAR_41);
 struct ieee80211com *VAR_44 = &VAR_43->sc_ic;
 uint32_t VAR_45;
 int VAR_46, VAR_47, VAR_48;

 VAR_43->sc_id = VAR_42;
 VAR_43->sc_dev = VAR_41;

 FUNC_15(&VAR_43->sc_mtx, FUNC_5(VAR_41), VAR_19,
     VAR_18 | VAR_20);

 FUNC_4(&VAR_43->watchdog_ch, &VAR_43->sc_mtx, 0);
 FUNC_13(&VAR_43->sc_snd, VAR_29);


 for (VAR_48 = 0; VAR_48 < 1000; VAR_48++) {
  if ((VAR_45 = FUNC_1(VAR_43, VAR_22)) != 0)
   break;
  FUNC_0(1000);
 }
 if (VAR_48 == 1000) {
  FUNC_9(VAR_43->sc_dev,
      "timeout waiting for NIC to initialize\n");
  VAR_46 = VAR_1;
  goto fail1;
 }


 FUNC_21(VAR_43, VAR_44->ic_macaddr);

 FUNC_9(VAR_41, "MAC/BBP RT%X, RF %s\n", VAR_45,
     FUNC_19(VAR_43->rf_rev));




 for (VAR_47 = 0; VAR_47 < 4; VAR_47++) {
  VAR_46 = FUNC_17(VAR_43, &VAR_43->txq[VAR_47],
      VAR_27);
  if (VAR_46 != 0) {
   FUNC_9(VAR_43->sc_dev,
       "could not allocate Tx ring %d\n", VAR_47);
   goto fail2;
  }
 }

 VAR_46 = FUNC_17(VAR_43, &VAR_43->mgtq, VAR_23);
 if (VAR_46 != 0) {
  FUNC_9(VAR_43->sc_dev, "could not allocate Mgt ring\n");
  goto fail2;
 }

 VAR_46 = FUNC_16(VAR_43, &VAR_43->rxq, VAR_25);
 if (VAR_46 != 0) {
  FUNC_9(VAR_43->sc_dev, "could not allocate Rx ring\n");
  goto fail3;
 }

 VAR_44->ic_softc = VAR_43;
 VAR_44->ic_name = FUNC_5(VAR_41);
 VAR_44->ic_opmode = VAR_16;
 VAR_44->ic_phytype = VAR_17;


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
  | VAR_15
  | VAR_4




  ;

 FUNC_20(VAR_44, VAR_2, &VAR_44->ic_nchans,
     VAR_44->ic_channels);

 FUNC_11(VAR_44);



 VAR_44->ic_scan_start = VAR_33;
 VAR_44->ic_scan_end = VAR_32;
 VAR_44->ic_getradiocaps = FUNC_20;
 VAR_44->ic_set_channel = VAR_34;
 VAR_44->ic_updateslot = VAR_37;
 VAR_44->ic_update_promisc = VAR_36;
 VAR_44->ic_raw_xmit = VAR_31;
 VAR_44->ic_transmit = VAR_35;
 VAR_44->ic_parent = VAR_30;
 VAR_44->ic_vap_create = VAR_38;
 VAR_44->ic_vap_delete = VAR_39;

 FUNC_12(VAR_44,
     &VAR_43->sc_txtap.wt_ihdr, sizeof(VAR_43->sc_txtap),
  VAR_26,
     &VAR_43->sc_rxtap.wr_ihdr, sizeof(VAR_43->sc_rxtap),
  VAR_24);






 if (VAR_28)
  FUNC_10(VAR_44);

 return 0;

fail3: FUNC_18(VAR_43, &VAR_43->mgtq);
fail2: while (--VAR_47 >= 0)
  FUNC_18(VAR_43, &VAR_43->txq[VAR_47]);
fail1: FUNC_14(&VAR_43->sc_mtx);
 return VAR_46;
}
