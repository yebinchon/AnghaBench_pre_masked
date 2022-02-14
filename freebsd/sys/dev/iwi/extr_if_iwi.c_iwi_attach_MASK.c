
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int wr_ihdr; } ;
struct TYPE_5__ {int wt_ihdr; } ;
struct TYPE_4__ {int wme_update; } ;
struct ieee80211com {int ic_caps; int* ic_macaddr; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_parent; int ic_transmit; int ic_ioctl; int ic_vap_delete; int ic_vap_create; TYPE_1__ ic_wme; int ic_scan_mindwell; int ic_scan_curchan; int ic_set_channel; int ic_scan_end; int ic_scan_start; int ic_raw_xmit; int ic_node_free; int ic_node_alloc; int ic_channels; int ic_nchans; int ic_phytype; int ic_opmode; int ic_name; struct iwi_softc* ic_softc; } ;
struct iwi_softc {int sc_ih; int * irq; TYPE_3__ sc_rxtap; TYPE_2__ sc_txtap; int sc_node_free; int rxq; int * txq; int cmdq; int * mem; int sc_sh; int sc_st; int sc_mtx; int sc_rftimer; int sc_wdtimer; int sc_monitortask; int sc_disassoctask; int sc_restarttask; int sc_radiofftask; int sc_radiontask; int sc_unr; int sc_snd; int sc_ledevent; int sc_dev; struct ieee80211com sc_ic; } ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct iwi_softc*) ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int *,int ,int ,struct iwi_softc*) ;
 scalar_t__ VAR_27 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct iwi_softc*,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ) ;
 struct iwi_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (struct ieee80211com*) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_28 ;
 scalar_t__ FUNC_12 (struct iwi_softc*,int *,int ) ;
 scalar_t__ FUNC_13 (struct iwi_softc*,int *,int ) ;
 int FUNC_14 (struct iwi_softc*,int *,int ,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ) ;
 int VAR_29 ;
 int FUNC_16 (struct ieee80211com*,int ,int *,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_17 (struct iwi_softc*) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_18 (struct iwi_softc*,scalar_t__) ;
 scalar_t__ FUNC_19 (struct iwi_softc*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_20 (struct iwi_softc*) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_21 (struct iwi_softc*) ;
 int VAR_48 ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int,scalar_t__,int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int,int ,int) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int VAR_49 ;

__attribute__((used)) static int
FUNC_28(device_t VAR_50)
{
 struct iwi_softc *VAR_51 = FUNC_7(VAR_50);
 struct ieee80211com *VAR_52 = &VAR_51->sc_ic;
 uint16_t VAR_53;
 int VAR_54, VAR_55;

 VAR_51->sc_dev = VAR_50;
 VAR_51->sc_ledevent = VAR_49;

 FUNC_0(VAR_51);
 FUNC_22(&VAR_51->sc_snd, VAR_28);

 VAR_51->sc_unr = FUNC_23(1, VAR_18-1, &VAR_51->sc_mtx);

 FUNC_2(&VAR_51->sc_radiontask, 0, VAR_37, VAR_51);
 FUNC_2(&VAR_51->sc_radiofftask, 0, VAR_36, VAR_51);
 FUNC_2(&VAR_51->sc_restarttask, 0, VAR_39, VAR_51);
 FUNC_2(&VAR_51->sc_disassoctask, 0, VAR_29, VAR_51);
 FUNC_2(&VAR_51->sc_monitortask, 0, VAR_32, VAR_51);

 FUNC_5(&VAR_51->sc_wdtimer, &VAR_51->sc_mtx, 0);
 FUNC_5(&VAR_51->sc_rftimer, &VAR_51->sc_mtx, 0);

 FUNC_25(VAR_50, 0x41, 0, 1);


 FUNC_24(VAR_50);

 VAR_54 = FUNC_1(0);
 VAR_51->mem = FUNC_3(VAR_50, VAR_26, &VAR_54, VAR_23);
 if (VAR_51->mem == ((void*)0)) {
  FUNC_8(VAR_50, "could not allocate memory resource\n");
  goto fail;
 }

 VAR_51->sc_st = FUNC_27(VAR_51->mem);
 VAR_51->sc_sh = FUNC_26(VAR_51->mem);

 VAR_54 = 0;
 VAR_51->irq = FUNC_3(VAR_50, VAR_25, &VAR_54,
     VAR_23 | VAR_24);
 if (VAR_51->irq == ((void*)0)) {
  FUNC_8(VAR_50, "could not allocate interrupt resource\n");
  goto fail;
 }

 if (FUNC_19(VAR_51) != 0) {
  FUNC_8(VAR_50, "could not reset adapter\n");
  goto fail;
 }




 if (FUNC_12(VAR_51, &VAR_51->cmdq, VAR_14) != 0) {
  FUNC_8(VAR_50, "could not allocate Cmd ring\n");
  goto fail;
 }

 for (VAR_54 = 0; VAR_54 < 4; VAR_54++) {
  VAR_55 = FUNC_14(VAR_51, &VAR_51->txq[VAR_54], VAR_22,
      VAR_15 + VAR_54 * 4,
      VAR_16 + VAR_54 * 4);
  if (VAR_55 != 0) {
   FUNC_8(VAR_50, "could not allocate Tx ring %d\n",
    VAR_54+VAR_54);
   goto fail;
  }
 }

 if (FUNC_13(VAR_51, &VAR_51->rxq, VAR_20) != 0) {
  FUNC_8(VAR_50, "could not allocate Rx ring\n");
  goto fail;
 }

 FUNC_21(VAR_51);

 VAR_52->ic_softc = VAR_51;
 VAR_52->ic_name = FUNC_6(VAR_50);
 VAR_52->ic_opmode = VAR_10;
 VAR_52->ic_phytype = VAR_11;


 VAR_52->ic_caps =
       VAR_7
     | VAR_3
     | VAR_4
     | VAR_5
     | VAR_6
     | VAR_9
     | VAR_8



     ;


 VAR_53 = FUNC_18(VAR_51, VAR_17 + 0);
 VAR_52->ic_macaddr[0] = VAR_53 & 0xff;
 VAR_52->ic_macaddr[1] = VAR_53 >> 8;
 VAR_53 = FUNC_18(VAR_51, VAR_17 + 1);
 VAR_52->ic_macaddr[2] = VAR_53 & 0xff;
 VAR_52->ic_macaddr[3] = VAR_53 >> 8;
 VAR_53 = FUNC_18(VAR_51, VAR_17 + 2);
 VAR_52->ic_macaddr[4] = VAR_53 & 0xff;
 VAR_52->ic_macaddr[5] = VAR_53 >> 8;

 FUNC_16(VAR_52, VAR_1, &VAR_52->ic_nchans,
     VAR_52->ic_channels);

 FUNC_10(VAR_52);

 VAR_52->ic_node_alloc = VAR_33;
 VAR_51->sc_node_free = VAR_52->ic_node_free;
 VAR_52->ic_node_free = VAR_34;
 VAR_52->ic_raw_xmit = VAR_38;
 VAR_52->ic_scan_start = VAR_43;
 VAR_52->ic_scan_end = VAR_41;
 VAR_52->ic_set_channel = VAR_44;
 VAR_52->ic_scan_curchan = VAR_40;
 VAR_52->ic_scan_mindwell = VAR_42;
 VAR_52->ic_wme.wme_update = VAR_48;

 VAR_52->ic_vap_create = VAR_46;
 VAR_52->ic_vap_delete = VAR_47;
 VAR_52->ic_ioctl = VAR_31;
 VAR_52->ic_transmit = VAR_45;
 VAR_52->ic_parent = VAR_35;
 VAR_52->ic_getradiocaps = FUNC_16;

 FUNC_11(VAR_52,
     &VAR_51->sc_txtap.wt_ihdr, sizeof(VAR_51->sc_txtap),
  VAR_21,
     &VAR_51->sc_rxtap.wr_ihdr, sizeof(VAR_51->sc_rxtap),
  VAR_19);

 FUNC_20(VAR_51);
 FUNC_17(VAR_51);




 VAR_55 = FUNC_4(VAR_50, VAR_51->irq, VAR_13 | VAR_12,
     ((void*)0), VAR_30, VAR_51, &VAR_51->sc_ih);
 if (VAR_55 != 0) {
  FUNC_8(VAR_50, "could not set up interrupt\n");
  goto fail;
 }

 if (VAR_27)
  FUNC_9(VAR_52);

 return 0;
fail:

 FUNC_15(VAR_50);
 return VAR_0;
}
