
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_phy {int phy_flags; scalar_t__ phy_mode; int phy_rev; } ;
struct bwi_mac {int mac_sc; struct bwi_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bwi_mac*,int) ;
 int FUNC_2 (struct bwi_mac*) ;

int
FUNC_3(struct bwi_mac *VAR_3)
{
 struct bwi_phy *VAR_4 = &VAR_3->mac_phy;


 FUNC_0(VAR_3->mac_sc, VAR_0);


 if (VAR_4->phy_flags & VAR_1)
  return 0;

 if (VAR_4->phy_mode == VAR_2 && VAR_4->phy_rev == 1) {
  FUNC_1(VAR_3, 0);
  FUNC_2(VAR_3);
  FUNC_1(VAR_3, 1);
 }

 VAR_4->phy_flags |= VAR_1;
 return 0;
}
