
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_phy {int rf_ver; int rf_rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int FUNC_0 (struct bwn_mac*,int,int) ;
 int FUNC_1 (struct bwn_mac*,int,int) ;
 int FUNC_2 (struct bwn_mac*,int,int,int) ;
 int FUNC_3 (struct bwn_mac*,int,int) ;
 int FUNC_4 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_5(struct bwn_mac *VAR_0)
{
 struct bwn_phy *VAR_1 = &VAR_0->mac_phy;

 if (!FUNC_4(VAR_0)) {
  FUNC_3(VAR_0, 0x047a, 0xc111);
  return;
 }

 FUNC_0(VAR_0, 0x0036, 0xfeff);
 FUNC_3(VAR_0, 0x002f, 0x0202);
 FUNC_1(VAR_0, 0x047c, 0x0002);
 FUNC_1(VAR_0, 0x047a, 0xf000);
 if (VAR_1->rf_ver == 0x2050 && VAR_1->rf_rev == 8) {
  FUNC_2(VAR_0, 0x047a, 0xff0f, 0x0010);
  FUNC_1(VAR_0, 0x005d, 0x8000);
  FUNC_2(VAR_0, 0x004e, 0xffc0, 0x0010);
  FUNC_3(VAR_0, 0x002e, 0xc07f);
  FUNC_1(VAR_0, 0x0036, 0x0400);
 } else {
  FUNC_1(VAR_0, 0x0036, 0x0200);
  FUNC_1(VAR_0, 0x0036, 0x0400);
  FUNC_0(VAR_0, 0x005d, 0x7fff);
  FUNC_0(VAR_0, 0x004f, 0xfffe);
  FUNC_2(VAR_0, 0x004e, 0xffc0, 0x0010);
  FUNC_3(VAR_0, 0x002e, 0xc07f);
  FUNC_2(VAR_0, 0x047a, 0xff0f, 0x0010);
 }
}
