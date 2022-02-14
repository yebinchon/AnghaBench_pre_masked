
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ mdio_port_num; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i40e_hw*,int ) ;

u8 FUNC_2(struct i40e_hw *VAR_0, u8 VAR_1)
{
 u8 VAR_2 = (u8)VAR_0->func_caps.mdio_port_num;
 u32 VAR_3 = FUNC_1(VAR_0, FUNC_0(VAR_2));

 return (u8)(VAR_3 >> ((VAR_1 + 1) * 5)) & 0x1f;
}
