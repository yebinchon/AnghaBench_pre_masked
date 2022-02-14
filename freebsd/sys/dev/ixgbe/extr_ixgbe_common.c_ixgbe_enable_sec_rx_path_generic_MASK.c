
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;

s32 FUNC_4(struct ixgbe_hw *VAR_3)
{
 u32 VAR_4;

 FUNC_0("ixgbe_enable_sec_rx_path_generic");

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 VAR_4 &= ~VAR_1;
 FUNC_3(VAR_3, VAR_0, VAR_4);
 FUNC_2(VAR_3);

 return VAR_2;
}
