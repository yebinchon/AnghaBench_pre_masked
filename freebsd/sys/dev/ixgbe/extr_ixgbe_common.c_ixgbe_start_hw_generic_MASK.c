
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int (* get_device_caps ) (struct ixgbe_hw*,int*) ;int (* clear_hw_cntrs ) (struct ixgbe_hw*) ;int (* clear_vfta ) (struct ixgbe_hw*) ;int (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int type; TYPE_2__ ops; } ;
struct TYPE_4__ {int media_type; } ;
struct ixgbe_hw {void* adapter_stopped; void* need_crosstalk_fix; TYPE_3__ mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ) ;
 void* VAR_6 ;



 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 int FUNC_7 (struct ixgbe_hw*) ;
 int FUNC_8 (struct ixgbe_hw*) ;
 int FUNC_9 (struct ixgbe_hw*,int*) ;

s32 FUNC_10(struct ixgbe_hw *VAR_7)
{
 s32 VAR_8;
 u32 VAR_9;
 u16 VAR_10;

 FUNC_0("ixgbe_start_hw_generic");


 VAR_7->phy.media_type = VAR_7->mac.ops.get_media_type(VAR_7);




 VAR_7->mac.ops.clear_vfta(VAR_7);


 VAR_7->mac.ops.clear_hw_cntrs(VAR_7);


 VAR_9 = FUNC_2(VAR_7, VAR_1);
 VAR_9 |= VAR_2;
 FUNC_4(VAR_7, VAR_1, VAR_9);
 FUNC_3(VAR_7);


 VAR_8 = FUNC_5(VAR_7);
 if (VAR_8 != VAR_5 && VAR_8 != VAR_4) {
  FUNC_1("Flow control setup failed, returning %d\n", VAR_8);
  return VAR_8;
 }


 switch (VAR_7->mac.type) {
 case 130:
 case 128:
 case 129:
  VAR_7->mac.ops.get_device_caps(VAR_7, &VAR_10);
  if (VAR_10 & VAR_3)
   VAR_7->need_crosstalk_fix = VAR_0;
  else
   VAR_7->need_crosstalk_fix = VAR_6;
  break;
 default:
  VAR_7->need_crosstalk_fix = VAR_0;
  break;
 }


 VAR_7->adapter_stopped = VAR_0;

 return VAR_5;
}
