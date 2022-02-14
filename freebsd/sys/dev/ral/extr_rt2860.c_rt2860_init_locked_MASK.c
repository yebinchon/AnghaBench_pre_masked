
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_7__ {int paddr; } ;
struct ieee80211com {int ic_curchan; int ic_macaddr; int ic_vaps; } ;
struct rt2860_softc {int* txpow20mhz; int mac_ver; int sc_flags; scalar_t__ rf_rev; int* led; int nrxchains; int ntxchains; int pslevel; int watchdog_ch; TYPE_3__* bbp; int sc_dev; TYPE_2__ rxq; TYPE_1__* txq; scalar_t__ rfswitch; struct ieee80211com sc_ic; } ;
struct rt2860_rxwi {int dummy; } ;
struct ieee80211vap {int iv_myaddr; } ;
struct TYPE_9__ {int val; int reg; } ;
struct TYPE_8__ {int reg; int val; } ;
struct TYPE_6__ {int paddr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rt2860_softc*) ;
 int FUNC_2 (struct rt2860_softc*) ;
 int FUNC_3 (struct rt2860_softc*,int ) ;
 int FUNC_4 (struct rt2860_softc*,int ,int ,int) ;
 int FUNC_5 (struct rt2860_softc*,int ,int) ;
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
 int FUNC_6 (int ) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_7 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
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
 int FUNC_8 (int ,int ) ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 struct ieee80211vap* FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ,struct rt2860_softc*) ;
 int FUNC_17 (int ,char*) ;
 int VAR_59 ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (struct rt2860_softc*) ;
 TYPE_4__* VAR_60 ;
 int FUNC_20 (struct rt2860_softc*) ;
 int FUNC_21 (struct rt2860_softc*,int) ;
 int FUNC_22 (struct rt2860_softc*,int,int) ;
 int FUNC_23 (struct rt2860_softc*,int ,int,int) ;
 int FUNC_24 (struct rt2860_softc*,int ) ;
 int FUNC_25 (struct rt2860_softc*,int ) ;
 int FUNC_26 (struct rt2860_softc*) ;
 int FUNC_27 (struct rt2860_softc*,int ) ;
 int FUNC_28 (struct rt2860_softc*) ;
 int FUNC_29 (struct rt2860_softc*) ;
 int VAR_61 ;
 int FUNC_30 (struct rt2860_softc*) ;
 int FUNC_31 (struct rt2860_softc*) ;
 int FUNC_32 (struct rt2860_softc*) ;
 int FUNC_33 (struct rt2860_softc*,int ) ;
 int FUNC_34 (struct rt2860_softc*) ;
 int FUNC_35 (struct rt2860_softc*) ;

