
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy_g {int pg_trsw_rx_gain; int pg_lna_lod_gain; int pg_pga_gain; int pg_lna_gain; } ;
struct bwn_phy {struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (struct bwn_phy*) ;
 int FUNC_1 (struct bwn_mac*,int) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void
FUNC_5(struct bwn_mac *VAR_0, int16_t VAR_1,
    int VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_0->mac_phy;
 struct bwn_phy_g *VAR_4 = &VAR_3->phy_g;
 uint16_t VAR_5;

 if (VAR_1 < 0)
  VAR_1 = 0;

 if (FUNC_0(VAR_3)) {
  int VAR_6 = 0;
  int VAR_7;

  if (VAR_2) {
   VAR_7 = VAR_4->pg_trsw_rx_gain / 2;
   if (VAR_1 >= VAR_7) {
    VAR_7 = VAR_1 - VAR_7;
    VAR_6 = 0x20;
   }
  } else
   VAR_7 = VAR_1;
  if (VAR_7 < 9) {
   VAR_4->pg_lna_lod_gain = 0;
  } else {
   VAR_4->pg_lna_lod_gain = 1;
   VAR_7 -= 8;
  }
  VAR_7 = FUNC_4(FUNC_3(VAR_7, 0), 0x2d);
  VAR_4->pg_pga_gain = VAR_7 / 3;
  if (VAR_4->pg_pga_gain >= 5) {
   VAR_4->pg_pga_gain -= 5;
   VAR_4->pg_lna_gain = 2;
  } else
   VAR_4->pg_lna_gain = 0;
 } else {
  VAR_4->pg_lna_gain = 0;
  VAR_4->pg_trsw_rx_gain = 0x20;
  if (VAR_1 >= 0x14) {
   VAR_4->pg_lna_lod_gain = 1;
   VAR_4->pg_pga_gain = 2;
  } else if (VAR_1 >= 0x12) {
   VAR_4->pg_lna_lod_gain = 1;
   VAR_4->pg_pga_gain = 1;
  } else if (VAR_1 >= 0xf) {
   VAR_4->pg_lna_lod_gain = 1;
   VAR_4->pg_pga_gain = 0;
  } else {
   VAR_4->pg_lna_lod_gain = 0;
   VAR_4->pg_pga_gain = 0;
  }
 }

 VAR_5 = FUNC_1(VAR_0, 0x7a);
 if (VAR_4->pg_lna_lod_gain == 0)
  VAR_5 &= ~0x0008;
 else
  VAR_5 |= 0x0008;
 FUNC_2(VAR_0, 0x7a, VAR_5);
}
