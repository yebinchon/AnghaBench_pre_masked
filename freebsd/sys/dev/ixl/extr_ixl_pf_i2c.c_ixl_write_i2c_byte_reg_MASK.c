
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int mdio_port_num; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct ixl_pf {struct i40e_hw hw; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixl_pf*,int ,char*) ;
 scalar_t__ FUNC_2 (struct ixl_pf*,int,int,int*) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

s32
FUNC_6(struct ixl_pf *VAR_9, u8 VAR_10,
         u8 VAR_11, u8 VAR_12)
{
 struct i40e_hw *VAR_13 = &VAR_9->hw;
 s32 VAR_14 = VAR_7;
 u32 VAR_15 = 0;
 u8 VAR_16 = 0;
 u16 VAR_17 = 0;

 VAR_14 = FUNC_2(VAR_9, VAR_10 + 1, VAR_11, &VAR_16);
 VAR_17 = ((u16)VAR_16 << 8) | (u16)VAR_12;
 VAR_15 = FUNC_4(VAR_13, FUNC_0(VAR_13->func_caps.mdio_port_num));


 VAR_15 &= ~VAR_3;
 VAR_15 |= (((VAR_11 >> 1) & 0x7) << VAR_4);
 VAR_15 &= ~VAR_5;
 VAR_15 |= (VAR_10 << VAR_6);
 VAR_15 &= ~VAR_0;
 VAR_15 |= (VAR_17 << VAR_1);
 VAR_15 &= ~VAR_2;


 FUNC_5(VAR_13, FUNC_0(VAR_13->func_caps.mdio_port_num), VAR_15);

 VAR_14 = FUNC_3(VAR_13, VAR_13->func_caps.mdio_port_num);

 if (VAR_14)
  FUNC_1(VAR_9, VAR_8, "I2C byte write error\n");
 return VAR_14;
}
