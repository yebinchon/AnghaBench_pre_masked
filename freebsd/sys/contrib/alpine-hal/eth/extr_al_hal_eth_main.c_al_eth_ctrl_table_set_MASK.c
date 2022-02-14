
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_fwd_ctrl_table_index {int dummy; } ;
struct al_eth_fwd_ctrl_table_entry {int dummy; } ;
struct TYPE_3__ {int ctrl_table_data; int ctrl_table_addr; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct al_eth_fwd_ctrl_table_index*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct al_eth_fwd_ctrl_table_entry*) ;
 int FUNC_2 (int *,scalar_t__) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_1,
     struct al_eth_fwd_ctrl_table_index *VAR_2,
     struct al_eth_fwd_ctrl_table_entry *VAR_3)
{
 uint32_t VAR_4 = FUNC_1(VAR_3);
 uint32_t VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (FUNC_0(VAR_2, VAR_5)) {
   FUNC_2(&VAR_1->ec_regs_base->rfw.ctrl_table_addr, VAR_5);
   FUNC_2(&VAR_1->ec_regs_base->rfw.ctrl_table_data, VAR_4);
  }
 }
 return 0;
}
