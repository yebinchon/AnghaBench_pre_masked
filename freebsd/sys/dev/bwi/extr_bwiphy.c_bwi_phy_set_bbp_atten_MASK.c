
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_phy {int phy_version; } ;
struct bwi_mac {int mac_sc; struct bwi_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct bwi_mac*,int ,int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int) ;

void
FUNC_4(struct bwi_mac *VAR_2, uint16_t VAR_3)
{
 struct bwi_phy *VAR_4 = &VAR_2->mac_phy;
 uint16_t VAR_5 = FUNC_2(3, 0);

 if (VAR_4->phy_version == 0) {
  FUNC_0(VAR_2->mac_sc, VAR_0, ~VAR_5,
       FUNC_3(VAR_3, VAR_5));
 } else {
  if (VAR_4->phy_version > 1)
   VAR_5 <<= 2;
  else
   VAR_5 <<= 3;
  FUNC_1(VAR_2, VAR_1, ~VAR_5,
     FUNC_3(VAR_3, VAR_5));
 }
}
