
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sfp_type; } ;
struct ixgbe_hw {TYPE_1__ phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_5, bool *VAR_6)
{
 FUNC_0("ixgbe_supported_sfp_modules_X550em");

 switch (VAR_5->phy.sfp_type) {
 case 131:
  return VAR_1;
 case 133:
 case 132:
  *VAR_6 = VAR_4;
  break;
 case 130:
 case 129:
 case 135:
 case 134:
 case 137:
 case 136:
 case 139:
 case 138:
  *VAR_6 = VAR_0;
  break;
 case 128:
 case 141:
 case 140:
 default:
  return VAR_2;
 }

 return VAR_3;
}
