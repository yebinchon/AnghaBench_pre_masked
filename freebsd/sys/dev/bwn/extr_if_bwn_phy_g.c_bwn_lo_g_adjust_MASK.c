
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_rfatt {int dummy; } ;
struct bwn_phy_g {int pg_bbatt; int pg_rfatt; } ;
struct TYPE_2__ {struct bwn_phy_g phy_g; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
struct bwn_lo_calib {int ctl; } ;
typedef int rf ;


 int FUNC_0 (struct bwn_rfatt*) ;
 struct bwn_lo_calib* FUNC_1 (struct bwn_mac*,int *,struct bwn_rfatt*) ;
 int FUNC_2 (struct bwn_mac*,int *) ;
 int FUNC_3 (struct bwn_rfatt*,int *,int) ;

__attribute__((used)) static void
FUNC_4(struct bwn_mac *VAR_0)
{
 struct bwn_phy_g *VAR_1 = &VAR_0->mac_phy.phy_g;
 struct bwn_lo_calib *VAR_2;
 struct bwn_rfatt VAR_3;

 FUNC_3(&VAR_3, &VAR_1->pg_rfatt, sizeof(VAR_3));
 FUNC_0(&VAR_3);

 VAR_2 = FUNC_1(VAR_0, &VAR_1->pg_bbatt, &VAR_3);
 if (!VAR_2)
  return;
 FUNC_2(VAR_0, &VAR_2->ctl);
}
