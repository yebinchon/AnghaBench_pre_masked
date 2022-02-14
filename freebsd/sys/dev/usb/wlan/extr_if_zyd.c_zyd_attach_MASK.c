
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int wr_ihdr; } ;
struct TYPE_5__ {int wt_ihdr; } ;
struct ieee80211com {int ic_caps; int ic_transmit; int ic_parent; void* ic_update_promisc; void* ic_update_mcast; int ic_vap_delete; int ic_vap_create; int ic_set_channel; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_scan_end; int ic_scan_start; int ic_raw_xmit; int ic_channels; int ic_nchans; int ic_opmode; int ic_phytype; int ic_name; struct zyd_softc* ic_softc; } ;
struct zyd_softc {TYPE_3__ sc_rxtap; TYPE_2__ sc_txtap; int sc_dev; int sc_mtx; int sc_xfer; int sc_snd; int sc_rqh; int sc_macrev; int sc_udev; struct ieee80211com sc_ic; } ;
struct TYPE_4__ {int bcdDevice; } ;
struct usb_attach_arg {int device; TYPE_1__ info; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (struct usb_attach_arg*) ;
 int VAR_13 ;
 int FUNC_2 (struct zyd_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct zyd_softc*) ;
 scalar_t__ VAR_17 ;
 struct usb_attach_arg* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct zyd_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211com*) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_18 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int *,int ,int ,int ,struct zyd_softc*,int *) ;
 int VAR_19 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct zyd_softc*) ;
 int FUNC_18 (struct ieee80211com*,int ,int *,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static int
FUNC_19(device_t VAR_29)
{
 struct usb_attach_arg *VAR_30 = FUNC_4(VAR_29);
 struct zyd_softc *VAR_31 = FUNC_6(VAR_29);
 struct ieee80211com *VAR_32 = &VAR_31->sc_ic;
 uint8_t VAR_33;
 int VAR_34;

 if (VAR_30->info.bcdDevice < 0x4330) {
  FUNC_7(VAR_29, "device version mismatch: 0x%X "
      "(only >= 43.30 supported)\n",
      VAR_30->info.bcdDevice);
  return (VAR_0);
 }

 FUNC_8(VAR_29);
 VAR_31->sc_dev = VAR_29;
 VAR_31->sc_udev = VAR_30->device;
 VAR_31->sc_macrev = FUNC_1(VAR_30);

 FUNC_13(&VAR_31->sc_mtx, FUNC_5(VAR_31->sc_dev),
     VAR_12, VAR_11);
 FUNC_0(&VAR_31->sc_rqh);
 FUNC_12(&VAR_31->sc_snd, VAR_18);

 VAR_33 = VAR_13;
 VAR_34 = FUNC_15(VAR_30->device,
     &VAR_33, VAR_31->sc_xfer, VAR_19,
     VAR_14, VAR_31, &VAR_31->sc_mtx);
 if (VAR_34) {
  FUNC_7(VAR_29, "could not allocate USB transfers, "
      "err=%s\n", FUNC_14(VAR_34));
  goto detach;
 }

 FUNC_2(VAR_31);
 if ((VAR_34 = FUNC_17(VAR_31)) != 0) {
  FUNC_7(VAR_31->sc_dev, "could not read EEPROM\n");
  FUNC_3(VAR_31);
  goto detach;
 }
 FUNC_3(VAR_31);

 VAR_32->ic_softc = VAR_31;
 VAR_32->ic_name = FUNC_5(VAR_29);
 VAR_32->ic_phytype = VAR_10;
 VAR_32->ic_opmode = VAR_9;


 VAR_32->ic_caps =
    VAR_7
  | VAR_4
  | VAR_5
         | VAR_6
  | VAR_3
         | VAR_8
  ;

 FUNC_18(VAR_32, VAR_2, &VAR_32->ic_nchans,
     VAR_32->ic_channels);

 FUNC_10(VAR_32);
 VAR_32->ic_raw_xmit = VAR_21;
 VAR_32->ic_scan_start = VAR_23;
 VAR_32->ic_scan_end = VAR_22;
 VAR_32->ic_getradiocaps = FUNC_18;
 VAR_32->ic_set_channel = VAR_24;
 VAR_32->ic_vap_create = VAR_27;
 VAR_32->ic_vap_delete = VAR_28;
 VAR_32->ic_update_mcast = VAR_26;
 VAR_32->ic_update_promisc = VAR_26;
 VAR_32->ic_parent = VAR_20;
 VAR_32->ic_transmit = VAR_25;

 FUNC_11(VAR_32,
     &VAR_31->sc_txtap.wt_ihdr, sizeof(VAR_31->sc_txtap),
  VAR_16,
     &VAR_31->sc_rxtap.wr_ihdr, sizeof(VAR_31->sc_rxtap),
  VAR_15);

 if (VAR_17)
  FUNC_9(VAR_32);

 return (0);

detach:
 FUNC_16(VAR_29);
 return (VAR_1);
}
