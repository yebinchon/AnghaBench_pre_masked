
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;

s32 FUNC_4(struct ixgbe_hw *VAR_1, u8 *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u16 VAR_5;

 FUNC_0("ixgbe_get_mac_addr_generic");

 VAR_3 = FUNC_3(VAR_1, FUNC_1(0));
 VAR_4 = FUNC_3(VAR_1, FUNC_2(0));

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  VAR_2[VAR_5] = (u8)(VAR_4 >> (VAR_5*8));

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++)
  VAR_2[VAR_5+4] = (u8)(VAR_3 >> (VAR_5*8));

 return VAR_0;
}
