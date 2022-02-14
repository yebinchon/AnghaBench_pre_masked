
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bwn_phy_n {TYPE_1__* pwr_ctl_info; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
typedef int int32_t ;
struct TYPE_2__ {int idle_tssi_5g; int idle_tssi_2g; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int ,int *,int) ;
 int FUNC_5 (struct bwn_mac*,int,int ,int,int) ;
 int FUNC_6 (struct bwn_mac*,int,int ,int,int,int ) ;
 int FUNC_7 (struct bwn_mac*,int,int ,int,int,int ) ;
 int FUNC_8 (struct bwn_mac*,int ,int ) ;
 int FUNC_9 (struct bwn_mac*) ;
 int FUNC_10 (struct bwn_mac*,int,int ,int,int,int) ;

__attribute__((used)) static void FUNC_11(struct bwn_mac *VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_2->mac_phy;
 struct bwn_phy_n *VAR_4 = VAR_2->mac_phy.phy_n;

 uint32_t VAR_5;
 int32_t VAR_6[4] = { };

 if (FUNC_1(VAR_2))
  return;

 if (FUNC_2(VAR_2))
  FUNC_3(VAR_2);

 if (VAR_3->rev >= 19)
  FUNC_6(VAR_2, 0x1000, 0, 3, 0, 0);
 else if (VAR_3->rev >= 7)
  FUNC_7(VAR_2, 0x1000, 0, 3, 0, 0);
 else if (VAR_3->rev >= 3)
  FUNC_5(VAR_2, 0x2000, 0, 3, 0);

 FUNC_9(VAR_2);
 FUNC_10(VAR_2, 4000, 0, 0, 0, 0);
 FUNC_0(20);
 VAR_5 = FUNC_4(VAR_2, VAR_0, VAR_6, 1);
 FUNC_9(VAR_2);

 FUNC_8(VAR_2, 0, VAR_1);

 if (VAR_3->rev >= 19)
  FUNC_6(VAR_2, 0x1000, 0, 3, 1, 0);
 else if (VAR_3->rev >= 7)
  FUNC_7(VAR_2, 0x1000, 0, 3, 1, 0);
 else if (VAR_3->rev >= 3)
  FUNC_5(VAR_2, 0x2000, 0, 3, 1);

 if (VAR_3->rev >= 19) {

  return;
 } else if (VAR_3->rev >= 3) {
  VAR_4->pwr_ctl_info[0].idle_tssi_5g = (VAR_5 >> 24) & 0xFF;
  VAR_4->pwr_ctl_info[1].idle_tssi_5g = (VAR_5 >> 8) & 0xFF;
 } else {
  VAR_4->pwr_ctl_info[0].idle_tssi_5g = (VAR_5 >> 16) & 0xFF;
  VAR_4->pwr_ctl_info[1].idle_tssi_5g = VAR_5 & 0xFF;
 }
 VAR_4->pwr_ctl_info[0].idle_tssi_2g = (VAR_5 >> 24) & 0xFF;
 VAR_4->pwr_ctl_info[1].idle_tssi_2g = (VAR_5 >> 8) & 0xFF;
}
