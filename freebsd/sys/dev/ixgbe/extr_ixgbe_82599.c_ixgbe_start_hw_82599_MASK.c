
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int autotry_restart; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_2)
{
 s32 VAR_3 = VAR_0;

 FUNC_0("ixgbe_start_hw_82599");

 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != VAR_0)
  goto out;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 != VAR_0)
  goto out;


 VAR_2->mac.autotry_restart = VAR_1;

 if (VAR_3 == VAR_0)
  VAR_3 = FUNC_3(VAR_2);
out:
 return VAR_3;
}
