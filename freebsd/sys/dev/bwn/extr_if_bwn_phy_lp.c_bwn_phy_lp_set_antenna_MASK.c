
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_phy_lp {int plp_antenna; } ;
struct bwn_phy {int rev; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ,int,int) ;
 int FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (struct bwn_mac*,int) ;

void
FUNC_3(struct bwn_mac *VAR_3, int VAR_4)
{
 struct bwn_phy *VAR_5 = &VAR_3->mac_phy;
 struct bwn_phy_lp *VAR_6 = &VAR_5->phy_lp;

 if (VAR_5->rev >= 2 || VAR_4 > VAR_0)
  return;

 FUNC_2(VAR_3, FUNC_1(VAR_3) & ~VAR_1);
 FUNC_0(VAR_3, VAR_2, 0xfffd, VAR_4 & 0x2);
 FUNC_0(VAR_3, VAR_2, 0xfffe, VAR_4 & 0x1);
 FUNC_2(VAR_3, FUNC_1(VAR_3) | VAR_1);
 VAR_6->plp_antenna = VAR_4;
}
