
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phy_type; } ;
struct TYPE_4__ {TYPE_1__ link_info; } ;
struct i40e_hw {TYPE_2__ phy; } ;
typedef enum i40e_media_type { ____Placeholder_i40e_media_type } i40e_media_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
__attribute__((used)) static enum i40e_media_type FUNC_0(struct i40e_hw *VAR_5)
{
 enum i40e_media_type VAR_6;

 switch (VAR_5->phy.link_info.phy_type) {
 case 147:
 case 149:
 case 157:
 case 158:
 case 133:
 case 134:
 case 140:
 case 139:
  VAR_6 = VAR_3;
  break;
 case 155:
 case 156:
 case 146:
  VAR_6 = VAR_1;
  break;
 case 152:
 case 136:
 case 153:
 case 137:
 case 148:
 case 138:
 case 154:
 case 142:
 case 143:
 case 144:
  VAR_6 = VAR_2;
  break;
 case 159:
 case 150:
 case 151:
 case 135:
 case 145:
 case 141:
  VAR_6 = VAR_0;
  break;
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 default:
  VAR_6 = VAR_4;
  break;
 }

 return VAR_6;
}
