
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {int rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


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
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int) ;
 int VAR_15 ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int,int) ;
 int FUNC_6 (struct bwn_mac*,int ,int,int) ;

__attribute__((used)) static void
FUNC_7(struct bwn_mac *VAR_16)
{
 struct bwn_phy *VAR_17 = &VAR_16->mac_phy;

 if (VAR_17->rev == 1) {
  FUNC_6(VAR_16, VAR_1, 0, 254);
  FUNC_6(VAR_16, VAR_1, 1, 13);
  FUNC_6(VAR_16, VAR_1, 2, 19);
  FUNC_6(VAR_16, VAR_1, 3, 25);
  FUNC_6(VAR_16, VAR_2, 0, 0x2710);
  FUNC_6(VAR_16, VAR_2, 1, 0x9b83);
  FUNC_6(VAR_16, VAR_2, 2, 0x9b83);
  FUNC_6(VAR_16, VAR_2, 3, 0x0f8d);
  FUNC_4(VAR_16, VAR_9, 4);
 } else {
  FUNC_6(VAR_16, VAR_0, 0, 254);
  FUNC_6(VAR_16, VAR_0, 1, 13);
  FUNC_6(VAR_16, VAR_0, 2, 19);
  FUNC_6(VAR_16, VAR_0, 3, 25);
 }

 FUNC_3(VAR_16, VAR_6, (uint16_t)~0xff00,
     0x5700);
 FUNC_3(VAR_16, FUNC_1(0x1a), ~0x007f, 0x000f);
 FUNC_3(VAR_16, FUNC_1(0x1a), ~0x3f80, 0x2b80);
 FUNC_3(VAR_16, VAR_5, 0xf0ff, 0x0300);
 FUNC_5(VAR_16, 0x7a, 0x0008);
 FUNC_3(VAR_16, VAR_12, ~0x000f, 0x0008);
 FUNC_3(VAR_16, VAR_13, ~0x0f00, 0x0600);
 FUNC_3(VAR_16, VAR_11, ~0x0f00, 0x0700);
 FUNC_3(VAR_16, VAR_12, ~0x0f00, 0x0100);
 if (VAR_17->rev == 1)
  FUNC_3(VAR_16, VAR_11, ~0x000f, 0x0007);
 FUNC_3(VAR_16, FUNC_1(0x88), ~0x00ff, 0x001c);
 FUNC_3(VAR_16, FUNC_1(0x88), ~0x3f00, 0x0200);
 FUNC_3(VAR_16, FUNC_1(0x96), ~0x00ff, 0x001c);
 FUNC_3(VAR_16, FUNC_1(0x89), ~0x00ff, 0x0020);
 FUNC_3(VAR_16, FUNC_1(0x89), ~0x3f00, 0x0200);
 FUNC_3(VAR_16, FUNC_1(0x82), ~0x00ff, 0x002e);
 FUNC_3(VAR_16, FUNC_1(0x96), (uint16_t)~0xff00, 0x1a00);
 FUNC_3(VAR_16, FUNC_1(0x81), ~0x00ff, 0x0028);
 FUNC_3(VAR_16, FUNC_1(0x81), (uint16_t)~0xff00, 0x2c00);
 if (VAR_17->rev == 1) {
  FUNC_4(VAR_16, VAR_14, 0x092b);
  FUNC_3(VAR_16, FUNC_1(0x1b), ~0x001e, 0x0002);
 } else {
  FUNC_0(VAR_16, FUNC_1(0x1b), ~0x001e);
  FUNC_4(VAR_16, FUNC_1(0x1f), 0x287a);
  FUNC_3(VAR_16, VAR_10, ~0x000f, 0x0004);
  if (VAR_17->rev >= 6) {
   FUNC_4(VAR_16, FUNC_1(0x22), 0x287a);
   FUNC_3(VAR_16, VAR_10,
       (uint16_t)~0xf000, 0x3000);
  }
 }
 FUNC_3(VAR_16, VAR_8, 0x8080, 0x7874);
 FUNC_4(VAR_16, FUNC_1(0x8e), 0x1c00);
 if (VAR_17->rev == 1) {
  FUNC_3(VAR_16, VAR_7, ~0x0f00, 0x0600);
  FUNC_4(VAR_16, FUNC_1(0x8b), 0x005e);
  FUNC_3(VAR_16, VAR_5, ~0x00ff, 0x001e);
  FUNC_4(VAR_16, FUNC_1(0x8d), 0x0002);
  FUNC_6(VAR_16, VAR_4, 0, 0);
  FUNC_6(VAR_16, VAR_4, 1, 7);
  FUNC_6(VAR_16, VAR_4, 2, 16);
  FUNC_6(VAR_16, VAR_4, 3, 28);
 } else {
  FUNC_6(VAR_16, VAR_3, 0, 0);
  FUNC_6(VAR_16, VAR_3, 1, 7);
  FUNC_6(VAR_16, VAR_3, 2, 16);
  FUNC_6(VAR_16, VAR_3, 3, 28);
 }
 if (VAR_17->rev >= 6) {
  FUNC_0(VAR_16, FUNC_1(0x26), ~0x0003);
  FUNC_0(VAR_16, FUNC_1(0x26), ~0x1000);
 }
 FUNC_2(VAR_16, VAR_15);
}
