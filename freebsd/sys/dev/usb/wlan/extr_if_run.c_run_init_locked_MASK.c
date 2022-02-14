
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211com {int ic_nrunning; int ic_curchan; int ic_macaddr; int ic_vaps; } ;
struct run_softc {int* txpow20mhz; int mac_ver; scalar_t__ cmdq_key_set; int mac_rev; scalar_t__ rf_rev; int nrxchains; int ntxchains; int * sc_xfer; scalar_t__ cmdq_run; int sc_flags; int * led; TYPE_1__* bbp; int sc_dev; int * sc_epq; struct ieee80211com sc_ic; } ;
struct ieee80211vap {int iv_myaddr; } ;
struct TYPE_5__ {int val; int reg; } ;
struct TYPE_4__ {int reg; int val; } ;


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
 int FUNC_0 (int ,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 size_t VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 struct ieee80211vap* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_2__* VAR_41 ;
 scalar_t__ FUNC_7 (struct run_softc*) ;
 int FUNC_8 (struct run_softc*,int,int*) ;
 int FUNC_9 (struct run_softc*,int,int) ;
 int FUNC_10 (struct run_softc*,int) ;
 int FUNC_11 (struct run_softc*) ;
 scalar_t__ FUNC_12 (struct run_softc*) ;
 int FUNC_13 (struct run_softc*,int ,int ) ;
 scalar_t__ FUNC_14 (struct run_softc*,int ,int*) ;
 scalar_t__ FUNC_15 (struct run_softc*) ;
 int FUNC_16 (struct run_softc*) ;
 int FUNC_17 (struct run_softc*) ;
 int FUNC_18 (struct run_softc*) ;
 int FUNC_19 (struct run_softc*) ;
 int FUNC_20 (struct run_softc*) ;
 int FUNC_21 (struct run_softc*) ;
 int FUNC_22 (struct run_softc*,int ) ;
 int FUNC_23 (struct run_softc*,int ) ;
 int FUNC_24 (struct run_softc*,int ) ;
 int FUNC_25 (struct run_softc*,int ,int ,int) ;
 int FUNC_26 (struct run_softc*,int ) ;
 int FUNC_27 (struct run_softc*,int *) ;
 int FUNC_28 (struct run_softc*) ;
 scalar_t__ FUNC_29 (struct run_softc*) ;
 int FUNC_30 (struct ieee80211com*) ;
 int FUNC_31 (struct run_softc*,int ,int) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;

__attribute__((used)) static void
FUNC_34(struct run_softc *VAR_42)
{
 struct ieee80211com *VAR_43 = &VAR_42->sc_ic;
 struct ieee80211vap *VAR_44 = FUNC_4(&VAR_43->ic_vaps);
 uint32_t VAR_45;
 uint8_t VAR_46, VAR_47;
 int VAR_48;
 int VAR_49;
 int VAR_50;

 if (VAR_43->ic_nrunning > 1)
  return;

 FUNC_28(VAR_42);

 if (FUNC_12(VAR_42) != 0) {
  FUNC_5(VAR_42->sc_dev, "could not load 8051 microcode\n");
  goto fail;
 }

 for (VAR_50 = 0; VAR_50 < 100; VAR_50++) {
  if (FUNC_14(VAR_42, VAR_0, &VAR_45) != 0)
   goto fail;
  if (VAR_45 != 0 && VAR_45 != 0xffffffff)
   break;
  FUNC_10(VAR_42, 10);
 }
 if (VAR_50 == 100)
  goto fail;

 for (VAR_48 = 0; VAR_48 != VAR_38; VAR_48++)
  FUNC_27(VAR_42, &VAR_42->sc_epq[VAR_48]);

 FUNC_24(VAR_42, VAR_44 ? VAR_44->iv_myaddr : VAR_43->ic_macaddr);

 for (VAR_50 = 0; VAR_50 < 100; VAR_50++) {
  if (FUNC_14(VAR_42, VAR_33, &VAR_45) != 0)
   goto fail;
  if ((VAR_45 & (VAR_22 | VAR_16)) == 0)
   break;
  FUNC_10(VAR_42, 10);
 }
 if (VAR_50 == 100) {
  FUNC_5(VAR_42->sc_dev, "timeout waiting for DMA engine\n");
  goto fail;
 }
 VAR_45 &= 0xff0;
 VAR_45 |= VAR_25;
 FUNC_31(VAR_42, VAR_33, VAR_45);


 FUNC_14(VAR_42, VAR_19, &VAR_45);
 FUNC_31(VAR_42, VAR_19, VAR_45 & ~VAR_15);

 FUNC_31(VAR_42, VAR_10,
     VAR_1 | VAR_8);
 FUNC_31(VAR_42, VAR_26, 0);

 if (FUNC_15(VAR_42) != 0) {
  FUNC_5(VAR_42->sc_dev, "could not reset chipset\n");
  goto fail;
 }

 FUNC_31(VAR_42, VAR_10, 0);


 for (VAR_49 = 0; VAR_49 < 5; VAR_49++) {
  if (VAR_42->txpow20mhz[VAR_49] == 0xffffffff)
   continue;
  FUNC_31(VAR_42, FUNC_1(VAR_49), VAR_42->txpow20mhz[VAR_49]);
 }

 for (VAR_48 = 0; VAR_48 < FUNC_6(VAR_41); VAR_48++)
  FUNC_31(VAR_42, VAR_41[VAR_48].reg, VAR_41[VAR_48].val);
 FUNC_31(VAR_42, VAR_28, 0x00002273);
 FUNC_31(VAR_42, VAR_30, 0x00002344);
 FUNC_31(VAR_42, VAR_29, 0x000034aa);

 if (VAR_42->mac_ver >= 0x5390) {
  FUNC_31(VAR_42, VAR_24,
      4 << VAR_2 | 4);
  if (VAR_42->mac_ver >= 0x5392) {
   FUNC_31(VAR_42, VAR_11, 0x00002fff);
   if (VAR_42->mac_ver == 0x5592) {
    FUNC_31(VAR_42, VAR_5, 0xedcba980);
    FUNC_31(VAR_42, VAR_21, 0x00000082);
   } else {
    FUNC_31(VAR_42, VAR_5, 0xedcb4980);
    FUNC_31(VAR_42, VAR_7, 0xedcba322);
   }
  }
 } else if (VAR_42->mac_ver == 0x3593) {
  FUNC_31(VAR_42, VAR_24,
      4 << VAR_2 | 2);
 } else if (VAR_42->mac_ver >= 0x3070) {

  FUNC_31(VAR_42, VAR_24,
      4 << VAR_2);
 }


 for (VAR_50 = 0; VAR_50 < 100; VAR_50++) {
  if (FUNC_14(VAR_42, VAR_9, &VAR_45) != 0)
   goto fail;
  if (!(VAR_45 & (VAR_17 | VAR_23)))
   break;
  FUNC_10(VAR_42, 10);
 }
 if (VAR_50 == 100)
  goto fail;


 FUNC_31(VAR_42, VAR_3, 0);
 FUNC_31(VAR_42, VAR_4, 0);
 FUNC_10(VAR_42, 10);

 if (FUNC_7(VAR_42) != 0) {
  FUNC_5(VAR_42->sc_dev, "could not initialize BBP\n");
  goto fail;
 }


 FUNC_11(VAR_42);


 FUNC_25(VAR_42, FUNC_3(0), 0, 512);

 FUNC_25(VAR_42, FUNC_2(0), 0, 8 * 32);


 if (VAR_42->cmdq_key_set != VAR_37) {

  FUNC_25(VAR_42, FUNC_0(0, 0), 0, 8 * 32);

  FUNC_25(VAR_42, VAR_18, 0, 4);
 }

 FUNC_14(VAR_42, VAR_27, &VAR_45);
 VAR_45 = (VAR_45 & ~0xff) | 0x1e;
 FUNC_31(VAR_42, VAR_27, VAR_45);

 if (VAR_42->mac_rev != 0x0101)
  FUNC_31(VAR_42, VAR_20, 0x0000583f);

 FUNC_31(VAR_42, VAR_31, 0);
 FUNC_31(VAR_42, VAR_32, 48 << 16 | 96);


 if (VAR_42->mac_ver < 0x3593) {
  for (VAR_48 = 0; VAR_48 < 10; VAR_48++) {
   if (VAR_42->bbp[VAR_48].reg == 0 || VAR_42->bbp[VAR_48].reg == 0xff)
    continue;
   FUNC_9(VAR_42, VAR_42->bbp[VAR_48].reg, VAR_42->bbp[VAR_48].val);
  }
 }


 if (VAR_42->rf_rev == VAR_34 || VAR_42->rf_rev == VAR_35)
  FUNC_26(VAR_42, 0);


 (void)FUNC_13(VAR_42, VAR_12, VAR_42->led[0]);
 (void)FUNC_13(VAR_42, VAR_13, VAR_42->led[1]);
 (void)FUNC_13(VAR_42, VAR_14, VAR_42->led[2]);

 if (VAR_42->mac_ver >= 0x5390)
  FUNC_20(VAR_42);
 else if (VAR_42->mac_ver == 0x3593)
  FUNC_18(VAR_42);
 else if (VAR_42->mac_ver >= 0x3070)
  FUNC_16(VAR_42);


 FUNC_8(VAR_42, 3, &VAR_47);
 VAR_47 &= ~(1 << 3 | 1 << 4);
 if (VAR_42->nrxchains == 2)
  VAR_47 |= 1 << 3;
 else if (VAR_42->nrxchains == 3)
  VAR_47 |= 1 << 4;
 FUNC_9(VAR_42, 3, VAR_47);


 FUNC_8(VAR_42, 1, &VAR_46);
 if (VAR_42->ntxchains == 1)
  VAR_46 &= ~(1 << 3 | 1 << 4);
 FUNC_9(VAR_42, 1, VAR_46);

 if (VAR_42->mac_ver >= 0x5390)
  FUNC_21(VAR_42);
 else if (VAR_42->mac_ver == 0x3593)
  FUNC_19(VAR_42);
 else if (VAR_42->mac_ver >= 0x3070)
  FUNC_17(VAR_42);


 FUNC_22(VAR_42, VAR_43->ic_curchan);


 FUNC_30(VAR_43);


 FUNC_23(VAR_42, VAR_6);

 VAR_42->sc_flags |= VAR_40;
 VAR_42->cmdq_run = VAR_37;

 for (VAR_48 = 0; VAR_48 != VAR_39; VAR_48++)
  FUNC_33(VAR_42->sc_xfer[VAR_48]);

 FUNC_32(VAR_42->sc_xfer[VAR_36]);

 if (FUNC_29(VAR_42) != 0)
  goto fail;

 return;

fail:
 FUNC_28(VAR_42);
}
