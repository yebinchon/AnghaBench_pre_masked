
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct bwn_phy_lp {int plp_crsusr_off; int plp_crssys_off; } ;
struct TYPE_2__ {struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_1, uint8_t VAR_2)
{
 struct bwn_phy_lp *VAR_3 = &VAR_1->mac_phy.phy_lp;

 if (VAR_2)
  VAR_3->plp_crsusr_off = 1;
 else
  VAR_3->plp_crssys_off = 1;

 FUNC_0(VAR_1, VAR_0, 0xff1f, 0x80);
}
