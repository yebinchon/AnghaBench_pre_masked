
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*) ;

void FUNC_5(struct ixgbe_hw *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_2;

 FUNC_0("ixgbe_release_swfw_sync");

 FUNC_3(VAR_1);

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 VAR_3 &= ~VAR_4;
 FUNC_2(VAR_1, VAR_0, VAR_3);

 FUNC_4(VAR_1);
}
