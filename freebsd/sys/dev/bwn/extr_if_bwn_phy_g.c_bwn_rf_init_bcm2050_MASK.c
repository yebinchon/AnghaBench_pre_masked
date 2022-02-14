
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_phy {scalar_t__ type; int rev; int analog; int rf_rev; scalar_t__ gmode; int chan; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bwn_phy*) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct bwn_mac*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (struct bwn_mac*,int ,int) ;
 int FUNC_7 (struct bwn_mac*,int ,int,int) ;
 int VAR_13 ;
 int FUNC_8 (struct bwn_mac*,int ,int) ;
 int FUNC_9 (struct bwn_mac*,int) ;
 int FUNC_10 (struct bwn_mac*,int) ;
 int FUNC_11 (struct bwn_mac*,int,int) ;
 int FUNC_12 (struct bwn_mac*,int,int,int) ;
 int FUNC_13 (struct bwn_mac*,int,int) ;
 int FUNC_14 (struct bwn_mac*,int,int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct bwn_mac*,int ,int ) ;
 int FUNC_17 (struct bwn_mac*,int ) ;

__attribute__((used)) static uint16_t
FUNC_18(struct bwn_mac *VAR_14)
{
 struct bwn_phy *VAR_15 = &VAR_14->mac_phy;
 uint32_t VAR_16 = 0, VAR_17 = 0;
 uint16_t VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27,
     VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33, VAR_34,
     VAR_35, VAR_36, VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
 static const uint8_t VAR_44[] = {
  0x02, 0x03, 0x01, 0x0f,
  0x06, 0x07, 0x05, 0x0f,
  0x0a, 0x0b, 0x09, 0x0f,
  0x0e, 0x0f, 0x0d, 0x0f,
 };

 VAR_33 = VAR_32 = VAR_38 = VAR_31 = VAR_30 = VAR_29 = VAR_28 =
     VAR_27 = VAR_26 = VAR_25 = 0;
 VAR_35 = FUNC_10(VAR_14, 0x43);
 VAR_36 = FUNC_10(VAR_14, 0x51);
 VAR_37 = FUNC_10(VAR_14, 0x52);
 VAR_21 = FUNC_5(VAR_14, VAR_9);
 VAR_22 = FUNC_5(VAR_14, FUNC_3(0x5a));
 VAR_23 = FUNC_5(VAR_14, FUNC_3(0x59));
 VAR_24 = FUNC_5(VAR_14, FUNC_3(0x58));

 if (VAR_15->type == VAR_1) {
  VAR_25 = FUNC_5(VAR_14, FUNC_3(0x30));
  VAR_38 = FUNC_9(VAR_14, 0x3ec);

  FUNC_8(VAR_14, FUNC_3(0x30), 0xff);
  FUNC_14(VAR_14, 0x3ec, 0x3f3f);
 } else if (VAR_15->gmode || VAR_15->rev >= 2) {
  VAR_26 = FUNC_5(VAR_14, VAR_11);
  VAR_27 = FUNC_5(VAR_14, VAR_12);
  VAR_28 = FUNC_5(VAR_14, VAR_2);
  VAR_29 = FUNC_5(VAR_14, VAR_3);
  VAR_30 = FUNC_5(VAR_14, VAR_5);
  VAR_31 = FUNC_5(VAR_14, VAR_4);

  FUNC_6(VAR_14, VAR_2, 0x0003);
  FUNC_4(VAR_14, VAR_3, 0xfffc);
  FUNC_4(VAR_14, VAR_5, 0x7fff);
  FUNC_4(VAR_14, VAR_4, 0xfffc);
  if (FUNC_1(VAR_15)) {
   VAR_32 = FUNC_5(VAR_14, VAR_8);
   VAR_33 = FUNC_5(VAR_14, VAR_6);
   if (VAR_15->rev >= 3)
    FUNC_8(VAR_14, VAR_8, 0xc020);
   else
    FUNC_8(VAR_14, VAR_8, 0x8020);
   FUNC_8(VAR_14, VAR_6, 0);
  }

  FUNC_8(VAR_14, VAR_12,
      FUNC_16(VAR_14, VAR_12,
   FUNC_2(0, 1, 1)));
  FUNC_8(VAR_14, VAR_11,
      FUNC_16(VAR_14, VAR_11, 0));
 }
 FUNC_14(VAR_14, 0x3e2, FUNC_9(VAR_14, 0x3e2) | 0x8000);

 VAR_34 = FUNC_5(VAR_14, VAR_13);
 FUNC_4(VAR_14, VAR_13, 0xff7f);
 VAR_39 = FUNC_9(VAR_14, 0x3e6);
 VAR_40 = FUNC_9(VAR_14, 0x3f4);

 if (VAR_15->analog == 0)
  FUNC_14(VAR_14, 0x03e6, 0x0122);
 else {
  if (VAR_15->analog >= 2)
   FUNC_7(VAR_14, FUNC_3(0x03), 0xffbf, 0x40);
  FUNC_14(VAR_14, VAR_0,
      (FUNC_9(VAR_14, VAR_0) | 0x2000));
 }

 VAR_42 = FUNC_10(VAR_14, 0x60);
 VAR_43 = (VAR_42 & 0x001e) >> 1;
 VAR_18 = (((VAR_44[VAR_43] << 1) | (VAR_42 & 0x0001)) | 0x0020);

 if (VAR_15->type == VAR_1)
  FUNC_13(VAR_14, 0x78, 0x26);
 if (VAR_15->gmode || VAR_15->rev >= 2) {
  FUNC_8(VAR_14, VAR_12,
      FUNC_16(VAR_14, VAR_12,
   FUNC_2(0, 1, 1)));
 }
 FUNC_8(VAR_14, VAR_9, 0xbfaf);
 FUNC_8(VAR_14, FUNC_3(0x2b), 0x1403);
 if (VAR_15->gmode || VAR_15->rev >= 2) {
  FUNC_8(VAR_14, VAR_12,
      FUNC_16(VAR_14, VAR_12,
   FUNC_2(0, 0, 1)));
 }
 FUNC_8(VAR_14, VAR_9, 0xbfa0);
 FUNC_11(VAR_14, 0x51, 0x0004);
 if (VAR_15->rf_rev == 8)
  FUNC_13(VAR_14, 0x43, 0x1f);
 else {
  FUNC_13(VAR_14, 0x52, 0);
  FUNC_12(VAR_14, 0x43, 0xfff0, 0x0009);
 }
 FUNC_8(VAR_14, FUNC_3(0x58), 0);

 for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
  FUNC_8(VAR_14, FUNC_3(0x5a), 0x0480);
  FUNC_8(VAR_14, FUNC_3(0x59), 0xc810);
  FUNC_8(VAR_14, FUNC_3(0x58), 0x000d);
  if (VAR_15->gmode || VAR_15->rev >= 2) {
   FUNC_8(VAR_14, VAR_12,
       FUNC_16(VAR_14,
    VAR_12, FUNC_2(1, 0, 1)));
  }
  FUNC_8(VAR_14, VAR_9, 0xafb0);
  FUNC_15(10);
  if (VAR_15->gmode || VAR_15->rev >= 2) {
   FUNC_8(VAR_14, VAR_12,
       FUNC_16(VAR_14,
    VAR_12, FUNC_2(1, 0, 1)));
  }
  FUNC_8(VAR_14, VAR_9, 0xefb0);
  FUNC_15(10);
  if (VAR_15->gmode || VAR_15->rev >= 2) {
   FUNC_8(VAR_14, VAR_12,
       FUNC_16(VAR_14,
    VAR_12, FUNC_2(1, 0, 0)));
  }
  FUNC_8(VAR_14, VAR_9, 0xfff0);
  FUNC_15(20);
  VAR_16 += FUNC_5(VAR_14, VAR_7);
  FUNC_8(VAR_14, FUNC_3(0x58), 0);
  if (VAR_15->gmode || VAR_15->rev >= 2) {
   FUNC_8(VAR_14, VAR_12,
       FUNC_16(VAR_14,
    VAR_12, FUNC_2(1, 0, 1)));
  }
  FUNC_8(VAR_14, VAR_9, 0xafb0);
 }
 FUNC_15(10);

 FUNC_8(VAR_14, FUNC_3(0x58), 0);
 VAR_16++;
 VAR_16 >>= 9;

 for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
  VAR_41 = (FUNC_0(VAR_19) << 1) | 0x0020;
  FUNC_13(VAR_14, 0x78, VAR_41);
  FUNC_15(10);
  for (VAR_20 = 0; VAR_20 < 16; VAR_20++) {
   FUNC_8(VAR_14, FUNC_3(0x5a), 0x0d80);
   FUNC_8(VAR_14, FUNC_3(0x59), 0xc810);
   FUNC_8(VAR_14, FUNC_3(0x58), 0x000d);
   if (VAR_15->gmode || VAR_15->rev >= 2) {
    FUNC_8(VAR_14, VAR_12,
        FUNC_16(VAR_14,
     VAR_12, FUNC_2(1, 0, 1)));
   }
   FUNC_8(VAR_14, VAR_9, 0xafb0);
   FUNC_15(10);
   if (VAR_15->gmode || VAR_15->rev >= 2) {
    FUNC_8(VAR_14, VAR_12,
        FUNC_16(VAR_14,
     VAR_12, FUNC_2(1, 0, 1)));
   }
   FUNC_8(VAR_14, VAR_9, 0xefb0);
   FUNC_15(10);
   if (VAR_15->gmode || VAR_15->rev >= 2) {
    FUNC_8(VAR_14, VAR_12,
        FUNC_16(VAR_14,
     VAR_12, FUNC_2(1, 0, 0)));
   }
   FUNC_8(VAR_14, VAR_9, 0xfff0);
   FUNC_15(10);
   VAR_17 += FUNC_5(VAR_14, VAR_7);
   FUNC_8(VAR_14, FUNC_3(0x58), 0);
   if (VAR_15->gmode || VAR_15->rev >= 2) {
    FUNC_8(VAR_14, VAR_12,
        FUNC_16(VAR_14,
     VAR_12, FUNC_2(1, 0, 1)));
   }
   FUNC_8(VAR_14, VAR_9, 0xafb0);
  }
  VAR_17++;
  VAR_17 >>= 8;
  if (VAR_16 < VAR_17)
   break;
 }

 FUNC_8(VAR_14, VAR_9, VAR_21);
 FUNC_13(VAR_14, 0x51, VAR_36);
 FUNC_13(VAR_14, 0x52, VAR_37);
 FUNC_13(VAR_14, 0x43, VAR_35);
 FUNC_8(VAR_14, FUNC_3(0x5a), VAR_22);
 FUNC_8(VAR_14, FUNC_3(0x59), VAR_23);
 FUNC_8(VAR_14, FUNC_3(0x58), VAR_24);
 FUNC_14(VAR_14, 0x3e6, VAR_39);
 if (VAR_15->analog != 0)
  FUNC_14(VAR_14, 0x3f4, VAR_40);
 FUNC_8(VAR_14, VAR_13, VAR_34);
 FUNC_17(VAR_14, VAR_15->chan);
 if (VAR_15->type == VAR_1) {
  FUNC_8(VAR_14, FUNC_3(0x30), VAR_25);
  FUNC_14(VAR_14, 0x3ec, VAR_38);
 } else if (VAR_15->gmode) {
  FUNC_14(VAR_14, VAR_10,
       FUNC_9(VAR_14, VAR_10)
       & 0x7fff);
  FUNC_8(VAR_14, VAR_11, VAR_26);
  FUNC_8(VAR_14, VAR_12, VAR_27);
  FUNC_8(VAR_14, VAR_2, VAR_28);
  FUNC_8(VAR_14, VAR_3,
         VAR_29);
  FUNC_8(VAR_14, VAR_5, VAR_30);
  FUNC_8(VAR_14, VAR_4, VAR_31);
  if (FUNC_1(VAR_15)) {
   FUNC_8(VAR_14, VAR_8, VAR_32);
   FUNC_8(VAR_14, VAR_6, VAR_33);
  }
 }

 return ((VAR_19 > 15) ? VAR_41 : VAR_18);
}
