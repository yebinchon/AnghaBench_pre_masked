
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
typedef enum ixgbe_media_type { ____Placeholder_ixgbe_media_type } ixgbe_media_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



__attribute__((used)) static enum ixgbe_media_type FUNC_1(struct ixgbe_hw *VAR_5)
{
 enum ixgbe_media_type VAR_6;

 FUNC_0("ixgbe_get_media_type_82598");


 switch (VAR_5->phy.type) {
 case 129:
 case 128:
  VAR_6 = VAR_1;
  goto out;
 default:
  break;
 }


 switch (VAR_5->device_id) {
 case 141:
 case 133:

  VAR_6 = VAR_0;
  break;
 case 140:
 case 139:
 case 131:
 case 130:
 case 134:
 case 135:
  VAR_6 = VAR_3;
  break;
 case 136:
 case 132:
  VAR_6 = VAR_2;
  break;
 case 138:
 case 137:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = VAR_4;
  break;
 }
out:
 return VAR_6;
}
