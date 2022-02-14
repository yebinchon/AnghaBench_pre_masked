
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_if {int phy_config_aneg; int phy_status; int phy_stop; int phy_start; int phy_reset; int phy_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(struct xgbe_phy_if *VAR_6)
{
 VAR_6->phy_init = VAR_1;

 VAR_6->phy_reset = VAR_2;
 VAR_6->phy_start = VAR_3;
 VAR_6->phy_stop = VAR_5;

 VAR_6->phy_status = VAR_4;
 VAR_6->phy_config_aneg = VAR_0;
}
