
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_phy_lp {int plp_chan; } ;
struct bwn_phy {int rf_ver; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int ) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int FUNC_3 (struct bwn_mac*,int ) ;
 int FUNC_4 (struct bwn_mac*,int ) ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6(struct bwn_mac *VAR_1, uint32_t VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_1->mac_phy;
 struct bwn_phy_lp *VAR_4 = &VAR_3->phy_lp;
 int VAR_5;

 if (VAR_3->rf_ver == 0x2063) {
  VAR_5 = FUNC_2(VAR_1, VAR_2);
  if (VAR_5)
   return (VAR_5);
 } else {
  VAR_5 = FUNC_1(VAR_1, VAR_2);
  if (VAR_5)
   return (VAR_5);
  FUNC_3(VAR_1, VAR_2);
  FUNC_4(VAR_1, FUNC_5(VAR_2, 0));
 }

 VAR_4->plp_chan = VAR_2;
 FUNC_0(VAR_1, VAR_0, VAR_2);
 return (0);
}
