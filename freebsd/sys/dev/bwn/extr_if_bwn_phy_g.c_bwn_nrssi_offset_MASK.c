
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {int rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
typedef int int16_t ;


 int FUNC_0 (struct bwn_mac*,int,int) ;
 int FUNC_1 (struct bwn_mac*,int const) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (struct bwn_mac*,int,int,int) ;
 int FUNC_4 (struct bwn_mac*,int const,int) ;
 int FUNC_5 (struct bwn_mac*,int,int) ;
 int FUNC_6 (struct bwn_mac*,int const) ;
 int FUNC_7 (struct bwn_mac*,int,int) ;
 int FUNC_8 (struct bwn_mac*,int,int,int) ;
 int FUNC_9 (struct bwn_mac*,int const,int) ;
 int FUNC_10 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_11 (struct bwn_mac*,int,int ,int) ;
 int FUNC_12 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_13(struct bwn_mac *VAR_3)
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
 struct bwn_phy *VAR_7 = &VAR_3->mac_phy;
 int VAR_8, VAR_9 = 0;
 uint16_t VAR_10[2];
 uint16_t VAR_11[10];
 uint16_t VAR_12[8];
 int16_t VAR_13;
 uint16_t VAR_14 = 0xffff;

 for (VAR_8 = 0; VAR_8 < 10; ++VAR_8)
  VAR_11[VAR_8] = FUNC_1(VAR_3, VAR_5[VAR_8]);
 for (VAR_8 = 0; VAR_8 < 2; ++VAR_8)
  VAR_10[VAR_8] = FUNC_6(VAR_3, VAR_4[VAR_8]);

 FUNC_0(VAR_3, 0x0429, 0x7fff);
 FUNC_3(VAR_3, 0x0001, 0x3fff, 0x4000);
 FUNC_2(VAR_3, 0x0811, 0x000c);
 FUNC_3(VAR_3, 0x0812, 0xfff3, 0x0004);
 FUNC_0(VAR_3, 0x0802, ~(0x1 | 0x2));
 if (VAR_7->rev >= 6) {
  for (VAR_8 = 0; VAR_8 < 8; ++VAR_8)
   VAR_12[VAR_8] = FUNC_1(VAR_3, VAR_6[VAR_8]);

  FUNC_4(VAR_3, 0x002e, 0);
  FUNC_4(VAR_3, 0x002f, 0);
  FUNC_4(VAR_3, 0x080f, 0);
  FUNC_4(VAR_3, 0x0810, 0);
  FUNC_2(VAR_3, 0x0478, 0x0100);
  FUNC_2(VAR_3, 0x0801, 0x0040);
  FUNC_2(VAR_3, 0x0060, 0x0040);
  FUNC_2(VAR_3, 0x0014, 0x0200);
 }
 FUNC_7(VAR_3, 0x007a, 0x0070);
 FUNC_7(VAR_3, 0x007a, 0x0080);
 FUNC_10(30);

 VAR_13 = (int16_t) ((FUNC_1(VAR_3, 0x047f) >> 8) & 0x003f);
 if (VAR_13 >= 0x20)
  VAR_13 -= 0x40;
 if (VAR_13 == 31) {
  for (VAR_8 = 7; VAR_8 >= 4; VAR_8--) {
   FUNC_9(VAR_3, 0x007b, VAR_8);
   FUNC_10(20);
   VAR_13 = (int16_t) ((FUNC_1(VAR_3, 0x047f) >> 8) &
       0x003f);
   if (VAR_13 >= 0x20)
    VAR_13 -= 0x40;
   if (VAR_13 < 31 && VAR_14 == 0xffff)
    VAR_14 = VAR_8;
  }
  if (VAR_14 == 0xffff)
   VAR_14 = 4;
 } else {
  FUNC_5(VAR_3, 0x007a, 0x007f);
  if (VAR_7->rev != 1) {
   FUNC_2(VAR_3, 0x0814, 0x0001);
   FUNC_0(VAR_3, 0x0815, 0xfffe);
  }
  FUNC_2(VAR_3, 0x0811, 0x000c);
  FUNC_2(VAR_3, 0x0812, 0x000c);
  FUNC_2(VAR_3, 0x0811, 0x0030);
  FUNC_2(VAR_3, 0x0812, 0x0030);
  FUNC_4(VAR_3, 0x005a, 0x0480);
  FUNC_4(VAR_3, 0x0059, 0x0810);
  FUNC_4(VAR_3, 0x0058, 0x000d);
  if (VAR_7->rev == 0)
   FUNC_4(VAR_3, 0x0003, 0x0122);
  else
   FUNC_2(VAR_3, 0x000a, 0x2000);
  if (VAR_7->rev != 1) {
   FUNC_2(VAR_3, 0x0814, 0x0004);
   FUNC_0(VAR_3, 0x0815, 0xfffb);
  }
  FUNC_3(VAR_3, 0x0003, 0xff9f, 0x0040);
  FUNC_7(VAR_3, 0x007a, 0x000f);
  FUNC_11(VAR_3, 3, 0, 1);
  FUNC_8(VAR_3, 0x0043, 0x00f0, 0x000f);
  FUNC_10(30);
  VAR_13 = (int16_t) ((FUNC_1(VAR_3, 0x047f) >> 8) & 0x003f);
  if (VAR_13 >= 0x20)
   VAR_13 -= 0x40;
  if (VAR_13 == -32) {
   for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
    FUNC_9(VAR_3, 0x007b, VAR_8);
    FUNC_10(20);
    VAR_13 = (int16_t)((FUNC_1(VAR_3,
        0x047f) >> 8) & 0x003f);
    if (VAR_13 >= 0x20)
     VAR_13 -= 0x40;
    if (VAR_13 > -31 && VAR_14 == 0xffff)
     VAR_14 = VAR_8;
   }
   if (VAR_14 == 0xffff)
    VAR_14 = 3;
  } else
   VAR_14 = 0;
 }
 FUNC_9(VAR_3, 0x007b, VAR_14);




 if (VAR_7->rev >= 6) {
  for (VAR_9 = 0; VAR_9 < 4; ++VAR_9) {
   FUNC_4(VAR_3, VAR_6[VAR_9],
       VAR_12[VAR_9]);
  }
 }
 if (VAR_7->rev != 1) {
  for (VAR_8 = 3; VAR_8 < 5; VAR_8++)
   FUNC_4(VAR_3, VAR_5[VAR_8],
       VAR_11[VAR_8]);
 }
 for (VAR_8 = 5; VAR_8 < 10; VAR_8++)
  FUNC_4(VAR_3, VAR_5[VAR_8], VAR_11[VAR_8]);

 for (VAR_8 = 2 - 1; VAR_8 >= 0; --VAR_8)
  FUNC_9(VAR_3, VAR_4[VAR_8], VAR_10[VAR_8]);

 FUNC_4(VAR_3, 0x0802, FUNC_1(VAR_3, 0x0802) | 0x1 | 0x2);
 FUNC_2(VAR_3, 0x0429, 0x8000);
 FUNC_12(VAR_3);
 if (VAR_7->rev >= 6) {
  for (; VAR_9 < 8; ++VAR_9) {
   FUNC_4(VAR_3, VAR_6[VAR_9],
       VAR_12[VAR_9]);
  }
 }

 FUNC_4(VAR_3, VAR_5[0], VAR_11[0]);
 FUNC_4(VAR_3, VAR_5[2], VAR_11[2]);
 FUNC_4(VAR_3, VAR_5[1], VAR_11[1]);
}
