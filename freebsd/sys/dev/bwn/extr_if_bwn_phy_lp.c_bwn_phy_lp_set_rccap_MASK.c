
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bwn_phy_lp {int plp_rccap; } ;
struct TYPE_2__ {int rev; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_3)
{
 struct bwn_phy_lp *VAR_4 = &VAR_3->mac_phy.phy_lp;
 uint8_t VAR_5 = (VAR_4->plp_rccap & 0x1f) >> 1;

 if (VAR_3->mac_phy.rev == 1)
  VAR_5 = FUNC_2(VAR_5 + 5, 15);

 FUNC_0(VAR_3, VAR_0,
     FUNC_1(VAR_4->plp_rccap - 4, 0x80));
 FUNC_0(VAR_3, VAR_1, VAR_5 | 0x80);
 FUNC_0(VAR_3, VAR_2,
     ((VAR_4->plp_rccap & 0x1f) >> 2) | 0x80);
}
