
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_phy {int phy_rev; scalar_t__ phy_version; } ;
struct bwi_mac {struct bwi_phy mac_phy; } ;
struct bwi_gains {int tbl_gain1; int phy_gain; scalar_t__ tbl_gain2; } ;
typedef int int16_t ;
typedef int gains ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bwi_mac*,int,int) ;
 int FUNC_2 (struct bwi_mac*,int,int,int) ;
 int FUNC_3 (struct bwi_mac*,int const) ;
 int FUNC_4 (struct bwi_mac*,int,int) ;
 int FUNC_5 (struct bwi_mac*,int const,int) ;
 int FUNC_6 (struct bwi_mac*,int,int) ;
 int FUNC_7 (struct bwi_mac*,int,int,int) ;
 int FUNC_8 (struct bwi_mac*,int const) ;
 int FUNC_9 (struct bwi_mac*,int,int) ;
 int FUNC_10 (struct bwi_mac*,int const,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (struct bwi_mac*) ;
 int FUNC_12 (struct bwi_mac*,struct bwi_gains*) ;
 int FUNC_13 (struct bwi_gains*,int) ;

__attribute__((used)) static void
FUNC_14(struct bwi_mac *VAR_3)
{




 static const uint16_t VAR_4[2] =
 { 0x7a, 0x43 };
 static const uint16_t VAR_5[10] = {
  0x0001, 0x0811, 0x0812, 0x0814,
  0x0815, 0x005a, 0x0059, 0x0058,
  0x000a, 0x0003
 };
 static const uint16_t VAR_6[8] = {
  0x002e, 0x002f, 0x080f, 0x0810,
  0x0801, 0x0060, 0x0014, 0x0478
 };

 struct bwi_phy *VAR_7 = &VAR_3->mac_phy;
 uint16_t VAR_8[2];
 uint16_t VAR_9[10];
 uint16_t VAR_10[8];
 uint16_t VAR_11 = 0xffff;
 int16_t VAR_12;
 int VAR_13, VAR_14 = 0;

 for (VAR_13 = 0; VAR_13 < 10; ++VAR_13)
  VAR_9[VAR_13] = FUNC_3(VAR_3, VAR_5[VAR_13]);
 for (VAR_13 = 0; VAR_13 < 2; ++VAR_13)
  VAR_8[VAR_13] = FUNC_8(VAR_3, VAR_4[VAR_13]);

 FUNC_1(VAR_3, 0x429, 0x8000);
 FUNC_2(VAR_3, 0x1, 0x3fff, 0x4000);
 FUNC_4(VAR_3, 0x811, 0xc);
 FUNC_2(VAR_3, 0x812, 0xfff3, 0x4);
 FUNC_1(VAR_3, 0x802, 0x3);

 if (VAR_7->phy_rev >= 6) {
  for (VAR_13 = 0; VAR_13 < 8; ++VAR_13)
   VAR_10[VAR_13] = FUNC_3(VAR_3, VAR_6[VAR_13]);

  FUNC_5(VAR_3, 0x2e, 0);
  FUNC_5(VAR_3, 0x2f, 0);
  FUNC_5(VAR_3, 0x80f, 0);
  FUNC_5(VAR_3, 0x810, 0);
  FUNC_4(VAR_3, 0x478, 0x100);
  FUNC_4(VAR_3, 0x801, 0x40);
  FUNC_4(VAR_3, 0x60, 0x40);
  FUNC_4(VAR_3, 0x14, 0x200);
 }

 FUNC_9(VAR_3, 0x7a, 0x70);
 FUNC_9(VAR_3, 0x7a, 0x80);

 FUNC_0(30);

 VAR_12 = FUNC_11(VAR_3);
 if (VAR_12 == 31) {
  for (VAR_13 = 7; VAR_13 >= 4; --VAR_13) {
   FUNC_10(VAR_3, 0x7b, VAR_13);
   FUNC_0(20);
   VAR_12 = FUNC_11(VAR_3);
   if (VAR_12 < 31 && VAR_11 == 0xffff)
    VAR_11 = VAR_13;
  }
  if (VAR_11 == 0xffff)
   VAR_11 = 4;
 } else {
  struct bwi_gains VAR_15;

  FUNC_6(VAR_3, 0x7a, 0xff80);

  FUNC_4(VAR_3, 0x814, 0x1);
  FUNC_1(VAR_3, 0x815, 0x1);
  FUNC_4(VAR_3, 0x811, 0xc);
  FUNC_4(VAR_3, 0x812, 0xc);
  FUNC_4(VAR_3, 0x811, 0x30);
  FUNC_4(VAR_3, 0x812, 0x30);
  FUNC_5(VAR_3, 0x5a, 0x480);
  FUNC_5(VAR_3, 0x59, 0x810);
  FUNC_5(VAR_3, 0x58, 0xd);
  if (VAR_7->phy_version == 0)
   FUNC_5(VAR_3, 0x3, 0x122);
  else
   FUNC_4(VAR_3, 0xa, 0x2000);
  FUNC_4(VAR_3, 0x814, 0x4);
  FUNC_1(VAR_3, 0x815, 0x4);
  FUNC_2(VAR_3, 0x3, 0xff9f, 0x40);
  FUNC_9(VAR_3, 0x7a, 0xf);

  FUNC_13(&VAR_15, sizeof(VAR_15));
  VAR_15.tbl_gain1 = 3;
  VAR_15.tbl_gain2 = 0;
  VAR_15.phy_gain = 1;
  FUNC_12(VAR_3, &VAR_15);

  FUNC_7(VAR_3, 0x43, 0xf0, 0xf);
  FUNC_0(30);

  VAR_12 = FUNC_11(VAR_3);
  if (VAR_12 == -32) {
   for (VAR_13 = 0; VAR_13 < 4; ++VAR_13) {
    FUNC_10(VAR_3, 0x7b, VAR_13);
    FUNC_0(20);
    VAR_12 = FUNC_11(VAR_3);
    if (VAR_12 > -31 && VAR_11 == 0xffff)
     VAR_11 = VAR_13;
   }
   if (VAR_11 == 0xffff)
    VAR_11 = 3;
  } else {
   VAR_11 = 0;
  }
 }
 FUNC_10(VAR_3, 0x7b, VAR_11);




 if (VAR_7->phy_rev >= 6) {
  for (VAR_14 = 0; VAR_14 < 4; ++VAR_14) {
   FUNC_5(VAR_3, VAR_6[VAR_14],
      VAR_10[VAR_14]);
  }
 }


 for (VAR_13 = 3; VAR_13 < 10; ++VAR_13)
  FUNC_5(VAR_3, VAR_5[VAR_13], VAR_9[VAR_13]);

 for (VAR_13 = 2 - 1; VAR_13 >= 0; --VAR_13)
  FUNC_10(VAR_3, VAR_4[VAR_13], VAR_8[VAR_13]);

 FUNC_4(VAR_3, 0x802, 0x3);
 FUNC_4(VAR_3, 0x429, 0x8000);

 FUNC_12(VAR_3, ((void*)0));

 if (VAR_7->phy_rev >= 6) {
  for (; VAR_14 < 8; ++VAR_14) {
   FUNC_5(VAR_3, VAR_6[VAR_14],
      VAR_10[VAR_14]);
  }
 }

 FUNC_5(VAR_3, VAR_5[0], VAR_9[0]);
 FUNC_5(VAR_3, VAR_5[2], VAR_9[2]);
 FUNC_5(VAR_3, VAR_5[1], VAR_9[1]);




}
