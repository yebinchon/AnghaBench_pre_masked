
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * reset; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_1)
{
 s32 VAR_2;
 bool VAR_3;

 FUNC_0("ixgbe_setup_sfp_modules_X550em");


 VAR_2 = FUNC_2(VAR_1, &VAR_3);

 if (VAR_2 != VAR_0)
  return VAR_2;

 FUNC_1(VAR_1);
 VAR_1->phy.ops.reset = ((void*)0);

 return VAR_0;
}
