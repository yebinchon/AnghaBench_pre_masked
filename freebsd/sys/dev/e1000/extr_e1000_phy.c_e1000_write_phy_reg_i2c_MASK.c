
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_phy_info {int addr; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct e1000_hw*,int ) ;
 int VAR_9 ;
 int FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (int) ;

s32 FUNC_6(struct e1000_hw *VAR_10, u32 VAR_11, u16 VAR_12)
{
 struct e1000_phy_info *VAR_13 = &VAR_10->phy;
 u32 VAR_14, VAR_15 = 0;
 u16 VAR_16;

 FUNC_0("e1000_write_phy_reg_i2c");


 if ((VAR_10->phy.addr == 0) || (VAR_10->phy.addr > 7)) {
  FUNC_2("PHY I2C Address %d is out of range.\n",
     VAR_10->phy.addr);
  return -VAR_0;
 }


 VAR_16 = ((VAR_12 >> 8) & 0x00FF) | ((VAR_12 << 8) & 0xFF00);





 VAR_15 = ((VAR_11 << VAR_8) |
    (VAR_13->addr << VAR_5) |
    VAR_4 |
    VAR_16);

 FUNC_4(VAR_10, VAR_2, VAR_15);


 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  FUNC_5(50);
  VAR_15 = FUNC_3(VAR_10, VAR_2);
  if (VAR_15 & VAR_7)
   break;
 }
 if (!(VAR_15 & VAR_7)) {
  FUNC_1("I2CCMD Write did not complete\n");
  return -VAR_1;
 }
 if (VAR_15 & VAR_3) {
  FUNC_1("I2CCMD Error bit set\n");
  return -VAR_1;
 }

 return VAR_9;
}
