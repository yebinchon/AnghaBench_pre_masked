
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_phy_g {int pg_flags; int * pg_tssi2dbm; } ;
struct TYPE_2__ {struct bwn_phy_g phy_g; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct bwn_mac *VAR_2)
{
 struct bwn_phy_g *VAR_3 = &VAR_2->mac_phy.phy_g;

 if (VAR_3->pg_flags & VAR_0) {
  FUNC_0(VAR_3->pg_tssi2dbm, VAR_1);
  VAR_3->pg_tssi2dbm = ((void*)0);
 }
 VAR_3->pg_flags = 0;
}
