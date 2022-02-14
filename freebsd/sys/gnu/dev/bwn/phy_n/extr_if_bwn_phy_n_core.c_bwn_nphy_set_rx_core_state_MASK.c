
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bwn_phy_n {int phyrxchain; scalar_t__ hang_avoid; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwn_mac*,int ,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int VAR_4 ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int ) ;
 int FUNC_5 (struct bwn_mac*,int) ;

__attribute__((used)) static void FUNC_6(struct bwn_mac *VAR_5, uint8_t VAR_6)
{
 struct bwn_phy *VAR_7 = &VAR_5->mac_phy;
 struct bwn_phy_n *VAR_8 = VAR_7->phy_n;


 VAR_8->phyrxchain = VAR_6;

 if (0 )
  return;

 FUNC_3(VAR_5);

 if (VAR_8->hang_avoid)
  FUNC_5(VAR_5, 1);

 FUNC_0(VAR_5, VAR_1, ~VAR_2,
   (VAR_6 & 0x3) << VAR_3);

 if ((VAR_6 & 0x3) != 0x3) {
  FUNC_1(VAR_5, VAR_0, 1);
  if (VAR_5->mac_phy.rev >= 3) {

  }
 } else {
  FUNC_1(VAR_5, VAR_0, 0x1E);
  if (VAR_5->mac_phy.rev >= 3) {

  }
 }

 FUNC_4(VAR_5, VAR_4);

 if (VAR_8->hang_avoid)
  FUNC_5(VAR_5, 0);

 FUNC_2(VAR_5);
}
