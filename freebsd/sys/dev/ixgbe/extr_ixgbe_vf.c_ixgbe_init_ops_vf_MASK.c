
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int init_params; } ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_5__ {int set_rlpml; int set_vfta; int * clear_vfta; int * disable_mc; int * enable_mc; int update_xcast_mode; int update_mc_addr_list; int * init_rx_addrs; int set_uc_addr; int set_rar; int * get_link_capabilities; int check_link; int setup_link; int negotiate_api_version; int * get_bus_info; int stop_adapter; int get_mac_addr; int * get_media_type; int * clear_hw_cntrs; int start_hw; int reset_hw; int init_hw; } ;
struct TYPE_6__ {int max_tx_queues; int max_rx_queues; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_4__ mbx; TYPE_2__ mac; } ;
typedef int s32 ;


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

s32 FUNC_0(struct ixgbe_hw *VAR_16)
{

 VAR_16->mac.ops.init_hw = VAR_3;
 VAR_16->mac.ops.reset_hw = VAR_5;
 VAR_16->mac.ops.start_hw = VAR_9;

 VAR_16->mac.ops.clear_hw_cntrs = ((void*)0);
 VAR_16->mac.ops.get_media_type = ((void*)0);
 VAR_16->mac.ops.get_mac_addr = VAR_2;
 VAR_16->mac.ops.stop_adapter = VAR_10;
 VAR_16->mac.ops.get_bus_info = ((void*)0);
 VAR_16->mac.ops.negotiate_api_version = VAR_12;


 VAR_16->mac.ops.setup_link = VAR_8;
 VAR_16->mac.ops.check_link = VAR_1;
 VAR_16->mac.ops.get_link_capabilities = ((void*)0);


 VAR_16->mac.ops.set_rar = VAR_6;
 VAR_16->mac.ops.set_uc_addr = VAR_14;
 VAR_16->mac.ops.init_rx_addrs = ((void*)0);
 VAR_16->mac.ops.update_mc_addr_list = VAR_11;
 VAR_16->mac.ops.update_xcast_mode = VAR_15;
 VAR_16->mac.ops.enable_mc = ((void*)0);
 VAR_16->mac.ops.disable_mc = ((void*)0);
 VAR_16->mac.ops.clear_vfta = ((void*)0);
 VAR_16->mac.ops.set_vfta = VAR_7;
 VAR_16->mac.ops.set_rlpml = VAR_13;

 VAR_16->mac.max_tx_queues = 1;
 VAR_16->mac.max_rx_queues = 1;

 VAR_16->mbx.ops.init_params = VAR_4;

 return VAR_0;
}
