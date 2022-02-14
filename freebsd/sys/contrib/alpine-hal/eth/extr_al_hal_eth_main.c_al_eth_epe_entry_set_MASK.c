
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct al_hal_eth_adapter {TYPE_4__* ec_regs_base; } ;
struct al_eth_epe_p_reg_entry {size_t data; size_t mask; size_t ctrl; } ;
struct al_eth_epe_control_entry {size_t* data; } ;
struct TYPE_8__ {TYPE_3__* epe; TYPE_2__* msp_c; TYPE_1__* epe_p; } ;
struct TYPE_7__ {int act_table_data_1; int act_table_data_5; int act_table_data_4; int act_table_data_3; int act_table_data_2; int act_table_data_6; int act_table_addr; } ;
struct TYPE_6__ {int p_comp_ctrl; int p_comp_mask; int p_comp_data; } ;
struct TYPE_5__ {int comp_ctrl; int comp_mask; int comp_data; } ;


 int FUNC_0 (int *,size_t) ;

__attribute__((used)) static void FUNC_1(struct al_hal_eth_adapter *VAR_0, uint32_t VAR_1,
  struct al_eth_epe_p_reg_entry *VAR_2,
  struct al_eth_epe_control_entry *VAR_3)
{
 FUNC_0(&VAR_0->ec_regs_base->epe_p[VAR_1].comp_data, VAR_2->data);
 FUNC_0(&VAR_0->ec_regs_base->epe_p[VAR_1].comp_mask, VAR_2->mask);
 FUNC_0(&VAR_0->ec_regs_base->epe_p[VAR_1].comp_ctrl, VAR_2->ctrl);

 FUNC_0(&VAR_0->ec_regs_base->msp_c[VAR_1].p_comp_data, VAR_2->data);
 FUNC_0(&VAR_0->ec_regs_base->msp_c[VAR_1].p_comp_mask, VAR_2->mask);
 FUNC_0(&VAR_0->ec_regs_base->msp_c[VAR_1].p_comp_ctrl, VAR_2->ctrl);


 FUNC_0(&VAR_0->ec_regs_base->epe[0].act_table_addr, VAR_1);
 FUNC_0(&VAR_0->ec_regs_base->epe[0].act_table_data_6,
   VAR_3->data[5]);
 FUNC_0(&VAR_0->ec_regs_base->epe[0].act_table_data_2,
   VAR_3->data[1]);
 FUNC_0(&VAR_0->ec_regs_base->epe[0].act_table_data_3,
   VAR_3->data[2]);
 FUNC_0(&VAR_0->ec_regs_base->epe[0].act_table_data_4,
   VAR_3->data[3]);
 FUNC_0(&VAR_0->ec_regs_base->epe[0].act_table_data_5,
   VAR_3->data[4]);
 FUNC_0(&VAR_0->ec_regs_base->epe[0].act_table_data_1,
   VAR_3->data[0]);


 FUNC_0(&VAR_0->ec_regs_base->epe[1].act_table_addr, VAR_1);
 FUNC_0(&VAR_0->ec_regs_base->epe[1].act_table_data_6,
   VAR_3->data[5]);
 FUNC_0(&VAR_0->ec_regs_base->epe[1].act_table_data_2,
   VAR_3->data[1]);
 FUNC_0(&VAR_0->ec_regs_base->epe[1].act_table_data_3,
   VAR_3->data[2]);
 FUNC_0(&VAR_0->ec_regs_base->epe[1].act_table_data_4,
   VAR_3->data[3]);
 FUNC_0(&VAR_0->ec_regs_base->epe[1].act_table_data_5,
   VAR_3->data[4]);
 FUNC_0(&VAR_0->ec_regs_base->epe[1].act_table_data_1,
   VAR_3->data[0]);
}
