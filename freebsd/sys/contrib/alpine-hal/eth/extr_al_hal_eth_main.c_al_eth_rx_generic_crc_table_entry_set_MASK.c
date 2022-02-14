
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_rx_gcp_table_entry {int poly_sel; int crc32_bit_comp; int crc32_bit_swap; int crc32_byte_swap; int data_bit_swap; int data_byte_swap; int trail_size; int head_size; int head_calc; int mask_polarity; int rx_alu_opcode_1; int rx_alu_opcode_2; int rx_alu_opcode_3; int rx_alu_opsel_1; int rx_alu_opsel_2; int rx_alu_opsel_3; int rx_alu_opsel_4; int* gcp_mask; int crc_init; int gcp_table_res; int alu_val; } ;
struct TYPE_3__ {int rx_gcp_table_alu_val; int rx_gcp_table_alu_opsel; int rx_gcp_table_alu_opcode; int rx_gcp_table_res; int rx_gcp_table_crc_init; int rx_gcp_table_mask_6; int rx_gcp_table_mask_5; int rx_gcp_table_mask_4; int rx_gcp_table_mask_3; int rx_gcp_table_mask_2; int rx_gcp_table_mask_1; int rx_gcp_table_gen; int rx_gcp_table_addr; } ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_34, uint32_t VAR_35,
  struct al_eth_rx_gcp_table_entry *VAR_36)
{
 uint32_t VAR_37;
 uint32_t VAR_38;
 uint32_t VAR_39;

 VAR_37 = (VAR_36->poly_sel & VAR_30) <<
  VAR_31;
 VAR_37 |= (VAR_36->crc32_bit_comp & VAR_0) <<
  VAR_1;
 VAR_37 |= (VAR_36->crc32_bit_swap & VAR_2) <<
  VAR_3;
 VAR_37 |= (VAR_36->crc32_byte_swap & VAR_4) <<
  VAR_5;
 VAR_37 |= (VAR_36->data_bit_swap & VAR_6) <<
  VAR_7;
 VAR_37 |= (VAR_36->data_byte_swap & VAR_8) <<
  VAR_9;
 VAR_37 |= (VAR_36->trail_size & VAR_32) <<
  VAR_33;
 VAR_37 |= (VAR_36->head_size & VAR_12) <<
  VAR_13;
 VAR_37 |= (VAR_36->head_calc & VAR_10) <<
  VAR_11;
 VAR_37 |= (VAR_36->mask_polarity & VAR_14) <<
  VAR_15;

 VAR_38 = (VAR_36->rx_alu_opcode_1 & VAR_16) <<
  VAR_17;
 VAR_38 |= (VAR_36->rx_alu_opcode_2 & VAR_18) <<
  VAR_19;
 VAR_38 |= (VAR_36->rx_alu_opcode_3 & VAR_20) <<
  VAR_21;
 VAR_39 = (VAR_36->rx_alu_opsel_1 & VAR_22) <<
  VAR_23;
 VAR_39 |= (VAR_36->rx_alu_opsel_2 & VAR_24) <<
  VAR_25;
 VAR_39 |= (VAR_36->rx_alu_opsel_3 & VAR_26) <<
  VAR_27;
 VAR_39 |= (VAR_36->rx_alu_opsel_4 & VAR_28) <<
  VAR_29;


 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_addr, VAR_35);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_gen,
   VAR_37);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_mask_1,
   VAR_36->gcp_mask[0]);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_mask_2,
   VAR_36->gcp_mask[1]);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_mask_3,
   VAR_36->gcp_mask[2]);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_mask_4,
   VAR_36->gcp_mask[3]);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_mask_5,
   VAR_36->gcp_mask[4]);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_mask_6,
   VAR_36->gcp_mask[5]);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_crc_init,
   VAR_36->crc_init);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_res,
   VAR_36->gcp_table_res);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_alu_opcode,
   VAR_38);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_alu_opsel,
   VAR_39);
 FUNC_0(&VAR_34->ec_regs_base->rfw_v3.rx_gcp_table_alu_val,
   VAR_36->alu_val);
 return 0;
}
