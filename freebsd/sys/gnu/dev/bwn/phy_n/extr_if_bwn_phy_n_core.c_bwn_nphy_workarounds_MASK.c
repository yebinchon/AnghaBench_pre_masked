
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_phy_n {scalar_t__ hang_avoid; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (struct bwn_mac*,int) ;
 int FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*) ;

__attribute__((used)) static int FUNC_7(struct bwn_mac *VAR_4)
{
 struct bwn_phy *VAR_5 = &VAR_4->mac_phy;
 struct bwn_phy_n *VAR_6 = VAR_5->phy_n;
 int VAR_7;

 if (FUNC_1(VAR_4) == VAR_0)
  FUNC_2(VAR_4, 1, 0);
 else
  FUNC_2(VAR_4, 1, 1);

 if (VAR_6->hang_avoid)
  FUNC_3(VAR_4, 1);

 FUNC_0(VAR_4, VAR_1,
      VAR_2 | VAR_3);


 if (VAR_4->mac_phy.rev >= 7)
  VAR_7 = FUNC_6(VAR_4);
 else if (VAR_4->mac_phy.rev >= 3)
  VAR_7 = FUNC_5(VAR_4);
 else
  VAR_7 = FUNC_4(VAR_4);

 if (VAR_7)
  return (VAR_7);

 if (VAR_6->hang_avoid)
  FUNC_3(VAR_4, 0);

 return (0);
}
