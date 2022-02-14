
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int mdio_port_num; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixl_pf*,int ,char*) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

s32
FUNC_5(struct ixl_pf *VAR_4, u8 VAR_5,
    u8 VAR_6, u8 *VAR_7)
{
 struct i40e_hw *VAR_8 = &VAR_4->hw;
 u32 VAR_9 = 0;
 s32 VAR_10;
 *VAR_7 = 0;

 VAR_9 |= (VAR_5 << VAR_2);
 VAR_9 |= (((VAR_6 >> 1) & 0x7) << VAR_1);
 VAR_9 |= VAR_0;
 FUNC_4(VAR_8, FUNC_0(VAR_8->func_caps.mdio_port_num), VAR_9);

 VAR_10 = FUNC_2(VAR_8, VAR_8->func_caps.mdio_port_num);


 VAR_9 = FUNC_3(VAR_8, FUNC_0(VAR_8->func_caps.mdio_port_num));


 *VAR_7 = (u8)(VAR_9 & 0xff);

 if (VAR_10)
  FUNC_1(VAR_4, VAR_3, "I2C byte read error\n");
 return VAR_10;
}
