
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* reset_hw ) (struct ixgbe_hw*) ;scalar_t__ (* start_hw ) (struct ixgbe_hw*) ;int (* init_led_link_act ) (struct ixgbe_hw*) ;} ;
struct TYPE_3__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_2)
{
 s32 VAR_3;

 FUNC_0("ixgbe_init_hw_generic");


 VAR_3 = VAR_2->mac.ops.reset_hw(VAR_2);

 if (VAR_3 == VAR_1 || VAR_3 == VAR_0) {

  VAR_3 = VAR_2->mac.ops.start_hw(VAR_2);
 }


 if (VAR_2->mac.ops.init_led_link_act)
  VAR_2->mac.ops.init_led_link_act(VAR_2);

 if (VAR_3 != VAR_1)
  FUNC_1("Failed to initialize HW, STATUS = %d\n", VAR_3);

 return VAR_3;
}
