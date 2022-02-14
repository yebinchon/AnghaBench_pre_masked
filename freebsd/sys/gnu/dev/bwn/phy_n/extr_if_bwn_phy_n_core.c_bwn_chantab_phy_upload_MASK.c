
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_phy_n_sfo_cfg {int phy_bw6; int phy_bw5; int phy_bw4; int phy_bw3; int phy_bw2; int phy_bw1a; } ;
struct bwn_mac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bwn_mac*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct bwn_mac *VAR_6,
       const struct bwn_phy_n_sfo_cfg *VAR_7)
{
 FUNC_0(VAR_6, VAR_0, VAR_7->phy_bw1a);
 FUNC_0(VAR_6, VAR_1, VAR_7->phy_bw2);
 FUNC_0(VAR_6, VAR_2, VAR_7->phy_bw3);
 FUNC_0(VAR_6, VAR_3, VAR_7->phy_bw4);
 FUNC_0(VAR_6, VAR_4, VAR_7->phy_bw5);
 FUNC_0(VAR_6, VAR_5, VAR_7->phy_bw6);
}