__attribute__((used)) static void
FUNC_36(struct rt2860_softc *VAR_62)
{
 struct ieee80211com *VAR_63 = &VAR_62->sc_ic;
 struct ieee80211vap *VAR_64 = FUNC_15(&VAR_63->ic_vaps);
 uint32_t VAR_65;
 uint8_t VAR_66, VAR_67;
 int VAR_68, VAR_69, VAR_70, VAR_71, VAR_72;

 FUNC_2(VAR_62);

 if (VAR_62->rfswitch) {

  if (!(FUNC_3(VAR_62, VAR_6) & (1 << 2))) {
   FUNC_17(VAR_62->sc_dev,
       "radio is disabled by hardware switch\n");




  }
 }
 FUNC_5(VAR_62, VAR_28, VAR_11);


 VAR_65 = FUNC_3(VAR_62, VAR_54);
 VAR_65 &= ~(VAR_39 | VAR_40 | VAR_46 |
     VAR_47);
 VAR_65 |= VAR_52;
 FUNC_5(VAR_62, VAR_54, VAR_65);


 FUNC_5(VAR_62, VAR_55, VAR_29 |
     VAR_35 | VAR_34 | VAR_33 |
     VAR_32 | VAR_31 | VAR_30);


 FUNC_5(VAR_62, VAR_45, 0xe1f);
 FUNC_1(VAR_62);
 FUNC_5(VAR_62, VAR_45, 0xe00);

 if ((VAR_72 = FUNC_20(VAR_62)) != 0) {
  FUNC_17(VAR_62->sc_dev, "could not load 8051 microcode\n");
  FUNC_26(VAR_62);
  return;
 }

 FUNC_25(VAR_62, VAR_64 ? VAR_64->iv_myaddr : VAR_63->ic_macaddr);


 for (VAR_70 = 0; VAR_70 < 5; VAR_70++) {
  if (VAR_62->txpow20mhz[VAR_70] == 0xffffffff)
   continue;
  FUNC_5(VAR_62, FUNC_12(VAR_70), VAR_62->txpow20mhz[VAR_70]);
 }

 for (VAR_71 = 0; VAR_71 < 100; VAR_71++) {
  VAR_65 = FUNC_3(VAR_62, VAR_54);
  if ((VAR_65 & (VAR_46 | VAR_39)) == 0)
   break;
  FUNC_0(1000);
 }
 if (VAR_71 == 100) {
  FUNC_17(VAR_62->sc_dev, "timeout waiting for DMA engine\n");
  FUNC_26(VAR_62);
  return;
 }
 VAR_65 &= ~(VAR_39 | VAR_40 | VAR_46 |
     VAR_47);
 VAR_65 |= VAR_52;
 FUNC_5(VAR_62, VAR_54, VAR_65);


 FUNC_5(VAR_62, VAR_55, 0x1003f);


 FUNC_5(VAR_62, VAR_45, 0xe1f);
 FUNC_1(VAR_62);
 FUNC_5(VAR_62, VAR_45, 0xe00);

 FUNC_5(VAR_62, VAR_28, VAR_11 | VAR_12);

 FUNC_5(VAR_62, VAR_16, VAR_3 | VAR_14);
 FUNC_1(VAR_62);
 FUNC_5(VAR_62, VAR_16, 0);

 for (VAR_68 = 0; VAR_68 < FUNC_18(VAR_60); VAR_68++)
  FUNC_5(VAR_62, VAR_60[VAR_68].reg, VAR_60[VAR_68].val);
 if (VAR_62->mac_ver >= 0x5390)
  FUNC_5(VAR_62, VAR_51, 0x00000404);
 else if (VAR_62->mac_ver >= 0x3071) {

  FUNC_5(VAR_62, VAR_51,
      4 << VAR_5);
 }

 if (!(FUNC_3(VAR_62, VAR_26) & VAR_27)) {
  VAR_62->sc_flags |= VAR_25;

  VAR_65 = FUNC_3(VAR_62, VAR_53);
  VAR_65 = (VAR_65 & ~0xff) | 0x7d;
  FUNC_5(VAR_62, VAR_53, VAR_65);
 }


 for (VAR_71 = 0; VAR_71 < 100; VAR_71++) {
  if (!(FUNC_3(VAR_62, VAR_15) &
      (VAR_43 | VAR_50)))
   break;
  FUNC_0(1000);
 }
 if (VAR_71 == 100) {
  FUNC_17(VAR_62->sc_dev, "timeout waiting for MAC\n");
  FUNC_26(VAR_62);
  return;
 }


 FUNC_5(VAR_62, VAR_7, 0);
 FUNC_5(VAR_62, VAR_8, 0);

 FUNC_23(VAR_62, VAR_22, 0, 0);
 FUNC_0(1000);

 if ((VAR_72 = FUNC_19(VAR_62)) != 0) {
  FUNC_26(VAR_62);
  return;
 }


 FUNC_4(VAR_62, FUNC_14(0), 0, 512);

 FUNC_4(VAR_62, FUNC_7(0), 0, 2048);

 FUNC_4(VAR_62, FUNC_6(0), 0, 512);

 FUNC_4(VAR_62, FUNC_13(0), 0, 256);

 FUNC_4(VAR_62, FUNC_8(0, 0), 0, 8 * 32);

 FUNC_4(VAR_62, VAR_44, 0, 4);


 for (VAR_69 = 0; VAR_69 < 6; VAR_69++) {
  FUNC_5(VAR_62, FUNC_9(VAR_69), VAR_62->txq[VAR_69].paddr);
  FUNC_5(VAR_62, FUNC_11(VAR_69), VAR_48);
  FUNC_5(VAR_62, FUNC_10(VAR_69), 0);
 }


 FUNC_5(VAR_62, VAR_37, VAR_62->rxq.paddr);
 FUNC_5(VAR_62, VAR_41, VAR_42);
 FUNC_5(VAR_62, VAR_38, VAR_42 - 1);


 FUNC_5(VAR_62, VAR_17, 1 << 12 |
     (VAR_1 - sizeof (struct rt2860_rxwi) - 2));

 for (VAR_71 = 0; VAR_71 < 100; VAR_71++) {
  VAR_65 = FUNC_3(VAR_62, VAR_54);
  if ((VAR_65 & (VAR_46 | VAR_39)) == 0)
   break;
  FUNC_0(1000);
 }
 if (VAR_71 == 100) {
  FUNC_17(VAR_62->sc_dev, "timeout waiting for DMA engine\n");
  FUNC_26(VAR_62);
  return;
 }
 VAR_65 &= ~(VAR_39 | VAR_40 | VAR_46 |
     VAR_47);
 VAR_65 |= VAR_52;
 FUNC_5(VAR_62, VAR_54, VAR_65);


 FUNC_5(VAR_62, VAR_4, 0);


 for (VAR_68 = 0; VAR_68 < 8; VAR_68++) {
  if (VAR_62->bbp[VAR_68].reg == 0 || VAR_62->bbp[VAR_68].reg == 0xff)
   continue;
  FUNC_22(VAR_62, VAR_62->bbp[VAR_68].reg, VAR_62->bbp[VAR_68].val);
 }


 if (VAR_62->rf_rev == VAR_56 ||
     VAR_62->rf_rev == VAR_57 ||
     VAR_62->rf_rev == VAR_58 ||
     VAR_62->mac_ver == 0x5390)
  FUNC_33(VAR_62, 0);


 FUNC_23(VAR_62, VAR_18, VAR_62->led[0], 0);
 FUNC_23(VAR_62, VAR_19, VAR_62->led[1], 0);
 FUNC_23(VAR_62, VAR_20, VAR_62->led[2], 0);

 if (VAR_62->mac_ver >= 0x5390)
  FUNC_34(VAR_62);
 else if (VAR_62->mac_ver >= 0x3071) {
  if ((VAR_72 = FUNC_30(VAR_62)) != 0) {
   FUNC_26(VAR_62);
   return;
  }
 }

 FUNC_23(VAR_62, VAR_23, 0x02ff, 1);
 FUNC_23(VAR_62, VAR_24, 0, 1);

 if (VAR_62->mac_ver >= 0x5390)
  FUNC_35(VAR_62);
 else if (VAR_62->mac_ver >= 0x3071)
  FUNC_32(VAR_62);


 VAR_67 = FUNC_21(VAR_62, 3);
 VAR_67 &= ~(1 << 3 | 1 << 4);
 if (VAR_62->nrxchains == 2)
  VAR_67 |= 1 << 3;
 else if (VAR_62->nrxchains == 3)
  VAR_67 |= 1 << 4;
 FUNC_22(VAR_62, 3, VAR_67);


 VAR_66 = FUNC_21(VAR_62, 1);
 if (VAR_62->ntxchains == 1)
  VAR_66 = (VAR_66 & ~(1 << 3 | 1 << 4));
 else if (VAR_62->mac_ver == 0x3593 && VAR_62->ntxchains == 2)
  VAR_66 = (VAR_66 & ~(1 << 4)) | 1 << 3;
 else if (VAR_62->mac_ver == 0x3593 && VAR_62->ntxchains == 3)
  VAR_66 = (VAR_66 & ~(1 << 3)) | 1 << 4;
 FUNC_22(VAR_62, 1, VAR_66);

 if (VAR_62->mac_ver >= 0x3071)
  FUNC_31(VAR_62);


 FUNC_27(VAR_62, VAR_63->ic_curchan);


 FUNC_23(VAR_62, VAR_22, 0, 0);


 VAR_65 = FUNC_3(VAR_62, VAR_49);
 VAR_65 &= ~0xffff00;
 VAR_65 |= VAR_0 << 8;
 FUNC_5(VAR_62, VAR_49, VAR_65);


 FUNC_29(VAR_62);


 FUNC_24(VAR_62, VAR_13);


 if ((VAR_72 = FUNC_28(VAR_62)) != 0) {
  FUNC_26(VAR_62);
  return;
 }


 FUNC_5(VAR_62, VAR_10, 0xffffffff);

 FUNC_5(VAR_62, VAR_9, 0x3fffc);

 if (VAR_62->sc_flags & VAR_2)
  FUNC_23(VAR_62, VAR_21, VAR_62->pslevel, 0);

 VAR_62->sc_flags |= VAR_36;

 FUNC_16(&VAR_62->watchdog_ch, VAR_59, VAR_61, VAR_62);
}
