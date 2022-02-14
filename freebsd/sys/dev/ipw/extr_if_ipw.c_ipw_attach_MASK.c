
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int wr_ihdr; } ;
struct TYPE_3__ {int wt_ihdr; } ;
struct ieee80211com {int ic_caps; int* ic_macaddr; int ic_parent; int ic_transmit; int ic_vap_delete; int ic_vap_create; int ic_raw_xmit; int ic_scan_mindwell; int ic_scan_curchan; int ic_set_channel; int (* ic_getradiocaps ) (struct ieee80211com*,int ,int *,int ) ;int ic_scan_end; int ic_scan_start; int ic_channels; int ic_nchans; int ic_phytype; int ic_opmode; int ic_name; struct ipw_softc* ic_softc; } ;
struct ipw_softc {int sc_mtx; int * mem; int * irq; int sc_ih; TYPE_2__ sc_rxtap; TYPE_1__ sc_txtap; int flags; int chanmask; int sc_sh; int sc_st; int sc_wdtimer; int sc_init_task; int sc_snd; int sc_dev; struct ieee80211com sc_ic; } ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int ,int ,int ,char*,int,struct ipw_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int *,int ,int ,struct ipw_softc*) ;
 scalar_t__ VAR_28 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int ,int *,int,int *,int ,struct ipw_softc*,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ) ;
 struct ipw_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct ieee80211com*) ;
 int FUNC_14 (struct ieee80211com*) ;
 int FUNC_15 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;
 int VAR_29 ;
 scalar_t__ FUNC_16 (struct ipw_softc*) ;
 int FUNC_17 (struct ieee80211com*,int ,int *,int ) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_18 (struct ipw_softc*) ;
 int FUNC_19 (struct ipw_softc*,scalar_t__) ;
 int FUNC_20 (struct ipw_softc*) ;
 scalar_t__ FUNC_21 (struct ipw_softc*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *,int ,int ,int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int,int ,int) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_44)
{
 struct ipw_softc *VAR_45 = FUNC_9(VAR_44);
 struct ieee80211com *VAR_46 = &VAR_45->sc_ic;
 uint16_t VAR_47;
 int VAR_48, VAR_49;

 VAR_45->sc_dev = VAR_44;

 FUNC_24(&VAR_45->sc_mtx, FUNC_8(VAR_44), VAR_21,
     VAR_20 | VAR_22);
 FUNC_22(&VAR_45->sc_snd, VAR_29);
 FUNC_3(&VAR_45->sc_init_task, 0, VAR_30, VAR_45);
 FUNC_7(&VAR_45->sc_wdtimer, &VAR_45->sc_mtx, 0);

 FUNC_26(VAR_44, 0x41, 0, 1);


 FUNC_25(VAR_44);

 VAR_49 = FUNC_0(0);
 VAR_45->mem = FUNC_4(VAR_44, VAR_27, &VAR_49, VAR_24);
 if (VAR_45->mem == ((void*)0)) {
  FUNC_12(VAR_44, "could not allocate memory resource\n");
  goto fail;
 }

 VAR_45->sc_st = FUNC_28(VAR_45->mem);
 VAR_45->sc_sh = FUNC_27(VAR_45->mem);

 VAR_49 = 0;
 VAR_45->irq = FUNC_4(VAR_44, VAR_26, &VAR_49,
     VAR_24 | VAR_25);
 if (VAR_45->irq == ((void*)0)) {
  FUNC_12(VAR_44, "could not allocate interrupt resource\n");
  goto fail1;
 }

 if (FUNC_21(VAR_45) != 0) {
  FUNC_12(VAR_44, "could not reset adapter\n");
  goto fail2;
 }

 if (FUNC_16(VAR_45) != 0) {
  FUNC_12(VAR_44, "could not allocate DMA resources\n");
  goto fail2;
 }

 VAR_46->ic_softc = VAR_45;
 VAR_46->ic_name = FUNC_8(VAR_44);
 VAR_46->ic_opmode = VAR_11;
 VAR_46->ic_phytype = VAR_12;


 VAR_46->ic_caps =
    VAR_9
  | VAR_5
  | VAR_6
  | VAR_7
  | VAR_8
  | VAR_10
  ;


 VAR_47 = FUNC_19(VAR_45, VAR_15 + 0);
 VAR_46->ic_macaddr[0] = VAR_47 >> 8;
 VAR_46->ic_macaddr[1] = VAR_47 & 0xff;
 VAR_47 = FUNC_19(VAR_45, VAR_15 + 1);
 VAR_46->ic_macaddr[2] = VAR_47 >> 8;
 VAR_46->ic_macaddr[3] = VAR_47 & 0xff;
 VAR_47 = FUNC_19(VAR_45, VAR_15 + 2);
 VAR_46->ic_macaddr[4] = VAR_47 >> 8;
 VAR_46->ic_macaddr[5] = VAR_47 & 0xff;

 VAR_45->chanmask = FUNC_18(VAR_45);
 FUNC_17(VAR_46, VAR_4, &VAR_46->ic_nchans,
     VAR_46->ic_channels);


 if (!(FUNC_19(VAR_45, VAR_16) & 8))
  VAR_45->flags |= VAR_17;

 FUNC_14(VAR_46);
 VAR_46->ic_scan_start = VAR_37;
 VAR_46->ic_scan_end = VAR_35;
 VAR_46->ic_getradiocaps = FUNC_17;
 VAR_46->ic_set_channel = VAR_38;
 VAR_46->ic_scan_curchan = VAR_34;
 VAR_46->ic_scan_mindwell = VAR_36;
 VAR_46->ic_raw_xmit = VAR_33;
 VAR_46->ic_vap_create = VAR_42;
 VAR_46->ic_vap_delete = VAR_43;
 VAR_46->ic_transmit = VAR_41;
 VAR_46->ic_parent = VAR_32;

 FUNC_15(VAR_46,
     &VAR_45->sc_txtap.wt_ihdr, sizeof(VAR_45->sc_txtap),
  VAR_19,
     &VAR_45->sc_rxtap.wr_ihdr, sizeof(VAR_45->sc_rxtap),
  VAR_18);




 FUNC_1(FUNC_10(VAR_44),
     FUNC_2(FUNC_11(VAR_44)), VAR_23, "radio",
     VAR_1 | VAR_0, VAR_45, 0, VAR_39, "I",
     "radio transmitter switch state (0=off, 1=on)");

 FUNC_1(FUNC_10(VAR_44),
     FUNC_2(FUNC_11(VAR_44)), VAR_23, "stats",
     VAR_2 | VAR_0, VAR_45, 0, VAR_40, "S",
     "statistics");




 VAR_48 = FUNC_6(VAR_44, VAR_45->irq, VAR_14 | VAR_13,
     ((void*)0), VAR_31, VAR_45, &VAR_45->sc_ih);
 if (VAR_48 != 0) {
  FUNC_12(VAR_44, "could not set up interrupt\n");
  goto fail3;
 }

 if (VAR_28)
  FUNC_13(VAR_46);

 return 0;
fail3:
 FUNC_20(VAR_45);
fail2:
 FUNC_5(VAR_44, VAR_26, FUNC_29(VAR_45->irq), VAR_45->irq);
fail1:
 FUNC_5(VAR_44, VAR_27, FUNC_29(VAR_45->mem),
     VAR_45->mem);
fail:
 FUNC_23(&VAR_45->sc_mtx);
 return VAR_3;
}
