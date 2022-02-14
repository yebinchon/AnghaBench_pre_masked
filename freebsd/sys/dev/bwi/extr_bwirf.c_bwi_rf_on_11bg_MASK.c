
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_phy {int phy_flags; } ;
struct bwi_mac {struct bwi_phy mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_mac*,int,int) ;
 int FUNC_1 (struct bwi_mac*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bwi_mac *VAR_1)
{
 struct bwi_phy *VAR_2 = &VAR_1->mac_phy;

 FUNC_0(VAR_1, 0x15, 0x8000);
 FUNC_0(VAR_1, 0x15, 0xcc00);
 if (VAR_2->phy_flags & VAR_0)
  FUNC_0(VAR_1, 0x15, 0xc0);
 else
  FUNC_0(VAR_1, 0x15, 0);

 FUNC_1(VAR_1, 6 , 1);
}
