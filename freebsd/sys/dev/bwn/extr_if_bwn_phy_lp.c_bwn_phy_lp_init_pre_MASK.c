
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_phy_lp {int plp_antenna; } ;
struct bwn_phy {struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;

void
FUNC_0(struct bwn_mac *VAR_1)
{
 struct bwn_phy *VAR_2 = &VAR_1->mac_phy;
 struct bwn_phy_lp *VAR_3 = &VAR_2->phy_lp;

 VAR_3->plp_antenna = VAR_0;
}
