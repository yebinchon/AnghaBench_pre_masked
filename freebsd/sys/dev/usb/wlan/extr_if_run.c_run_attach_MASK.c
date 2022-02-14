
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct usb_attach_arg {int device; } ;
struct TYPE_6__ {int wr_ihdr; } ;
struct TYPE_5__ {int wt_ihdr; } ;
struct TYPE_4__ {int wme_update; } ;
struct ieee80211com {int ic_caps; int ic_cryptocaps; int ic_parent; int ic_transmit; int ic_vap_delete; int ic_vap_create; int ic_update_promisc; int ic_raw_xmit; TYPE_1__ ic_wme; int ic_update_mcast; int ic_updateslot; int ic_newassoc; int ic_node_alloc; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_set_channel; int ic_scan_end; int ic_scan_start; int ic_channels; int ic_nchans; int ic_flags_ext; int ic_flags; int ic_opmode; int ic_phytype; int ic_name; struct run_softc* ic_softc; int ic_macaddr; } ;
struct run_softc {int mac_ver; int mac_rev; int sc_mtx; int ratectl_ch; int ratectl_task; int cmdq_task; TYPE_3__ sc_rxtap; TYPE_2__ sc_txtap; int nrxchains; int ntxchains; int rf_rev; int sc_dev; int sc_xfer; int sc_snd; int sc_flags; int sc_udev; struct ieee80211com sc_ic; } ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct run_softc*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (struct run_softc*) ;
 int FUNC_2 (int *,int ,int ,struct run_softc*) ;
 scalar_t__ FUNC_3 (struct usb_attach_arg*) ;
 scalar_t__ VAR_29 ;
 struct usb_attach_arg* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct run_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*) ;
 int FUNC_12 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_30 ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_15 (struct run_softc*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct ieee80211com*,int ,int *,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ FUNC_19 (struct run_softc*,int ,int*) ;
 int FUNC_20 (struct run_softc*) ;
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
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ,int *,int ,int ,int ,struct run_softc*,int *) ;

__attribute__((used)) static int
FUNC_24(device_t VAR_48)
{
 struct run_softc *VAR_49 = FUNC_6(VAR_48);
 struct usb_attach_arg *VAR_50 = FUNC_4(VAR_48);
 struct ieee80211com *VAR_51 = &VAR_49->sc_ic;
 uint32_t VAR_52;
 uint8_t VAR_53;
 int VAR_54, VAR_55;

 FUNC_8(VAR_48);
 VAR_49->sc_udev = VAR_50->device;
 VAR_49->sc_dev = VAR_48;
 if (FUNC_3(VAR_50) != VAR_24)
  VAR_49->sc_flags |= VAR_25;

 FUNC_14(&VAR_49->sc_mtx, FUNC_5(VAR_49->sc_dev),
     VAR_21, VAR_20);
 FUNC_13(&VAR_49->sc_snd, VAR_30);

 VAR_53 = VAR_23;

 VAR_55 = FUNC_23(VAR_50->device, &VAR_53,
     VAR_49->sc_xfer, VAR_32, VAR_26, VAR_49, &VAR_49->sc_mtx);
 if (VAR_55) {
  FUNC_7(VAR_48, "could not allocate USB transfers, "
      "err=%s\n", FUNC_22(VAR_55));
  goto detach;
 }

 FUNC_0(VAR_49);


 for (VAR_54 = 0; VAR_54 < 100; VAR_54++) {
  if (FUNC_19(VAR_49, VAR_22, &VAR_52) != 0) {
   FUNC_1(VAR_49);
   goto detach;
  }
  if (VAR_52 != 0 && VAR_52 != 0xffffffff)
   break;
  FUNC_15(VAR_49, 10);
 }
 if (VAR_54 == 100) {
  FUNC_7(VAR_49->sc_dev,
      "timeout waiting for NIC to initialize\n");
  FUNC_1(VAR_49);
  goto detach;
 }
 VAR_49->mac_ver = VAR_52 >> 16;
 VAR_49->mac_rev = VAR_52 & 0xffff;


 FUNC_20(VAR_49);

 FUNC_7(VAR_49->sc_dev,
     "MAC/BBP RT%04X (rev 0x%04X), RF %s (MIMO %dT%dR), address %s\n",
     VAR_49->mac_ver, VAR_49->mac_rev, FUNC_17(VAR_49->rf_rev),
     VAR_49->ntxchains, VAR_49->nrxchains, FUNC_9(VAR_51->ic_macaddr));

 FUNC_1(VAR_49);

 VAR_51->ic_softc = VAR_49;
 VAR_51->ic_name = FUNC_5(VAR_48);
 VAR_51->ic_phytype = VAR_19;
 VAR_51->ic_opmode = VAR_18;


 VAR_51->ic_caps =
     VAR_12 |
     VAR_9 |
     VAR_7 |
     VAR_6 |
     VAR_13 |
     VAR_8 |
     VAR_10 |
     VAR_11 |
     VAR_14 |
     VAR_15;

 VAR_51->ic_cryptocaps =
     VAR_5 |
     VAR_2 |
     VAR_4 |
     VAR_3;

 VAR_51->ic_flags |= VAR_17;
 VAR_51->ic_flags_ext |= VAR_16;

 FUNC_18(VAR_51, VAR_1, &VAR_51->ic_nchans,
     VAR_51->ic_channels);

 FUNC_11(VAR_51);

 VAR_51->ic_scan_start = VAR_39;
 VAR_51->ic_scan_end = VAR_38;
 VAR_51->ic_set_channel = VAR_40;
 VAR_51->ic_getradiocaps = FUNC_18;
 VAR_51->ic_node_alloc = VAR_34;
 VAR_51->ic_newassoc = VAR_33;
 VAR_51->ic_updateslot = VAR_44;
 VAR_51->ic_update_mcast = VAR_42;
 VAR_51->ic_wme.wme_update = VAR_47;
 VAR_51->ic_raw_xmit = VAR_37;
 VAR_51->ic_update_promisc = VAR_43;
 VAR_51->ic_vap_create = VAR_45;
 VAR_51->ic_vap_delete = VAR_46;
 VAR_51->ic_transmit = VAR_41;
 VAR_51->ic_parent = VAR_35;

 FUNC_12(VAR_51,
     &VAR_49->sc_txtap.wt_ihdr, sizeof(VAR_49->sc_txtap),
  VAR_28,
     &VAR_49->sc_rxtap.wr_ihdr, sizeof(VAR_49->sc_rxtap),
  VAR_27);

 FUNC_2(&VAR_49->cmdq_task, 0, VAR_31, VAR_49);
 FUNC_2(&VAR_49->ratectl_task, 0, VAR_36, VAR_49);
 FUNC_21(&VAR_49->ratectl_ch, &VAR_49->sc_mtx, 0);

 if (VAR_29)
  FUNC_10(VAR_51);

 return (0);

detach:
 FUNC_16(VAR_48);
 return (VAR_0);
}
