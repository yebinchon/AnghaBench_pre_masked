
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwi_phy {scalar_t__ phy_tbl_data_lo; scalar_t__ phy_tbl_data_hi; scalar_t__ phy_tbl_ctrl; } ;
struct bwi_mac {struct bwi_phy mac_phy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_mac*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct bwi_mac *VAR_0, uint16_t VAR_1, uint32_t VAR_2)
{
 struct bwi_phy *VAR_3 = &VAR_0->mac_phy;

 FUNC_0(VAR_3->phy_tbl_data_lo != 0 && VAR_3->phy_tbl_data_hi != 0 &&
   VAR_3->phy_tbl_ctrl != 0,
     ("phy_tbl_data_lo %d phy_tbl_data_hi %d phy_tbl_ctrl %d",
       VAR_3->phy_tbl_data_lo, VAR_3->phy_tbl_data_hi, VAR_3->phy_tbl_ctrl));

 FUNC_1(VAR_0, VAR_3->phy_tbl_ctrl, VAR_1);
 FUNC_1(VAR_0, VAR_3->phy_tbl_data_hi, VAR_2 >> 16);
 FUNC_1(VAR_0, VAR_3->phy_tbl_data_lo, VAR_2 & 0xffff);
}
