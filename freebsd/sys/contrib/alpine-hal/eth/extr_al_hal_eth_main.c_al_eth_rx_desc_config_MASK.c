
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
typedef enum al_eth_rx_desc_lro_context_val_res { ____Placeholder_al_eth_rx_desc_lro_context_val_res } al_eth_rx_desc_lro_context_val_res ;
typedef enum al_eth_rx_desc_l4_proto_idx_sel { ____Placeholder_al_eth_rx_desc_l4_proto_idx_sel } al_eth_rx_desc_l4_proto_idx_sel ;
typedef enum al_eth_rx_desc_l4_offset_sel { ____Placeholder_al_eth_rx_desc_l4_offset_sel } al_eth_rx_desc_l4_offset_sel ;
typedef enum al_eth_rx_desc_l4_chk_res_sel { ____Placeholder_al_eth_rx_desc_l4_chk_res_sel } al_eth_rx_desc_l4_chk_res_sel ;
typedef enum al_eth_rx_desc_l3_proto_idx_sel { ____Placeholder_al_eth_rx_desc_l3_proto_idx_sel } al_eth_rx_desc_l3_proto_idx_sel ;
typedef enum al_eth_rx_desc_l3_offset_sel { ____Placeholder_al_eth_rx_desc_l3_offset_sel } al_eth_rx_desc_l3_offset_sel ;
typedef enum al_eth_rx_desc_l3_chk_res_sel { ____Placeholder_al_eth_rx_desc_l3_chk_res_sel } al_eth_rx_desc_l3_chk_res_sel ;
typedef enum al_eth_rx_desc_frag_sel { ____Placeholder_al_eth_rx_desc_frag_sel } al_eth_rx_desc_frag_sel ;
struct TYPE_3__ {int meta; int cfg_a_0; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void FUNC_2(
   struct al_hal_eth_adapter *VAR_15,
   enum al_eth_rx_desc_lro_context_val_res VAR_16,
   enum al_eth_rx_desc_l4_offset_sel VAR_17,
   enum al_eth_rx_desc_l3_offset_sel VAR_18,
   enum al_eth_rx_desc_l4_chk_res_sel VAR_19,
   enum al_eth_rx_desc_l3_chk_res_sel VAR_20,
   enum al_eth_rx_desc_l3_proto_idx_sel VAR_21,
   enum al_eth_rx_desc_l4_proto_idx_sel VAR_22,
   enum al_eth_rx_desc_frag_sel VAR_23)
{
 uint32_t VAR_24 = 0;

 VAR_24 |= (VAR_16 == VAR_4) ?
   VAR_7 : 0;

 VAR_24 |= (VAR_19 == VAR_3) ?
   VAR_9 : 0;

 VAR_24 |= VAR_20 << VAR_8;

 FUNC_1(&VAR_15->ec_regs_base->rfw.cfg_a_0, VAR_24);

 VAR_24 = FUNC_0(&VAR_15->ec_regs_base->rfw.meta);
 if (VAR_21 == VAR_2)
  VAR_24 |= VAR_12;
 else
  VAR_24 &= ~VAR_12;

 if (VAR_22 == VAR_6)
  VAR_24 |= VAR_14;
 else
  VAR_24 &= ~VAR_14;

 if (VAR_17 == VAR_5)
  VAR_24 |= VAR_13;
 else
  VAR_24 &= ~VAR_13;

 if (VAR_18 == VAR_1)
  VAR_24 |= VAR_11;
 else
  VAR_24 &= ~VAR_11;

 if (VAR_23 == VAR_0)
  VAR_24 |= VAR_10;
 else
  VAR_24 &= ~VAR_10;


 FUNC_1(&VAR_15->ec_regs_base->rfw.meta, VAR_24);
}
