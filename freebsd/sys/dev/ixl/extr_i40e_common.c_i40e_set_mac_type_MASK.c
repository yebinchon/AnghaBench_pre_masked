
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct i40e_hw {scalar_t__ vendor_id; int device_id; TYPE_1__ mac; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_8)
{
 enum i40e_status_code VAR_9 = VAR_7;

 FUNC_0("i40e_set_mac_type\n");

 if (VAR_8->vendor_id == VAR_1) {
  switch (VAR_8->device_id) {
  case 131:
  case 138:
  case 141:
  case 140:
  case 137:
  case 136:
  case 135:
  case 150:
  case 149:
  case 146:
  case 145:
  case 144:
  case 143:
   VAR_8->mac.type = VAR_6;
   break;
  case 139:
  case 134:
  case 132:
  case 147:
  case 148:
  case 133:
   VAR_8->mac.type = VAR_4;
   break;
  case 128:
   VAR_8->mac.type = VAR_5;
   break;
  case 130:
  case 129:
  case 142:
   VAR_8->mac.type = VAR_3;
   break;
  default:
   VAR_8->mac.type = VAR_2;
   break;
  }
 } else {
  VAR_9 = VAR_0;
 }

 FUNC_1("i40e_set_mac_type found mac: %d, returns: %d\n",
    VAR_8->mac.type, VAR_9);
 return VAR_9;
}
