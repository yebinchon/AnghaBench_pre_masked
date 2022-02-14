
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_phy_info {scalar_t__ addr; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct e1000_hw*,int ,scalar_t__) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct e1000_hw *VAR_9, u32 VAR_10, u16 *VAR_11)
{
 struct e1000_phy_info *VAR_12 = &VAR_9->phy;
 u32 VAR_13, VAR_14 = 0;

 FUNC_0("e1000_read_phy_reg_i2c");





 VAR_14 = ((VAR_10 << VAR_7) |
    (VAR_12->addr << VAR_4) |
    (VAR_3));

 FUNC_3(VAR_9, VAR_1, VAR_14);


 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  FUNC_4(50);
  VAR_14 = FUNC_2(VAR_9, VAR_1);
  if (VAR_14 & VAR_6)
   break;
 }
 if (!(VAR_14 & VAR_6)) {
  FUNC_1("I2CCMD Read did not complete\n");
  return -VAR_0;
 }
 if (VAR_14 & VAR_2) {
  FUNC_1("I2CCMD Error bit set\n");
  return -VAR_0;
 }


 *VAR_11 = ((VAR_14 >> 8) & 0x00FF) | ((VAR_14 << 8) & 0xFF00);

 return VAR_8;
}
