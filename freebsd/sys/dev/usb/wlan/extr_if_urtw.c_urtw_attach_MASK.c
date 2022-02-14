
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ usb_error_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct usb_config {int dummy; } ;
struct usb_attach_arg {int device; } ;
struct TYPE_4__ {int wr_ihdr; } ;
struct TYPE_3__ {int wt_ihdr; } ;
struct ieee80211com {int ic_caps; int ic_transmit; int ic_parent; int ic_update_mcast; int ic_update_promisc; int ic_vap_delete; int ic_vap_create; int ic_updateslot; int ic_set_channel; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_scan_end; int ic_scan_start; int ic_raw_xmit; int ic_channels; int ic_nchans; int ic_opmode; int ic_phytype; int ic_name; struct urtw_softc* ic_softc; } ;
struct urtw_softc {int sc_flags; int * sc_xfer; TYPE_2__ sc_rxtap; TYPE_1__ sc_txtap; int sc_preamble_mode; int sc_currate; int sc_tx_retry; int sc_rts_retry; int sc_epromtype; void* sc_tx_dma_buf; int sc_mtx; int sc_snd; int sc_watchdog_ch; int sc_updateslot_task; int sc_led_task; int sc_led_ch; int sc_dev; int sc_debug; int sc_udev; struct ieee80211com sc_ic; } ;
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
 int FUNC_0 (int *,int ,int ,struct urtw_softc*) ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct urtw_softc*) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (struct urtw_softc*) ;
 scalar_t__ FUNC_3 (struct usb_attach_arg*) ;
 scalar_t__ VAR_29 ;
 int FUNC_4 (int *,int ) ;
 struct usb_attach_arg* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct urtw_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*) ;
 int FUNC_12 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_30 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 struct usb_config* VAR_31 ;
 struct usb_config* VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_15 (struct urtw_softc*) ;
 scalar_t__ FUNC_16 (struct urtw_softc*) ;
 scalar_t__ FUNC_17 (struct urtw_softc*) ;
 int FUNC_18 (struct ieee80211com*,int ,int *,int ) ;
 scalar_t__ FUNC_19 (struct urtw_softc*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_20 (struct urtw_softc*,int ,int*) ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_21 (struct urtw_softc*) ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_22 (int *,int *,int ) ;
 int FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (int ,int *,int *,struct usb_config const*,int ,struct urtw_softc*,int *) ;
 int FUNC_25 (int *,int ) ;
 void* FUNC_26 (int ,int ) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_48)
{
 const struct usb_config *VAR_49;
 int VAR_50 = VAR_0;
 struct urtw_softc *VAR_51 = FUNC_7(VAR_48);
 struct usb_attach_arg *VAR_52 = FUNC_5(VAR_48);
 struct ieee80211com *VAR_53 = &VAR_51->sc_ic;
 uint8_t VAR_54 = VAR_21;
 uint16_t VAR_55;
 uint32_t VAR_56;
 usb_error_t VAR_57;

 FUNC_9(VAR_48);

 VAR_51->sc_dev = VAR_48;
 VAR_51->sc_udev = VAR_52->device;
 if (FUNC_3(VAR_52) == VAR_22)
  VAR_51->sc_flags |= VAR_24;




 FUNC_14(&VAR_51->sc_mtx, FUNC_6(VAR_51->sc_dev), VAR_12,
     VAR_11);
 FUNC_22(&VAR_51->sc_led_ch, &VAR_51->sc_mtx, 0);
 FUNC_0(&VAR_51->sc_led_task, 0, VAR_34, VAR_51);
 FUNC_0(&VAR_51->sc_updateslot_task, 0, VAR_45, VAR_51);
 FUNC_4(&VAR_51->sc_watchdog_ch, 0);
 FUNC_13(&VAR_51->sc_snd, VAR_30);

 if (VAR_51->sc_flags & VAR_24) {
  VAR_49 = VAR_31;
  VAR_55 = VAR_14;
 } else {
  VAR_49 = VAR_32;
  VAR_55 = VAR_16;
 }

 VAR_57 = FUNC_24(VAR_52->device, &VAR_54, VAR_51->sc_xfer,
     VAR_49, VAR_55, VAR_51, &VAR_51->sc_mtx);
 if (VAR_57) {
  FUNC_8(VAR_48, "could not allocate USB transfers, "
      "err=%s\n", FUNC_23(VAR_57));
  VAR_50 = VAR_0;
  goto fail0;
 }

 if (VAR_51->sc_flags & VAR_24) {
  VAR_51->sc_tx_dma_buf =
      FUNC_26(VAR_51->sc_xfer[
      VAR_13], 0);
 } else {
  VAR_51->sc_tx_dma_buf =
      FUNC_26(VAR_51->sc_xfer[
      VAR_15], 0);
 }

 FUNC_1(VAR_51);

 FUNC_20(VAR_51, VAR_25, &VAR_56);
 VAR_51->sc_epromtype = (VAR_56 & VAR_26) ? VAR_20 :
     VAR_19;

 VAR_57 = FUNC_16(VAR_51);
 if (VAR_57 != 0)
  goto fail;
 VAR_57 = FUNC_15(VAR_51);
 if (VAR_57 != 0)
  goto fail;
 VAR_57 = FUNC_17(VAR_51);
 if (VAR_57 != 0)
  goto fail;
 VAR_57 = FUNC_19(VAR_51);
 if (VAR_57 != 0)
  goto fail;

 FUNC_2(VAR_51);

 VAR_51->sc_rts_retry = VAR_17;
 VAR_51->sc_tx_retry = VAR_18;
 VAR_51->sc_currate = VAR_23;
 VAR_51->sc_preamble_mode = VAR_36;

 VAR_53->ic_softc = VAR_51;
 VAR_53->ic_name = FUNC_6(VAR_48);
 VAR_53->ic_phytype = VAR_10;
 VAR_53->ic_opmode = VAR_9;


 VAR_53->ic_caps =
     VAR_6 |
     VAR_3 |
     VAR_7 |
     VAR_4 |
     VAR_5 |
     VAR_2 |
     VAR_8;



 FUNC_18(VAR_53, VAR_1, &VAR_53->ic_nchans,
     VAR_53->ic_channels);

 FUNC_11(VAR_53);
 VAR_53->ic_raw_xmit = VAR_37;
 VAR_53->ic_scan_start = VAR_39;
 VAR_53->ic_scan_end = VAR_38;
 VAR_53->ic_getradiocaps = FUNC_18;
 VAR_53->ic_set_channel = VAR_40;
 VAR_53->ic_updateslot = VAR_44;
 VAR_53->ic_vap_create = VAR_46;
 VAR_53->ic_vap_delete = VAR_47;
 VAR_53->ic_update_promisc = VAR_43;
 VAR_53->ic_update_mcast = VAR_42;
 VAR_53->ic_parent = VAR_35;
 VAR_53->ic_transmit = VAR_41;

 FUNC_12(VAR_53,
     &VAR_51->sc_txtap.wt_ihdr, sizeof(VAR_51->sc_txtap),
     VAR_28,
     &VAR_51->sc_rxtap.wr_ihdr, sizeof(VAR_51->sc_rxtap),
     VAR_27);

 FUNC_21(VAR_51);

 if (VAR_29)
  FUNC_10(VAR_53);
 return (0);

fail:
 FUNC_2(VAR_51);
 FUNC_25(VAR_51->sc_xfer, (VAR_51->sc_flags & VAR_24) ?
     VAR_14 : VAR_16);
fail0:
 return (VAR_50);
}
