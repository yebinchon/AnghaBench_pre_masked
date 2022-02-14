
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mdix; } ;
struct TYPE_3__ {int autoneg; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_2)
{
 FUNC_0("e1000_validate_mdi_setting_generic");

 if (!VAR_2->mac.autoneg && (VAR_2->phy.mdix == 0 || VAR_2->phy.mdix == 3)) {
  FUNC_1("Invalid MDI setting detected\n");
  VAR_2->phy.mdix = 1;
  return -VAR_0;
 }

 return VAR_1;
}
