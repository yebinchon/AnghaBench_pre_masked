
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_phy {int phy_rev; } ;
struct bwi_mac {struct bwi_phy mac_phy; } ;


 int FUNC_0 (struct bwi_mac*,int,int) ;
 int FUNC_1 (struct bwi_mac*,int,int,int) ;
 int FUNC_2 (struct bwi_mac*,int,int) ;
 int FUNC_3 (struct bwi_mac*,int,int) ;
 int FUNC_4 (struct bwi_mac*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct bwi_mac *VAR_0)
{
 struct bwi_phy *VAR_1 = &VAR_0->mac_phy;
 uint16_t VAR_2;

 VAR_2 = VAR_1->phy_rev == 1 ? 0x4c00 : 0;

 FUNC_4(VAR_0, VAR_2, 0xfe);
 FUNC_4(VAR_0, VAR_2 + 1, 0xd);
 FUNC_4(VAR_0, VAR_2 + 2, 0x13);
 FUNC_4(VAR_0, VAR_2 + 3, 0x19);

 if (VAR_1->phy_rev == 1) {
  FUNC_4(VAR_0, 0x1800, 0x2710);
  FUNC_4(VAR_0, 0x1801, 0x9b83);
  FUNC_4(VAR_0, 0x1802, 0x9b83);
  FUNC_4(VAR_0, 0x1803, 0xf8d);
  FUNC_2(VAR_0, 0x455, 0x4);
 }

 FUNC_1(VAR_0, 0x4a5, 0xff, 0x5700);
 FUNC_1(VAR_0, 0x41a, 0xff80, 0xf);
 FUNC_1(VAR_0, 0x41a, 0xc07f, 0x2b80);
 FUNC_1(VAR_0, 0x48c, 0xf0ff, 0x300);

 FUNC_3(VAR_0, 0x7a, 0x8);

 FUNC_1(VAR_0, 0x4a0, 0xfff0, 0x8);
 FUNC_1(VAR_0, 0x4a1, 0xf0ff, 0x600);
 FUNC_1(VAR_0, 0x4a2, 0xf0ff, 0x700);
 FUNC_1(VAR_0, 0x4a0, 0xf0ff, 0x100);

 if (VAR_1->phy_rev == 1)
  FUNC_1(VAR_0, 0x4a2, 0xfff0, 0x7);

 FUNC_1(VAR_0, 0x488, 0xff00, 0x1c);
 FUNC_1(VAR_0, 0x488, 0xc0ff, 0x200);
 FUNC_1(VAR_0, 0x496, 0xff00, 0x1c);
 FUNC_1(VAR_0, 0x489, 0xff00, 0x20);
 FUNC_1(VAR_0, 0x489, 0xc0ff, 0x200);
 FUNC_1(VAR_0, 0x482, 0xff00, 0x2e);
 FUNC_1(VAR_0, 0x496, 0xff, 0x1a00);
 FUNC_1(VAR_0, 0x481, 0xff00, 0x28);
 FUNC_1(VAR_0, 0x481, 0xff, 0x2c00);

 if (VAR_1->phy_rev == 1) {
  FUNC_2(VAR_0, 0x430, 0x92b);
  FUNC_1(VAR_0, 0x41b, 0xffe1, 0x2);
 } else {
  FUNC_0(VAR_0, 0x41b, 0x1e);
  FUNC_2(VAR_0, 0x41f, 0x287a);
  FUNC_1(VAR_0, 0x420, 0xfff0, 0x4);

  if (VAR_1->phy_rev >= 6) {
   FUNC_2(VAR_0, 0x422, 0x287a);
   FUNC_1(VAR_0, 0x420, 0xfff, 0x3000);
  }
 }

 FUNC_1(VAR_0, 0x4a8, 0x8080, 0x7874);
 FUNC_2(VAR_0, 0x48e, 0x1c00);

 if (VAR_1->phy_rev == 1) {
  FUNC_1(VAR_0, 0x4ab, 0xf0ff, 0x600);
  FUNC_2(VAR_0, 0x48b, 0x5e);
  FUNC_1(VAR_0, 0x48c, 0xff00, 0x1e);
  FUNC_2(VAR_0, 0x48d, 0x2);
 }

 FUNC_4(VAR_0, VAR_2 + 0x800, 0);
 FUNC_4(VAR_0, VAR_2 + 0x801, 7);
 FUNC_4(VAR_0, VAR_2 + 0x802, 16);
 FUNC_4(VAR_0, VAR_2 + 0x803, 28);

 if (VAR_1->phy_rev >= 6) {
  FUNC_0(VAR_0, 0x426, 0x3);
  FUNC_0(VAR_0, 0x426, 0x1000);
 }
}
