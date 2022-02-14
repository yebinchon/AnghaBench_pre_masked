
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_attach_arg {int device; } ;
struct TYPE_4__ {int wr_ihdr; } ;
struct TYPE_3__ {int wt_ihdr; } ;
struct ieee80211com {int ic_caps; int ic_vap_delete; int ic_vap_create; int ic_transmit; int ic_parent; int ic_set_channel; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_scan_end; int ic_scan_start; int ic_raw_xmit; int ic_update_promisc; int ic_channels; int ic_nchans; int ic_phytype; int ic_name; struct ural_softc* ic_softc; } ;
struct ural_softc {TYPE_2__ sc_rxtap; TYPE_1__ sc_txtap; int rf_rev; int asic_rev; int sc_mtx; int sc_xfer; int sc_snd; int sc_dev; int sc_udev; struct ieee80211com sc_ic; } ;
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
 int FUNC_0 (struct ural_softc*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct ural_softc*) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct ural_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*) ;
 int FUNC_9 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_20 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int VAR_21 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct ieee80211com*,int ,int *,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_15 (struct ural_softc*,int ) ;
 int FUNC_16 (struct ural_softc*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ,int *,int ,int ,int ,struct ural_softc*,int *) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_31)
{
 struct usb_attach_arg *VAR_32 = FUNC_2(VAR_31);
 struct ural_softc *VAR_33 = FUNC_4(VAR_31);
 struct ieee80211com *VAR_34 = &VAR_33->sc_ic;
 uint8_t VAR_35;
 int VAR_36;

 FUNC_6(VAR_31);
 VAR_33->sc_udev = VAR_32->device;
 VAR_33->sc_dev = VAR_31;

 FUNC_11(&VAR_33->sc_mtx, FUNC_3(VAR_31),
     VAR_13, VAR_12);
 FUNC_10(&VAR_33->sc_snd, VAR_20);

 VAR_35 = VAR_14;
 VAR_36 = FUNC_18(VAR_32->device,
     &VAR_35, VAR_33->sc_xfer, VAR_21,
     VAR_18, VAR_33, &VAR_33->sc_mtx);
 if (VAR_36) {
  FUNC_5(VAR_31, "could not allocate USB transfers, "
      "err=%s\n", FUNC_17(VAR_36));
  goto detach;
 }

 FUNC_0(VAR_33);

 VAR_33->asic_rev = FUNC_15(VAR_33, VAR_15);


 FUNC_16(VAR_33);
 FUNC_1(VAR_33);

 FUNC_5(VAR_31, "MAC/BBP RT2570 (rev 0x%02x), RF %s\n",
     VAR_33->asic_rev, FUNC_13(VAR_33->rf_rev));

 VAR_34->ic_softc = VAR_33;
 VAR_34->ic_name = FUNC_3(VAR_31);
 VAR_34->ic_phytype = VAR_11;


 VAR_34->ic_caps =
       VAR_8
     | VAR_4
     | VAR_5
     | VAR_3
     | VAR_9
     | VAR_6
     | VAR_7
     | VAR_2
     | VAR_10
     ;

 FUNC_14(VAR_34, VAR_1, &VAR_34->ic_nchans,
     VAR_34->ic_channels);

 FUNC_8(VAR_34);
 VAR_34->ic_update_promisc = VAR_28;
 VAR_34->ic_raw_xmit = VAR_23;
 VAR_34->ic_scan_start = VAR_25;
 VAR_34->ic_scan_end = VAR_24;
 VAR_34->ic_getradiocaps = FUNC_14;
 VAR_34->ic_set_channel = VAR_26;
 VAR_34->ic_parent = VAR_22;
 VAR_34->ic_transmit = VAR_27;
 VAR_34->ic_vap_create = VAR_29;
 VAR_34->ic_vap_delete = VAR_30;

 FUNC_9(VAR_34,
     &VAR_33->sc_txtap.wt_ihdr, sizeof(VAR_33->sc_txtap),
  VAR_17,
     &VAR_33->sc_rxtap.wr_ihdr, sizeof(VAR_33->sc_rxtap),
  VAR_16);

 if (VAR_19)
  FUNC_7(VAR_34);

 return (0);

detach:
 FUNC_12(VAR_31);
 return (VAR_0);
}
