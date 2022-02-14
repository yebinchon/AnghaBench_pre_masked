
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int multispeed_fiber; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
typedef enum ixgbe_media_type { ____Placeholder_ixgbe_media_type } ixgbe_media_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;



enum ixgbe_media_type FUNC_1(struct ixgbe_hw *VAR_8)
{
 enum ixgbe_media_type VAR_9;

 FUNC_0("ixgbe_get_media_type_82599");


 switch (VAR_8->phy.type) {
 case 129:
 case 128:
  VAR_9 = VAR_2;
  goto out;
 default:
  break;
 }

 switch (VAR_8->device_id) {
 case 139:
 case 138:
 case 142:
 case 140:
 case 144:
 case 130:

  VAR_9 = VAR_1;
  break;
 case 136:
 case 134:
 case 135:
 case 133:
 case 132:
 case 145:
  VAR_9 = VAR_4;
  break;
 case 141:
  VAR_9 = VAR_3;
  break;
 case 131:
  VAR_9 = VAR_2;
  break;
 case 137:
  VAR_9 = VAR_6;
  break;
 case 143:
  VAR_9 = VAR_5;
  VAR_8->phy.multispeed_fiber = VAR_0;
  break;
 default:
  VAR_9 = VAR_7;
  break;
 }
out:
 return VAR_9;
}
