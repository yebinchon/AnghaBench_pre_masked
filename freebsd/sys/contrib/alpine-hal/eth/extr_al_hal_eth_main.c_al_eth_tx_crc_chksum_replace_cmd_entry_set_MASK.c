
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_tx_crc_chksum_replace_cmd_for_protocol_num_entry {scalar_t__ crc_en_11; scalar_t__ l4_csum_en_11; scalar_t__ l3_csum_en_11; scalar_t__ crc_en_10; scalar_t__ l4_csum_en_10; scalar_t__ l3_csum_en_10; scalar_t__ crc_en_01; scalar_t__ l4_csum_en_01; scalar_t__ l3_csum_en_01; scalar_t__ crc_en_00; scalar_t__ l4_csum_en_00; scalar_t__ l3_csum_en_00; } ;
struct TYPE_3__ {int crc_csum_replace_table; int crc_csum_replace_table_addr; } ;
struct TYPE_4__ {TYPE_1__ tfw_v3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_4, uint32_t VAR_5,
  struct al_eth_tx_crc_chksum_replace_cmd_for_protocol_num_entry *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;


 VAR_7 = VAR_0 | VAR_5;
 VAR_8 = (uint32_t)(VAR_6->l3_csum_en_00) << 0;
 VAR_8 |= (uint32_t)(VAR_6->l4_csum_en_00) << 1;
 VAR_8 |= (uint32_t)(VAR_6->crc_en_00) << 2;
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table_addr, VAR_7);
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table,
   VAR_8);
 VAR_7 = VAR_1 | VAR_5;
 VAR_8 = (uint32_t)(VAR_6->l3_csum_en_01) << 0;
 VAR_8 |= (uint32_t)(VAR_6->l4_csum_en_01) << 1;
 VAR_8 |= (uint32_t)(VAR_6->crc_en_01) << 2;
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table_addr, VAR_7);
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table,
   VAR_8);
 VAR_7 = VAR_2 | VAR_5;
 VAR_8 = (uint32_t)(VAR_6->l3_csum_en_10) << 0;
 VAR_8 |= (uint32_t)(VAR_6->l4_csum_en_10) << 1;
 VAR_8 |= (uint32_t)(VAR_6->crc_en_10) << 2;
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table_addr, VAR_7);
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table,
   VAR_8);
 VAR_7 = VAR_3 | VAR_5;
 VAR_8 = (uint32_t)(VAR_6->l3_csum_en_11) << 0;
 VAR_8 |= (uint32_t)(VAR_6->l4_csum_en_11) << 1;
 VAR_8 |= (uint32_t)(VAR_6->crc_en_11) << 2;
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table_addr, VAR_7);
 FUNC_0(&VAR_4->ec_regs_base->tfw_v3.crc_csum_replace_table,
   VAR_8);

 return 0;
}
