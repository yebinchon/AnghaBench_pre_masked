
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_tx_gpd_cam_entry {int tx_gpd_cam_ctrl; scalar_t__ source_vlan_count_mask; scalar_t__ tunnel_control_mask; scalar_t__ l4_proto_idx_mask; scalar_t__ l3_proto_idx_mask; scalar_t__ source_vlan_count; scalar_t__ tunnel_control; scalar_t__ l4_proto_idx; scalar_t__ l3_proto_idx; } ;
struct TYPE_3__ {int tx_gpd_cam_data_1; int tx_gpd_cam_data_2; int tx_gpd_cam_mask_1; int tx_gpd_cam_mask_2; int tx_gpd_cam_ctrl; int tx_gpd_cam_addr; } ;
struct TYPE_4__ {TYPE_1__ tfw_v3; } ;


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
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_11, uint32_t VAR_12,
  struct al_eth_tx_gpd_cam_entry *VAR_13)
{
 uint64_t VAR_14;
 uint64_t VAR_15;

 VAR_14 = ((uint64_t)VAR_13->l3_proto_idx & VAR_3) <<
  VAR_4;
 VAR_14 |= ((uint64_t)VAR_13->l4_proto_idx & VAR_5) <<
  VAR_6;
 VAR_14 |= ((uint64_t)VAR_13->tunnel_control & VAR_9) <<
  VAR_10;
 VAR_14 |= ((uint64_t)VAR_13->source_vlan_count & VAR_7) <<
  VAR_8;
 VAR_15 = ((uint64_t)VAR_13->l3_proto_idx_mask & VAR_3) <<
  VAR_4;
 VAR_15 |= ((uint64_t)VAR_13->l4_proto_idx_mask & VAR_5) <<
  VAR_6;
 VAR_15 |= ((uint64_t)VAR_13->tunnel_control_mask & VAR_9) <<
  VAR_10;
 VAR_15 |= ((uint64_t)VAR_13->source_vlan_count_mask & VAR_7) <<
  VAR_8;


 FUNC_1(&VAR_11->ec_regs_base->tfw_v3.tx_gpd_cam_addr, VAR_12);
 FUNC_1(&VAR_11->ec_regs_base->tfw_v3.tx_gpd_cam_ctrl,
   (uint32_t)((VAR_13->tx_gpd_cam_ctrl) << VAR_0));
 FUNC_0("al_eth_tx_generic_crc_entry_set, line [%d], tx_gpd_cam_ctrl: %#x", VAR_12, VAR_13->tx_gpd_cam_ctrl);
 FUNC_1(&VAR_11->ec_regs_base->tfw_v3.tx_gpd_cam_mask_2,
   (uint32_t)(VAR_15 >> VAR_2));
 FUNC_0("al_eth_tx_generic_crc_entry_set, line [%d], tx_gpd_cam_mask_2: %#x", VAR_12, (uint32_t)(VAR_15 >> VAR_2));
 FUNC_1(&VAR_11->ec_regs_base->tfw_v3.tx_gpd_cam_mask_1,
   (uint32_t)(VAR_15));
 FUNC_0("al_eth_tx_generic_crc_entry_set, line [%d], tx_gpd_cam_mask_1: %#x", VAR_12, (uint32_t)(VAR_15));
 FUNC_1(&VAR_11->ec_regs_base->tfw_v3.tx_gpd_cam_data_2,
   (uint32_t)(VAR_14 >> VAR_1));
 FUNC_0("al_eth_tx_generic_crc_entry_set, line [%d], tx_gpd_cam_data_2: %#x", VAR_12, (uint32_t)(VAR_14 >> VAR_1));
 FUNC_1(&VAR_11->ec_regs_base->tfw_v3.tx_gpd_cam_data_1,
   (uint32_t)(VAR_14));
 FUNC_0("al_eth_tx_generic_crc_entry_set, line [%d], tx_gpd_cam_data_1: %#x", VAR_12, (uint32_t)(VAR_14));
 return 0;
}
