
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_phy_n {int dummy; } ;
struct bwn_phy {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_phy_n*,int ) ;

void
FUNC_1(struct bwn_mac *VAR_1)
{
 struct bwn_phy *VAR_2 = &VAR_1->mac_phy;
 struct bwn_phy_n *VAR_3 = VAR_2->phy_n;

 FUNC_0(VAR_3, VAR_0);
 VAR_2->phy_n = ((void*)0);
}
