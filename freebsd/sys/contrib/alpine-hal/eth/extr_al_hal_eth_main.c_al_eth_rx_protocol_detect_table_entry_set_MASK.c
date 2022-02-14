
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_rx_gpd_cam_entry {int rx_gpd_cam_ctrl; scalar_t__ l4_dst_port_lsb_mask; scalar_t__ l3_priority_mask; scalar_t__ outer_l3_len_mask; scalar_t__ parse_ctrl_mask; scalar_t__ inner_l4_proto_idx_mask; scalar_t__ inner_l3_proto_idx_mask; scalar_t__ outer_l4_proto_idx_mask; scalar_t__ outer_l3_proto_idx_mask; scalar_t__ l4_dst_port_lsb; scalar_t__ l3_priority; scalar_t__ outer_l3_len; scalar_t__ parse_ctrl; scalar_t__ inner_l4_proto_idx; scalar_t__ inner_l3_proto_idx; scalar_t__ outer_l4_proto_idx; scalar_t__ outer_l3_proto_idx; } ;
struct TYPE_3__ {int rx_gpd_cam_data_1; int rx_gpd_cam_data_2; int rx_gpd_cam_mask_1; int rx_gpd_cam_mask_2; int rx_gpd_cam_ctrl; int rx_gpd_cam_addr; } ;
struct TYPE_4__ {TYPE_1__ rfw_v3; } ;


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
 int FUNC_0 (int *,int ) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_19, uint32_t VAR_20,
  struct al_eth_rx_gpd_cam_entry *VAR_21)
{
 uint64_t VAR_22;
 uint64_t VAR_23;

 VAR_22 = ((uint64_t)VAR_21->outer_l3_proto_idx & VAR_13) <<
  VAR_14;
 VAR_22 |= ((uint64_t)VAR_21->outer_l4_proto_idx & VAR_15) <<
  VAR_16;
 VAR_22 |= ((uint64_t)VAR_21->inner_l3_proto_idx & VAR_3) <<
  VAR_4;
 VAR_22 |= ((uint64_t)VAR_21->inner_l4_proto_idx & VAR_5) <<
  VAR_6;
 VAR_22 |= ((uint64_t)VAR_21->parse_ctrl & VAR_17) <<
  VAR_18;
 VAR_22 |= ((uint64_t)VAR_21->outer_l3_len & VAR_7) <<
  VAR_8;
 VAR_22 |= ((uint64_t)VAR_21->l3_priority & VAR_9) <<
  VAR_10;
 VAR_22 |= ((uint64_t)VAR_21->l4_dst_port_lsb & VAR_11) <<
  VAR_12;

 VAR_23 = ((uint64_t)VAR_21->outer_l3_proto_idx_mask & VAR_13) <<
  VAR_14;
 VAR_23 |= ((uint64_t)VAR_21->outer_l4_proto_idx_mask & VAR_15) <<
  VAR_16;
 VAR_23 |= ((uint64_t)VAR_21->inner_l3_proto_idx_mask & VAR_3) <<
  VAR_4;
 VAR_23 |= ((uint64_t)VAR_21->inner_l4_proto_idx_mask & VAR_5) <<
  VAR_6;
 VAR_23 |= ((uint64_t)VAR_21->parse_ctrl_mask & VAR_17) <<
  VAR_18;
 VAR_23 |= ((uint64_t)VAR_21->outer_l3_len_mask & VAR_7) <<
  VAR_8;
 VAR_23 |= ((uint64_t)VAR_21->l3_priority_mask & VAR_9) <<
  VAR_10;
 VAR_23 |= ((uint64_t)VAR_21->l4_dst_port_lsb_mask & VAR_11) <<
  VAR_12;


 FUNC_0(&VAR_19->ec_regs_base->rfw_v3.rx_gpd_cam_addr, VAR_20);
 FUNC_0(&VAR_19->ec_regs_base->rfw_v3.rx_gpd_cam_ctrl,
   (uint32_t)((VAR_21->rx_gpd_cam_ctrl) << VAR_0));
 FUNC_0(&VAR_19->ec_regs_base->rfw_v3.rx_gpd_cam_mask_2,
   (uint32_t)(VAR_23 >> VAR_2));
 FUNC_0(&VAR_19->ec_regs_base->rfw_v3.rx_gpd_cam_mask_1,
   (uint32_t)(VAR_23));
 FUNC_0(&VAR_19->ec_regs_base->rfw_v3.rx_gpd_cam_data_2,
   (uint32_t)(VAR_22 >> VAR_1));
 FUNC_0(&VAR_19->ec_regs_base->rfw_v3.rx_gpd_cam_data_1,
   (uint32_t)(VAR_22));
 return 0;
}
