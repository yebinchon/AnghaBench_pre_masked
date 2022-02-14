
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* check_link ) (struct ixgbe_hw*,int *,int*,int) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct TYPE_6__ {int media_type; } ;
struct ixgbe_hw {int device_id; TYPE_2__ mac; TYPE_3__ phy; } ;
typedef int ixgbe_link_speed ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_2 (struct ixgbe_hw*,int *,int*,int) ;

bool FUNC_3(struct ixgbe_hw *VAR_5)
{
 bool VAR_6 = VAR_0;
 ixgbe_link_speed VAR_7;
 bool VAR_8;

 FUNC_0("ixgbe_device_supports_autoneg_fc");

 switch (VAR_5->phy.media_type) {
 case 129:
 case 128:
 case 130:

  switch (VAR_5->device_id) {
  case 137:
  case 136:
  case 139:
  case 138:
   VAR_6 = VAR_0;
   break;
  default:
   VAR_5->mac.ops.check_link(VAR_5, &VAR_7, &VAR_8, VAR_0);

   if (VAR_8)
    VAR_6 = VAR_7 == VAR_3 ?
    VAR_4 : VAR_0;
   else
    VAR_6 = VAR_4;
  }

  break;
 case 132:
  if (VAR_5->device_id == VAR_1)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_4;
  break;
 case 131:

  switch (VAR_5->device_id) {
  case 146:
  case 145:
  case 144:
  case 143:
  case 134:
  case 133:
  case 135:
  case 142:
  case 141:
  case 140:
   VAR_6 = VAR_4;
   break;
  default:
   VAR_6 = VAR_0;
  }
 default:
  break;
 }

 if (!VAR_6)
  FUNC_1(VAR_2,
         "Device %x does not support flow control autoneg",
         VAR_5->device_id);

 return VAR_6;
}
