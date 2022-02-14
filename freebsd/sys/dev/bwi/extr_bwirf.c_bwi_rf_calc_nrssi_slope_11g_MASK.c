
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_softc {int dummy; } ;
struct bwi_rf {int rf_rev; int rf_nrssi_slope; int* rf_nrssi; int rf_curchan; } ;
struct bwi_phy {int phy_rev; int phy_version; } ;
struct bwi_mac {struct bwi_rf mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;
struct bwi_gains {int tbl_gain1; int tbl_gain2; int phy_gain; } ;
typedef int int16_t ;
typedef int gains ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bwi_mac*,int,int) ;
 int FUNC_5 (struct bwi_mac*,int,int,int) ;
 int FUNC_6 (struct bwi_mac*,int const) ;
 int FUNC_7 (struct bwi_mac*,int,int) ;
 int FUNC_8 (struct bwi_mac*,int const,int) ;
 int FUNC_9 (struct bwi_mac*,int,int) ;
 int FUNC_10 (struct bwi_mac*,int,int,int) ;
 int FUNC_11 (struct bwi_mac*,int const) ;
 int FUNC_12 (struct bwi_mac*,int,int) ;
 int FUNC_13 (struct bwi_mac*,int const,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (struct bwi_mac*) ;
 int FUNC_15 (struct bwi_mac*) ;
 int FUNC_16 (struct bwi_mac*) ;
 int FUNC_17 (struct bwi_mac*) ;
 int FUNC_18 (struct bwi_mac*,int ) ;
 int FUNC_19 (struct bwi_mac*,struct bwi_gains*) ;
 int FUNC_20 (struct bwi_gains*,int) ;

__attribute__((used)) static void
FUNC_21(struct bwi_mac *VAR_6)
{




 static const uint16_t VAR_7[3] =
 { 0x7a, 0x52, 0x43 };
 static const uint16_t VAR_8[4] =
 { 0x15, 0x5a, 0x59, 0x58 };
 static const uint16_t VAR_9[8] = {
  0x002e, 0x002f, 0x080f, 0x0810,
  0x0801, 0x0060, 0x0014, 0x0478
 };

 struct bwi_softc *VAR_10 = VAR_6->mac_sc;
 struct bwi_phy *VAR_11 = &VAR_6->mac_phy;
 struct bwi_rf *VAR_12 = &VAR_6->mac_rf;
 uint16_t VAR_13[3];
 uint16_t VAR_14[4];
 uint16_t VAR_15[8];
 uint16_t VAR_16, VAR_17, VAR_18;
 struct bwi_gains VAR_19;
 int16_t VAR_20[2];
 int VAR_21, VAR_22 = 0;

 if (VAR_12->rf_rev >= 9)
  return;
 else if (VAR_12->rf_rev == 8)
  FUNC_16(VAR_6);

 FUNC_4(VAR_6, 0x429, 0x8000);
 FUNC_4(VAR_6, 0x802, 0x3);




 VAR_16 = FUNC_0(VAR_10, VAR_1);
 FUNC_1(VAR_10, VAR_1, 0x8000);

 for (VAR_21 = 0; VAR_21 < 3; ++VAR_21)
  VAR_13[VAR_21] = FUNC_11(VAR_6, VAR_7[VAR_21]);
 for (VAR_21 = 0; VAR_21 < 4; ++VAR_21)
  VAR_14[VAR_21] = FUNC_6(VAR_6, VAR_8[VAR_21]);

 VAR_17 = FUNC_0(VAR_10, VAR_0);
 VAR_18 = FUNC_0(VAR_10, VAR_2);

 if (VAR_11->phy_rev >= 3) {
  for (VAR_21 = 0; VAR_21 < 8; ++VAR_21)
   VAR_15[VAR_21] = FUNC_6(VAR_6, VAR_9[VAR_21]);

  FUNC_8(VAR_6, 0x2e, 0);
  FUNC_8(VAR_6, 0x810, 0);

  if (VAR_11->phy_rev == 4 || VAR_11->phy_rev == 6 ||
      VAR_11->phy_rev == 7) {
   FUNC_7(VAR_6, 0x478, 0x100);
   FUNC_7(VAR_6, 0x810, 0x40);
  } else if (VAR_11->phy_rev == 3 || VAR_11->phy_rev == 5) {
   FUNC_4(VAR_6, 0x810, 0x40);
  }

  FUNC_7(VAR_6, 0x60, 0x40);
  FUNC_7(VAR_6, 0x14, 0x200);
 }




 FUNC_12(VAR_6, 0x7a, 0x70);

 FUNC_20(&VAR_19, sizeof(VAR_19));
 VAR_19.tbl_gain1 = 0;
 VAR_19.tbl_gain2 = 8;
 VAR_19.phy_gain = 0;
 FUNC_19(VAR_6, &VAR_19);

 FUNC_9(VAR_6, 0x7a, 0xff08);
 if (VAR_11->phy_rev >= 2) {
  FUNC_5(VAR_6, 0x811, 0xffcf, 0x30);
  FUNC_5(VAR_6, 0x812, 0xffcf, 0x10);
 }

 FUNC_12(VAR_6, 0x7a, 0x80);
 FUNC_3(20);
 VAR_20[0] = FUNC_14(VAR_6);




 FUNC_9(VAR_6, 0x7a, 0xff80);
 if (VAR_11->phy_version >= 2)
  FUNC_5(VAR_6, 0x3, 0xff9f, 0x40);
 FUNC_1(VAR_10, VAR_2, 0x2000);

 FUNC_12(VAR_6, 0x7a, 0xf);
 FUNC_8(VAR_6, 0x15, 0xf330);
 if (VAR_11->phy_rev >= 2) {
  FUNC_5(VAR_6, 0x812, 0xffcf, 0x20);
  FUNC_5(VAR_6, 0x811, 0xffcf, 0x20);
 }

 FUNC_20(&VAR_19, sizeof(VAR_19));
 VAR_19.tbl_gain1 = 3;
 VAR_19.tbl_gain2 = 0;
 VAR_19.phy_gain = 1;
 FUNC_19(VAR_6, &VAR_19);

 if (VAR_12->rf_rev == 8) {
  FUNC_13(VAR_6, 0x43, 0x1f);
 } else {
  FUNC_10(VAR_6, 0x52, 0xff0f, 0x60);
  FUNC_10(VAR_6, 0x43, 0xfff0, 0x9);
 }
 FUNC_8(VAR_6, 0x5a, 0x480);
 FUNC_8(VAR_6, 0x59, 0x810);
 FUNC_8(VAR_6, 0x58, 0xd);
 FUNC_3(20);

 VAR_20[1] = FUNC_14(VAR_6);




 if (VAR_20[1] == VAR_20[0])
  VAR_12->rf_nrssi_slope = 0x10000;
 else
  VAR_12->rf_nrssi_slope = 0x400000 / (VAR_20[0] - VAR_20[1]);
 if (VAR_20[0] >= -4) {
  VAR_12->rf_nrssi[0] = VAR_20[1];
  VAR_12->rf_nrssi[1] = VAR_20[0];
 }




 if (VAR_11->phy_rev >= 3) {
  for (VAR_22 = 0; VAR_22 < 4; ++VAR_22) {
   FUNC_8(VAR_6, VAR_9[VAR_22],
      VAR_15[VAR_22]);
  }
 }
 if (VAR_11->phy_rev >= 2) {
  FUNC_4(VAR_6, 0x812, 0x30);
  FUNC_4(VAR_6, 0x811, 0x30);
 }

 for (VAR_21 = 0; VAR_21 < 3; ++VAR_21)
  FUNC_13(VAR_6, VAR_7[VAR_21], VAR_13[VAR_21]);

 FUNC_2(VAR_10, VAR_1, VAR_16);
 FUNC_2(VAR_10, VAR_0, VAR_17);
 FUNC_2(VAR_10, VAR_2, VAR_18);

 for (VAR_21 = 0; VAR_21 < 4; ++VAR_21)
  FUNC_8(VAR_6, VAR_8[VAR_21], VAR_14[VAR_21]);

 FUNC_18(VAR_6, VAR_12->rf_curchan);
 FUNC_7(VAR_6, 0x802, 0x3);
 FUNC_19(VAR_6, ((void*)0));
 FUNC_7(VAR_6, 0x429, 0x8000);

 if (VAR_11->phy_rev >= 3) {
  for (; VAR_22 < 8; ++VAR_22) {
   FUNC_8(VAR_6, VAR_9[VAR_22],
      VAR_15[VAR_22]);
  }
 }

 FUNC_15(VAR_6);
 FUNC_17(VAR_6);




}
