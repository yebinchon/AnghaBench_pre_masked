
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * set_phy_power; void* identify; int * get_firmware_version; int init; } ;
struct ixgbe_phy_info {TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int * setup_fc; int get_supported_physical_layer; int reset_hw; int get_link_capabilities; int setup_sfp; int get_bus_info; int * prot_autoc_write; int * prot_autoc_read; int * enable_sec_rx_path; int * disable_sec_rx_path; int * get_fcoe_boot_status; int * get_wwn_prefix; int * set_san_mac_addr; int * get_san_mac_addr; int * bypass_rd_eep; int * bypass_set; int * bypass_valid_rd; int * bypass_rw; } ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_8__ {int calc_checksum; int validate_checksum; int update_checksum; int write_buffer; int write; int read_buffer; int read; int init_params; } ;
struct ixgbe_eeprom_info {TYPE_4__ ops; } ;
struct ixgbe_hw {int device_id; TYPE_1__ bus; struct ixgbe_phy_info phy; struct ixgbe_eeprom_info eeprom; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;

s32 FUNC_5(struct ixgbe_hw *VAR_20)
{
 struct ixgbe_mac_info *VAR_21 = &VAR_20->mac;
 struct ixgbe_eeprom_info *VAR_22 = &VAR_20->eeprom;
 struct ixgbe_phy_info *VAR_23 = &VAR_20->phy;
 s32 VAR_24;

 FUNC_0("ixgbe_init_ops_X550EM");


 VAR_24 = FUNC_2(VAR_20);
 VAR_21->ops.bypass_rw = ((void*)0);
 VAR_21->ops.bypass_valid_rd = ((void*)0);
 VAR_21->ops.bypass_set = ((void*)0);
 VAR_21->ops.bypass_rd_eep = ((void*)0);


 VAR_21->ops.get_san_mac_addr = ((void*)0);
 VAR_21->ops.set_san_mac_addr = ((void*)0);
 VAR_21->ops.get_wwn_prefix = ((void*)0);
 VAR_21->ops.get_fcoe_boot_status = ((void*)0);


 VAR_21->ops.disable_sec_rx_path = ((void*)0);
 VAR_21->ops.enable_sec_rx_path = ((void*)0);


 VAR_21->ops.prot_autoc_read = ((void*)0);
 VAR_21->ops.prot_autoc_write = ((void*)0);


 VAR_20->bus.type = VAR_0;
 VAR_21->ops.get_bus_info = VAR_2;


 VAR_21->ops.get_media_type = FUNC_1;
 VAR_21->ops.setup_sfp = VAR_15;
 VAR_21->ops.get_link_capabilities = VAR_3;
 VAR_21->ops.reset_hw = VAR_12;
 VAR_21->ops.get_supported_physical_layer =
        VAR_4;

 if (VAR_21->ops.get_media_type(VAR_20) == VAR_9)
  VAR_21->ops.setup_fc = VAR_14;
 else
  VAR_21->ops.setup_fc = VAR_13;


 VAR_23->ops.init = VAR_8;
 switch (VAR_20->device_id) {
 case 130:
 case 129:
  VAR_21->ops.setup_fc = ((void*)0);
  VAR_23->ops.identify = VAR_5;
  VAR_23->ops.set_phy_power = ((void*)0);
  VAR_23->ops.get_firmware_version = ((void*)0);
  break;
 case 128:
  VAR_21->ops.setup_fc = ((void*)0);
  VAR_23->ops.identify = VAR_6;
  VAR_23->ops.set_phy_power = ((void*)0);
  break;
 default:
  VAR_23->ops.identify = VAR_6;
 }

 if (VAR_21->ops.get_media_type(VAR_20) != VAR_9)
  VAR_23->ops.set_phy_power = ((void*)0);



 VAR_22->ops.init_params = VAR_7;
 VAR_22->ops.read = VAR_10;
 VAR_22->ops.read_buffer = VAR_11;
 VAR_22->ops.write = VAR_18;
 VAR_22->ops.write_buffer = VAR_19;
 VAR_22->ops.update_checksum = VAR_16;
 VAR_22->ops.validate_checksum = VAR_17;
 VAR_22->ops.calc_checksum = VAR_1;

 return VAR_24;
}
