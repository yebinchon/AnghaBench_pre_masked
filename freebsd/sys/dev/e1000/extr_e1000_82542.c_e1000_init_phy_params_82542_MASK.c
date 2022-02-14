
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_phy_info {int type; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s32 FUNC_1(struct e1000_hw *VAR_2)
{
 struct e1000_phy_info *VAR_3 = &VAR_2->phy;
 s32 VAR_4 = VAR_0;

 FUNC_0("e1000_init_phy_params_82542");

 VAR_3->type = VAR_1;

 return VAR_4;
}
