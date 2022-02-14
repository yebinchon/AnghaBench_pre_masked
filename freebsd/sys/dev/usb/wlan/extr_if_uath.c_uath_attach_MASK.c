
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
struct usb_attach_arg {int device; } ;
struct TYPE_6__ {int wr_ihdr; } ;
struct TYPE_5__ {int wt_ihdr; } ;
struct TYPE_4__ {int analog5GhzRevision; int regDomain; } ;
struct ieee80211com {int ic_caps; int ic_parent; int ic_transmit; int ic_update_promisc; int ic_update_mcast; int ic_vap_delete; int ic_vap_create; int ic_set_channel; int ic_scan_end; int ic_scan_start; int ic_raw_xmit; int ic_opmode; int ic_phytype; int ic_name; struct uath_softc* ic_softc; int ic_macaddr; } ;
struct uath_softc {int * sc_xfer; int sc_cmd; TYPE_3__ sc_rxtap; TYPE_2__ sc_txtap; TYPE_1__ sc_devcap; int sc_dev; void* sc_tx_dma_buf; void* sc_cmd_dma_buf; int sc_mtx; int sc_snd; int watchdog_ch; int stat_ch; int sc_debug; int sc_udev; struct ieee80211com sc_ic; } ;
typedef int device_t ;
typedef int bands ;


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
 size_t VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 int FUNC_0 (struct uath_softc*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct uath_softc*) ;
 scalar_t__ VAR_22 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 struct usb_attach_arg* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct uath_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211com*) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*,int *,int *) ;
 int FUNC_12 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_23 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (struct uath_softc*,int ) ;
 scalar_t__ FUNC_18 (struct uath_softc*) ;
 scalar_t__ FUNC_19 (struct uath_softc*) ;
 int VAR_24 ;
 int FUNC_20 (struct uath_softc*,int ) ;
 scalar_t__ FUNC_21 (struct uath_softc*) ;
 scalar_t__ FUNC_22 (struct uath_softc*,int ) ;
 scalar_t__ FUNC_23 (struct uath_softc*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_24 (struct uath_softc*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_25 (scalar_t__) ;
 scalar_t__ FUNC_26 (int ,int *,int *,int ,int ,struct uath_softc*,int *) ;
 int FUNC_27 (int *,int ) ;
 void* FUNC_28 (int ,int ) ;

__attribute__((used)) static int
FUNC_29(device_t VAR_37)
{
 struct uath_softc *VAR_38 = FUNC_6(VAR_37);
 struct usb_attach_arg *VAR_39 = FUNC_4(VAR_37);
 struct ieee80211com *VAR_40 = &VAR_38->sc_ic;
 uint8_t VAR_41[VAR_11];
 uint8_t VAR_42 = VAR_17;
 usb_error_t VAR_43;

 VAR_38->sc_dev = VAR_37;
 VAR_38->sc_udev = VAR_39->device;



 FUNC_8(VAR_37);




 FUNC_15(&VAR_38->sc_mtx, FUNC_5(VAR_38->sc_dev), VAR_15,
     VAR_14);
 FUNC_2(&VAR_38->stat_ch, 0);
 FUNC_3(&VAR_38->watchdog_ch, &VAR_38->sc_mtx, 0);
 FUNC_13(&VAR_38->sc_snd, VAR_23);

 VAR_43 = FUNC_26(VAR_39->device, &VAR_42, VAR_38->sc_xfer,
     VAR_34, VAR_19, VAR_38, &VAR_38->sc_mtx);
 if (VAR_43) {
  FUNC_7(VAR_37, "could not allocate USB transfers, "
      "err=%s\n", FUNC_25(VAR_43));
  goto fail;
 }

 VAR_38->sc_cmd_dma_buf =
     FUNC_28(VAR_38->sc_xfer[VAR_18], 0);
 VAR_38->sc_tx_dma_buf =
     FUNC_28(VAR_38->sc_xfer[VAR_16], 0);




 VAR_43 = FUNC_17(VAR_38, VAR_38->sc_cmd);
 if (VAR_43 != 0) {
  FUNC_7(VAR_38->sc_dev,
      "could not allocate Tx command list\n");
  goto fail1;
 }




 FUNC_0(VAR_38);
 VAR_43 = FUNC_23(VAR_38);
 if (VAR_43 != 0) {
  FUNC_7(VAR_38->sc_dev, "could not initialize adapter\n");
  goto fail2;
 }
 VAR_43 = FUNC_21(VAR_38);
 if (VAR_43 != 0) {
  FUNC_7(VAR_38->sc_dev,
      "could not get device capabilities\n");
  goto fail2;
 }
 FUNC_1(VAR_38);


 FUNC_24(VAR_38);

 FUNC_0(VAR_38);
 VAR_43 = FUNC_22(VAR_38, VAR_40->ic_macaddr);
 if (VAR_43 != 0) {
  FUNC_7(VAR_38->sc_dev, "could not get device status\n");
  goto fail2;
 }




 VAR_43 = FUNC_18(VAR_38);
 if (VAR_43 != 0) {
  FUNC_7(VAR_38->sc_dev, "could not allocate Rx data list\n");
  goto fail2;
 }
 VAR_43 = FUNC_19(VAR_38);
 if (VAR_43 != 0) {
  FUNC_7(VAR_38->sc_dev, "could not allocate Tx data list\n");
  goto fail2;
 }
 FUNC_1(VAR_38);

 VAR_40->ic_softc = VAR_38;
 VAR_40->ic_name = FUNC_5(VAR_37);
 VAR_40->ic_phytype = VAR_13;
 VAR_40->ic_opmode = VAR_12;


 VAR_40->ic_caps =
     VAR_4 |
     VAR_1 |
     VAR_6 |
     VAR_2 |
     VAR_3 |
     VAR_7 |
     VAR_0 |
     VAR_5;


 VAR_27 = VAR_38->sc_devcap.regDomain;

 FUNC_14(VAR_41, 0, sizeof(VAR_41));
 FUNC_16(VAR_41, VAR_9);
 FUNC_16(VAR_41, VAR_10);
 if ((VAR_38->sc_devcap.analog5GhzRevision & 0xf0) == 0x30)
  FUNC_16(VAR_41, VAR_8);

 FUNC_11(VAR_40, ((void*)0), VAR_41);

 FUNC_10(VAR_40);
 VAR_40->ic_raw_xmit = VAR_26;
 VAR_40->ic_scan_start = VAR_29;
 VAR_40->ic_scan_end = VAR_28;
 VAR_40->ic_set_channel = VAR_30;
 VAR_40->ic_vap_create = VAR_35;
 VAR_40->ic_vap_delete = VAR_36;
 VAR_40->ic_update_mcast = VAR_32;
 VAR_40->ic_update_promisc = VAR_33;
 VAR_40->ic_transmit = VAR_31;
 VAR_40->ic_parent = VAR_25;

 FUNC_12(VAR_40,
     &VAR_38->sc_txtap.wt_ihdr, sizeof(VAR_38->sc_txtap),
  VAR_21,
     &VAR_38->sc_rxtap.wr_ihdr, sizeof(VAR_38->sc_rxtap),
  VAR_20);

 if (VAR_22)
  FUNC_9(VAR_40);

 return (0);

fail2: FUNC_1(VAR_38);
 FUNC_20(VAR_38, VAR_38->sc_cmd);
fail1: FUNC_27(VAR_38->sc_xfer, VAR_19);
fail:
 return (VAR_43);
}
