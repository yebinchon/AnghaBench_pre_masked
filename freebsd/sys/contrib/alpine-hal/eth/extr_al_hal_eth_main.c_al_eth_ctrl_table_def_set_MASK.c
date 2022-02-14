
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_fwd_ctrl_table_entry {int dummy; } ;
typedef scalar_t__ al_bool ;
struct TYPE_3__ {int ctrl_table_def; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


 int VAR_0 ;
 int FUNC_0 (struct al_eth_fwd_ctrl_table_entry*) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_1,
         al_bool VAR_2,
         struct al_eth_fwd_ctrl_table_entry *VAR_3)
{
 uint32_t VAR_4 = FUNC_0(VAR_3);

 if (VAR_2)
  VAR_4 |= VAR_0;

 FUNC_1(&VAR_1->ec_regs_base->rfw.ctrl_table_def, VAR_4);

 return 0;
}
