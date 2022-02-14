
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int) ;
 int FUNC_2 (struct ixgbe_hw*,int) ;

s32 FUNC_3(struct ixgbe_hw *VAR_2, u32 VAR_3)
{
 s32 VAR_4;

 FUNC_0("ixgbe_acquire_swfw_sync_X550em");

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 if (VAR_3 & VAR_0)
  FUNC_2(VAR_2, 1);

 return VAR_1;
}
