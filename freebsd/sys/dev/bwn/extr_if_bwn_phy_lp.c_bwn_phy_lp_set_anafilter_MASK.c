
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy_lp {scalar_t__ plp_rccap; } ;
struct TYPE_2__ {int rev; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int ,int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_2, uint8_t VAR_3)
{
 struct bwn_phy_lp *VAR_4 = &VAR_2->mac_phy.phy_lp;
 uint16_t VAR_5 = (VAR_3 == 14);

 if (VAR_2->mac_phy.rev < 2) {
  FUNC_0(VAR_2, VAR_1, 0xfcff, VAR_5 << 9);
  if ((VAR_2->mac_phy.rev == 1) && (VAR_4->plp_rccap))
   FUNC_2(VAR_2);
  return;
 }

 FUNC_1(VAR_2, VAR_0, 0x3f);
}
