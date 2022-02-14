
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int check_overtemp; int write_i2c_byte_unlocked; int read_i2c_byte_unlocked; int identify_sfp; int i2c_bus_clear; int write_i2c_eeprom; int read_i2c_eeprom; int read_i2c_sff8472; int write_i2c_byte; int read_i2c_byte; int get_firmware_version; int * check_link; int setup_link_speed; int setup_link; int write_reg_mdi; int read_reg_mdi; int write_reg; int read_reg; int reset; int identify; } ;
struct ixgbe_phy_info {TYPE_1__ ops; int sfp_type; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

s32 FUNC_1(struct ixgbe_hw *VAR_21)
{
 struct ixgbe_phy_info *VAR_22 = &VAR_21->phy;

 FUNC_0("ixgbe_init_phy_ops_generic");


 VAR_22->ops.identify = VAR_4;
 VAR_22->ops.reset = VAR_11;
 VAR_22->ops.read_reg = VAR_9;
 VAR_22->ops.write_reg = VAR_19;
 VAR_22->ops.read_reg_mdi = VAR_10;
 VAR_22->ops.write_reg_mdi = VAR_20;
 VAR_22->ops.setup_link = VAR_12;
 VAR_22->ops.setup_link_speed = VAR_13;
 VAR_22->ops.check_link = ((void*)0);
 VAR_22->ops.get_firmware_version = VAR_1;
 VAR_22->ops.read_i2c_byte = VAR_5;
 VAR_22->ops.write_i2c_byte = VAR_16;
 VAR_22->ops.read_i2c_sff8472 = VAR_8;
 VAR_22->ops.read_i2c_eeprom = VAR_7;
 VAR_22->ops.write_i2c_eeprom = VAR_18;
 VAR_22->ops.i2c_bus_clear = VAR_2;
 VAR_22->ops.identify_sfp = VAR_3;
 VAR_22->sfp_type = VAR_14;
 VAR_22->ops.read_i2c_byte_unlocked = VAR_6;
 VAR_22->ops.write_i2c_byte_unlocked =
    VAR_17;
 VAR_22->ops.check_overtemp = VAR_15;
 return VAR_0;
}
