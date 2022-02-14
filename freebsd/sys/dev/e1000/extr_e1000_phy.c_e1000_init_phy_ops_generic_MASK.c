
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* cfg_on_link_up; int write_i2c_byte; int read_i2c_byte; void* power_down; void* power_up; void* write_reg_page; void* write_reg_locked; void* write_reg; void* set_d3_lplu_state; void* set_d0_lplu_state; void* reset; void* release; void* read_reg_page; void* read_reg_locked; void* read_reg; int set_page; void* get_info; void* get_cable_length; void* get_cfg_done; void* force_speed_duplex; void* commit; void* check_reset_block; void* check_polarity; void* acquire; void* init_params; } ;
struct e1000_phy_info {TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;


 int FUNC_0 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_1(struct e1000_hw *VAR_8)
{
 struct e1000_phy_info *VAR_9 = &VAR_8->phy;
 FUNC_0("e1000_init_phy_ops_generic");


 VAR_9->ops.init_params = VAR_1;
 VAR_9->ops.acquire = VAR_1;
 VAR_9->ops.check_polarity = VAR_1;
 VAR_9->ops.check_reset_block = VAR_1;
 VAR_9->ops.commit = VAR_1;
 VAR_9->ops.force_speed_duplex = VAR_1;
 VAR_9->ops.get_cfg_done = VAR_1;
 VAR_9->ops.get_cable_length = VAR_1;
 VAR_9->ops.get_info = VAR_1;
 VAR_9->ops.set_page = VAR_4;
 VAR_9->ops.read_reg = VAR_3;
 VAR_9->ops.read_reg_locked = VAR_3;
 VAR_9->ops.read_reg_page = VAR_3;
 VAR_9->ops.release = VAR_2;
 VAR_9->ops.reset = VAR_1;
 VAR_9->ops.set_d0_lplu_state = VAR_0;
 VAR_9->ops.set_d3_lplu_state = VAR_0;
 VAR_9->ops.write_reg = VAR_5;
 VAR_9->ops.write_reg_locked = VAR_5;
 VAR_9->ops.write_reg_page = VAR_5;
 VAR_9->ops.power_up = VAR_2;
 VAR_9->ops.power_down = VAR_2;
 VAR_9->ops.read_i2c_byte = VAR_6;
 VAR_9->ops.write_i2c_byte = VAR_7;
 VAR_9->ops.cfg_on_link_up = VAR_1;
}
