
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwi_phy {int phy_flags; } ;
struct bwi_mac {struct bwi_phy mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bwi_mac*,int) ;
 int FUNC_2 (struct bwi_mac*,int,int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct bwi_mac *VAR_1, uint16_t VAR_2)
{
 struct bwi_phy *VAR_3 = &VAR_1->mac_phy;
 uint32_t VAR_4 = 0;
 int VAR_5;

 if (VAR_3->phy_flags & VAR_0)
  VAR_2 <<= 8;

 for (VAR_5 = 0; VAR_5 < 8; ++VAR_5) {
  if (VAR_3->phy_flags & VAR_0) {
   FUNC_2(VAR_1, 0x15, 0xe300);
   FUNC_2(VAR_1, 0x812, VAR_2 | 0xb0);
   FUNC_0(5);
   FUNC_2(VAR_1, 0x812, VAR_2 | 0xb2);
   FUNC_0(2);
   FUNC_2(VAR_1, 0x812, VAR_2 | 0xb3);
   FUNC_0(4);
   FUNC_2(VAR_1, 0x15, 0xf300);
  } else {
   FUNC_2(VAR_1, 0x15, VAR_2 | 0xefa0);
   FUNC_0(2);
   FUNC_2(VAR_1, 0x15, VAR_2 | 0xefe0);
   FUNC_0(4);
   FUNC_2(VAR_1, 0x15, VAR_2 | 0xffe0);
  }
  FUNC_0(8);
  VAR_4 += FUNC_1(VAR_1, 0x2d);
 }
 return VAR_4;
}
