
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
struct ieee80211com {int ic_caps; int ic_parent; int ic_transmit; int ic_update_mcast; int ic_vap_delete; int ic_vap_create; int ic_set_channel; int ic_scan_end; int ic_scan_start; int ic_raw_xmit; int ic_opmode; int ic_phytype; int ic_name; struct upgt_softc* ic_softc; } ;
struct upgt_softc {scalar_t__ sc_memaddr_frame_start; scalar_t__ sc_memaddr_frame_end; scalar_t__ sc_memaddr_rx_start; int sc_mtx; int * sc_xfer; TYPE_2__ sc_rxtap; TYPE_1__ sc_txtap; void* sc_tx_dma_buf; void* sc_rx_dma_buf; int sc_snd; int sc_watchdog_ch; int sc_led_ch; int sc_dev; int sc_debug; int sc_udev; struct ieee80211com sc_ic; } ;
typedef int device_t ;
typedef int bands ;


 int FUNC_0 (struct upgt_softc*,int ,char*,scalar_t__) ;
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
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_1 (int *,int ) ;
 struct usb_attach_arg* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct upgt_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*) ;
 int FUNC_9 (struct ieee80211com*,int *,int *) ;
 int FUNC_10 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_23 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (struct upgt_softc*) ;
 int FUNC_17 (struct upgt_softc*) ;
 int FUNC_18 (struct upgt_softc*) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_19 (struct upgt_softc*) ;
 int FUNC_20 (struct upgt_softc*) ;
 int FUNC_21 (struct upgt_softc*) ;
 int FUNC_22 (struct upgt_softc*) ;
 int FUNC_23 (struct upgt_softc*) ;
 int FUNC_24 (struct upgt_softc*) ;
 int FUNC_25 (struct upgt_softc*) ;
 int FUNC_26 (struct upgt_softc*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_27 (struct upgt_softc*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_28 (int) ;
 int FUNC_29 (int ,int *,int *,int ,int ,struct upgt_softc*,int *) ;
 int FUNC_30 (int *,int ) ;
 void* FUNC_31 (int ,int ) ;

__attribute__((used)) static int
FUNC_32(device_t VAR_35)
{
 struct upgt_softc *VAR_36 = FUNC_4(VAR_35);
 struct ieee80211com *VAR_37 = &VAR_36->sc_ic;
 struct usb_attach_arg *VAR_38 = FUNC_2(VAR_35);
 uint8_t VAR_39[VAR_9];
 uint8_t VAR_40 = VAR_17;
 int VAR_41;

 VAR_36->sc_dev = VAR_35;
 VAR_36->sc_udev = VAR_38->device;



 FUNC_6(VAR_35);

 FUNC_14(&VAR_36->sc_mtx, FUNC_3(VAR_36->sc_dev), VAR_13,
     VAR_12);
 FUNC_1(&VAR_36->sc_led_ch, 0);
 FUNC_1(&VAR_36->sc_watchdog_ch, 0);
 FUNC_11(&VAR_36->sc_snd, VAR_23);

 VAR_41 = FUNC_29(VAR_38->device, &VAR_40, VAR_36->sc_xfer,
     VAR_24, VAR_19, VAR_36, &VAR_36->sc_mtx);
 if (VAR_41) {
  FUNC_5(VAR_35, "could not allocate USB transfers, "
      "err=%s\n", FUNC_28(VAR_41));
  goto fail1;
 }

 VAR_36->sc_rx_dma_buf = FUNC_31(
     VAR_36->sc_xfer[VAR_14], 0);
 VAR_36->sc_tx_dma_buf = FUNC_31(
     VAR_36->sc_xfer[VAR_15], 0);


 VAR_41 = FUNC_18(VAR_36);
 if (VAR_41)
  goto fail2;
 VAR_41 = FUNC_17(VAR_36);
 if (VAR_41)
  goto fail3;


 VAR_41 = FUNC_19(VAR_36);
 if (VAR_41)
  goto fail4;

 VAR_41 = FUNC_25(VAR_36);
 if (VAR_41)
  goto fail4;

 if (VAR_36->sc_memaddr_frame_start == 0 || VAR_36->sc_memaddr_frame_end == 0) {
  FUNC_5(VAR_35,
      "could not find memory space addresses on FW\n");
  VAR_41 = VAR_0;
  goto fail4;
 }
 VAR_36->sc_memaddr_frame_end -= VAR_18 + 1;
 VAR_36->sc_memaddr_rx_start = VAR_36->sc_memaddr_frame_end + 1;

 FUNC_0(VAR_36, VAR_16, "memory address frame start=0x%08x\n",
     VAR_36->sc_memaddr_frame_start);
 FUNC_0(VAR_36, VAR_16, "memory address frame end=0x%08x\n",
     VAR_36->sc_memaddr_frame_end);
 FUNC_0(VAR_36, VAR_16, "memory address rx start=0x%08x\n",
     VAR_36->sc_memaddr_rx_start);

 FUNC_26(VAR_36);


 VAR_41 = FUNC_24(VAR_36);
 if (VAR_41)
  goto fail4;


 VAR_41 = FUNC_21(VAR_36);
 if (VAR_41)
  goto fail4;
 VAR_41 = FUNC_20(VAR_36);
 if (VAR_41)
  goto fail4;


 FUNC_16(VAR_36);

 VAR_37->ic_softc = VAR_36;
 VAR_37->ic_name = FUNC_3(VAR_35);
 VAR_37->ic_phytype = VAR_11;
 VAR_37->ic_opmode = VAR_10;

 VAR_37->ic_caps =
    VAR_5
  | VAR_2
  | VAR_3
         | VAR_4
  | VAR_1
         | VAR_6
  ;

 FUNC_12(VAR_39, 0, sizeof(VAR_39));
 FUNC_15(VAR_39, VAR_7);
 FUNC_15(VAR_39, VAR_8);
 FUNC_9(VAR_37, ((void*)0), VAR_39);

 FUNC_8(VAR_37);
 VAR_37->ic_raw_xmit = VAR_27;
 VAR_37->ic_scan_start = VAR_29;
 VAR_37->ic_scan_end = VAR_28;
 VAR_37->ic_set_channel = VAR_30;
 VAR_37->ic_vap_create = VAR_33;
 VAR_37->ic_vap_delete = VAR_34;
 VAR_37->ic_update_mcast = VAR_32;
 VAR_37->ic_transmit = VAR_31;
 VAR_37->ic_parent = VAR_26;

 FUNC_10(VAR_37,
     &VAR_36->sc_txtap.wt_ihdr, sizeof(VAR_36->sc_txtap),
  VAR_21,
     &VAR_36->sc_rxtap.wr_ihdr, sizeof(VAR_36->sc_rxtap),
  VAR_20);

 FUNC_27(VAR_36);

 if (VAR_22)
  FUNC_7(VAR_37);

 return (0);

fail4: FUNC_22(VAR_36);
fail3: FUNC_23(VAR_36);
fail2: FUNC_30(VAR_36->sc_xfer, VAR_19);
fail1: FUNC_13(&VAR_36->sc_mtx);

 return (VAR_41);
}
