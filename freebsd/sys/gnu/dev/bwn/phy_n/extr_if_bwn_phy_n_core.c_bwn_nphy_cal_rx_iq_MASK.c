
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct bwn_nphy_txgains {int dummy; } ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*,struct bwn_nphy_txgains,scalar_t__,int) ;
 int FUNC_1 (struct bwn_mac*,struct bwn_nphy_txgains,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct bwn_mac *VAR_0,
   struct bwn_nphy_txgains VAR_1, uint8_t VAR_2, bool VAR_3)
{
 if (VAR_0->mac_phy.rev >= 7)
  VAR_2 = 0;

 if (VAR_0->mac_phy.rev >= 3)
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
