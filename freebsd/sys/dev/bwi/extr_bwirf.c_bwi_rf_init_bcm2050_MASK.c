
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwi_softc {int sc_card_flags; } ;
struct bwi_rf {int rf_rev; int rf_calib; int rf_curchan; int rf_flags; } ;
struct bwi_phy {scalar_t__ phy_mode; int phy_flags; int phy_rev; int phy_version; } ;
struct bwi_mac {struct bwi_rf mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bwi_softc*,int ,int) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (struct bwi_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bwi_softc*,int,char*,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (struct bwi_mac*,int,int) ;
 int FUNC_7 (struct bwi_mac*,int,int,int) ;
 int FUNC_8 (struct bwi_mac*,int const) ;
 int FUNC_9 (struct bwi_mac*,int,int) ;
 int FUNC_10 (struct bwi_mac*,int const,int) ;
 int FUNC_11 (struct bwi_mac*,int,int,int) ;
 int FUNC_12 (struct bwi_mac*,int const) ;
 int FUNC_13 (struct bwi_mac*,int,int) ;
 int FUNC_14 (struct bwi_mac*,int const,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct bwi_mac*,int) ;
 int FUNC_17 (struct bwi_mac*) ;
 int FUNC_18 (struct bwi_mac*,int ) ;

void
FUNC_19(struct bwi_mac *VAR_13)
{




 static const uint16_t VAR_14[3] =
 { 0x0043, 0x0051, 0x0052 };
 static const uint16_t VAR_15[4] =
 { 0x0015, 0x005a, 0x0059, 0x0058 };
 static const uint16_t VAR_16[6] =
 { 0x0811, 0x0812, 0x0814, 0x0815, 0x0429, 0x0802 };

 uint16_t VAR_17[3];
 uint16_t VAR_18[4];
 uint16_t VAR_19[6];
 uint16_t VAR_20, VAR_21 = 0, VAR_22, VAR_23 = 0, VAR_24 = 0;
 uint16_t VAR_25 = 0, VAR_26, VAR_27;
 uint16_t VAR_28;
 uint16_t VAR_29;
 uint32_t VAR_30, VAR_31;
 struct bwi_softc *VAR_32 = VAR_13->mac_sc;
 struct bwi_phy *VAR_33 = &VAR_13->mac_phy;
 struct bwi_rf *VAR_34 = &VAR_13->mac_rf;
 int VAR_35;




 for (VAR_35 = 0; VAR_35 < 3; ++VAR_35)
  VAR_17[VAR_35] = FUNC_12(VAR_13, VAR_14[VAR_35]);
 for (VAR_35 = 0; VAR_35 < 4; ++VAR_35)
  VAR_18[VAR_35] = FUNC_8(VAR_13, VAR_15[VAR_35]);

 if (VAR_33->phy_mode == VAR_9) {
  VAR_21 = FUNC_8(VAR_13, 0x30);
  VAR_25 = FUNC_1(VAR_32, VAR_1);

  FUNC_10(VAR_13, 0x30, 0xff);
  FUNC_3(VAR_32, VAR_1, 0x3f3f);
 } else if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {
  for (VAR_35 = 0; VAR_35 < 6; ++VAR_35) {
   VAR_19[VAR_35] =
    FUNC_8(VAR_13, VAR_16[VAR_35]);
  }

  FUNC_9(VAR_13, 0x814, 0x3);
  FUNC_6(VAR_13, 0x815, 0x3);
  FUNC_6(VAR_13, 0x429, 0x8000);
  FUNC_6(VAR_13, 0x802, 0x3);

  VAR_23 = FUNC_8(VAR_13, 0x80f);
  VAR_24 = FUNC_8(VAR_13, 0x810);

  if (VAR_33->phy_rev >= 3)
   FUNC_10(VAR_13, 0x80f, 0xc020);
  else
   FUNC_10(VAR_13, 0x80f, 0x8020);
  FUNC_10(VAR_13, 0x810, 0);

  VAR_28 = FUNC_16(VAR_13, 0x011);
  FUNC_10(VAR_13, 0x812, VAR_28);
  if (VAR_33->phy_rev < 7 ||
      (VAR_32->sc_card_flags & VAR_2) == 0)
   FUNC_10(VAR_13, 0x811, 0x1b3);
  else
   FUNC_10(VAR_13, 0x811, 0x9b3);
 }
 FUNC_2(VAR_32, VAR_6, 0x8000);

 VAR_20 = FUNC_8(VAR_13, 0x35);
 FUNC_6(VAR_13, 0x35, 0x80);

 VAR_26 = FUNC_1(VAR_32, VAR_0);
 VAR_27 = FUNC_1(VAR_32, VAR_7);

 if (VAR_33->phy_version == 0) {
  FUNC_3(VAR_32, VAR_0, 0x122);
 } else {
  if (VAR_33->phy_version >= 2)
   FUNC_7(VAR_13, 0x3, 0xffbf, 0x40);
  FUNC_2(VAR_32, VAR_7, 0x2000);
 }

 VAR_29 = FUNC_17(VAR_13);

 if (VAR_33->phy_mode == VAR_9)
  FUNC_14(VAR_13, 0x78, 0x26);

 if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {
  VAR_28 = FUNC_16(VAR_13, 0x011);
  FUNC_10(VAR_13, 0x812, VAR_28);
 }

 FUNC_10(VAR_13, 0x15, 0xbfaf);
 FUNC_10(VAR_13, 0x2b, 0x1403);

 if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {
  VAR_28 = FUNC_16(VAR_13, 0x001);
  FUNC_10(VAR_13, 0x812, VAR_28);
 }

 FUNC_10(VAR_13, 0x15, 0xbfa0);

 FUNC_13(VAR_13, 0x51, 0x4);
 if (VAR_34->rf_rev == 8) {
  FUNC_14(VAR_13, 0x43, 0x1f);
 } else {
  FUNC_14(VAR_13, 0x52, 0);
  FUNC_11(VAR_13, 0x43, 0xfff0, 0x9);
 }

 VAR_30 = 0;
 FUNC_10(VAR_13, 0x58, 0);
 for (VAR_35 = 0; VAR_35 < 16; ++VAR_35) {
  FUNC_10(VAR_13, 0x5a, 0x480);
  FUNC_10(VAR_13, 0x59, 0xc810);

  FUNC_10(VAR_13, 0x58, 0xd);
  if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {
   VAR_28 = FUNC_16(VAR_13, 0x101);
   FUNC_10(VAR_13, 0x812, VAR_28);
  }
  FUNC_10(VAR_13, 0x15, 0xafb0);
  FUNC_4(10);

  if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {
   VAR_28 = FUNC_16(VAR_13, 0x101);
   FUNC_10(VAR_13, 0x812, VAR_28);
  }
  FUNC_10(VAR_13, 0x15, 0xefb0);
  FUNC_4(10);

  if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {
   VAR_28 = FUNC_16(VAR_13, 0x100);
   FUNC_10(VAR_13, 0x812, VAR_28);
  }
  FUNC_10(VAR_13, 0x15, 0xfff0);
  FUNC_4(20);

  VAR_30 += FUNC_8(VAR_13, 0x2d);

  FUNC_10(VAR_13, 0x58, 0);
  if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {
   VAR_28 = FUNC_16(VAR_13, 0x101);
   FUNC_10(VAR_13, 0x812, VAR_28);
  }
  FUNC_10(VAR_13, 0x15, 0xafb0);
 }
 ++VAR_30;
 VAR_30 >>= 9;

 FUNC_4(10);

 VAR_31 = 0;
 FUNC_10(VAR_13, 0x58, 0);
 for (VAR_35 = 0; VAR_35 < 16; ++VAR_35) {
  int VAR_36;

  VAR_22 = (FUNC_15(VAR_35) << 1) | 0x20;
  FUNC_14(VAR_13, 0x78, VAR_22);
  FUNC_4(10);


  for (VAR_36 = 0; VAR_36 < 16; ++VAR_36) {
   FUNC_10(VAR_13, 0x5a, 0xd80);
   FUNC_10(VAR_13, 0x59, 0xc810);

   FUNC_10(VAR_13, 0x58, 0xd);
   if ((VAR_33->phy_flags & VAR_5) ||
       VAR_33->phy_rev >= 2) {
    VAR_28 = FUNC_16(VAR_13, 0x101);
    FUNC_10(VAR_13, 0x812, VAR_28);
   }
   FUNC_10(VAR_13, 0x15, 0xafb0);
   FUNC_4(10);

   if ((VAR_33->phy_flags & VAR_5) ||
       VAR_33->phy_rev >= 2) {
    VAR_28 = FUNC_16(VAR_13, 0x101);
    FUNC_10(VAR_13, 0x812, VAR_28);
   }
   FUNC_10(VAR_13, 0x15, 0xefb0);
   FUNC_4(10);

   if ((VAR_33->phy_flags & VAR_5) ||
       VAR_33->phy_rev >= 2) {
    VAR_28 = FUNC_16(VAR_13, 0x100);
    FUNC_10(VAR_13, 0x812, VAR_28);
   }
   FUNC_10(VAR_13, 0x15, 0xfff0);
   FUNC_4(10);

   VAR_31 += FUNC_8(VAR_13, 0x2d);

   FUNC_10(VAR_13, 0x58, 0);
   if ((VAR_33->phy_flags & VAR_5) ||
       VAR_33->phy_rev >= 2) {
    VAR_28 = FUNC_16(VAR_13, 0x101);
    FUNC_10(VAR_13, 0x812, VAR_28);
   }
   FUNC_10(VAR_13, 0x15, 0xafb0);
  }

  ++VAR_31;
  VAR_31 >>= 8;

  if (VAR_31 > VAR_30)
   break;
 }
 if (VAR_35 > 15)
  VAR_34->rf_calib = VAR_22;
 else
  VAR_34->rf_calib = VAR_29;
 if (VAR_34->rf_calib != 0xffff) {
  FUNC_5(VAR_32, VAR_4 | VAR_3,
   "RF calibration value: 0x%04x\n", VAR_34->rf_calib);
  VAR_34->rf_flags |= VAR_8;
 }




 FUNC_10(VAR_13, VAR_15[0], VAR_18[0]);

 for (VAR_35 = 0; VAR_35 < 3; ++VAR_35) {
  int VAR_37 = (VAR_35 + 1) % 3;

  FUNC_14(VAR_13, VAR_14[VAR_37], VAR_17[VAR_37]);
 }
 for (VAR_35 = 1; VAR_35 < 4; ++VAR_35)
  FUNC_10(VAR_13, VAR_15[VAR_35], VAR_18[VAR_35]);

 FUNC_3(VAR_32, VAR_0, VAR_26);
 if (VAR_33->phy_version != 0)
  FUNC_3(VAR_32, VAR_7, VAR_27);

 FUNC_10(VAR_13, 0x35, VAR_20);
 FUNC_18(VAR_13, VAR_34->rf_curchan);

 if (VAR_33->phy_mode == VAR_9) {
  FUNC_10(VAR_13, 0x30, VAR_21);
  FUNC_3(VAR_32, VAR_1, VAR_25);
 } else if ((VAR_33->phy_flags & VAR_5) || VAR_33->phy_rev >= 2) {

  FUNC_0(VAR_32, VAR_6, 0x8000);

  for (VAR_35 = 0; VAR_35 < 6; ++VAR_35) {
   FUNC_10(VAR_13, VAR_16[VAR_35],
      VAR_19[VAR_35]);
  }

  FUNC_10(VAR_13, 0x80f, VAR_23);
  FUNC_10(VAR_13, 0x810, VAR_24);
 }




}
