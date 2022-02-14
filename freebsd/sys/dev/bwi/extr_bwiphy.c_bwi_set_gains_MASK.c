
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_phy {int phy_rev; } ;
struct bwi_mac {struct bwi_phy mac_phy; } ;
struct bwi_gains {int tbl_gain1; int tbl_gain2; int phy_gain; } ;


 int FUNC_0 (struct bwi_mac*,int,int,int) ;
 int FUNC_1 (struct bwi_mac*) ;
 int FUNC_2 (struct bwi_mac*,int,int) ;

void
FUNC_3(struct bwi_mac *VAR_0, const struct bwi_gains *VAR_1)
{
 struct bwi_phy *VAR_2 = &VAR_0->mac_phy;
 uint16_t VAR_3, VAR_4, VAR_5;
 int VAR_6;

 if (VAR_2->phy_rev <= 1) {
  VAR_3 = 0x5000;
  VAR_4 = VAR_3 + 16;
 } else {
  VAR_3 = 0x400;
  VAR_4 = VAR_3 + 8;
 }

 for (VAR_6 = 0; VAR_6 < 4; ++VAR_6) {
  if (VAR_1 != ((void*)0)) {
   VAR_5 = VAR_1->tbl_gain1;
  } else {

   VAR_5 = (VAR_6 & 0x1) << 1;
   VAR_5 |= (VAR_6 & 0x2) >> 1;
  }
  FUNC_2(VAR_0, VAR_3 + VAR_6, VAR_5);
 }

 for (VAR_6 = 0; VAR_6 < 16; ++VAR_6) {
  if (VAR_1 != ((void*)0))
   VAR_5 = VAR_1->tbl_gain2;
  else
   VAR_5 = VAR_6;
  FUNC_2(VAR_0, VAR_4 + VAR_6, VAR_5);
 }

 if (VAR_1 == ((void*)0) || (VAR_1 != ((void*)0) && VAR_1->phy_gain != -1)) {
  uint16_t VAR_7, VAR_8;

  if (VAR_1 != ((void*)0)) {
   VAR_7 =
   ((uint16_t)VAR_1->phy_gain << 14) |
   ((uint16_t)VAR_1->phy_gain << 6);
   VAR_8 = VAR_7;
  } else {
   VAR_7 = 0x4040;
   VAR_8 = 0x4000;
  }
  FUNC_0(VAR_0, 0x4a0, 0xbfbf, VAR_7);
  FUNC_0(VAR_0, 0x4a1, 0xbfbf, VAR_7);
  FUNC_0(VAR_0, 0x4a2, 0xbfbf, VAR_8);
 }
 FUNC_1(VAR_0);
}
