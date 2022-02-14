
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;

s32 FUNC_3(struct ixgbe_hw *VAR_1)
{
 s32 VAR_2 = VAR_0;

 FUNC_0("ixgbe_start_hw_X540");

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != VAR_0)
  goto out;

 VAR_2 = FUNC_1(VAR_1);

out:
 return VAR_2;
}
