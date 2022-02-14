
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ phy_do_full_init; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_5(struct bwn_mac *VAR_4)
{
 FUNC_1(VAR_4, VAR_2, 0x1);

 if (0)
  FUNC_1(VAR_4, VAR_2, 0x2);

 FUNC_1(VAR_4, VAR_1, 0x78);
 FUNC_1(VAR_4, VAR_3, 0x80);
 FUNC_2(2000);
 FUNC_0(VAR_4, VAR_1, ~0x78);
 FUNC_0(VAR_4, VAR_3, ~0x80);

 if (VAR_4->mac_phy.phy_do_full_init) {
  FUNC_3(VAR_4);
  FUNC_4(VAR_4);
 }
 FUNC_0(VAR_4, VAR_0, ~0x8);
}
