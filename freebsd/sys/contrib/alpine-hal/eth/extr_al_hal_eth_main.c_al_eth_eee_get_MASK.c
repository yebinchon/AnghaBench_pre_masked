
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; int name; } ;
struct al_eth_eee_params {void* stop_cnt; void* min_interval; void* tx_eee_timer; int enable; } ;
struct TYPE_3__ {int stop_cnt; int post_cnt; int pre_cnt; int cfg_e; } ;
struct TYPE_4__ {TYPE_1__ eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 void* FUNC_1 (int *) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_3, struct al_eth_eee_params *VAR_4)
{
 uint32_t VAR_5;

 FUNC_0("[%s]: getting eee.\n", VAR_3->name);

 VAR_5 = FUNC_1(&VAR_3->ec_regs_base->eee.cfg_e);
 VAR_4->enable = (VAR_5 & VAR_2) ? VAR_1 : VAR_0;

 VAR_4->tx_eee_timer = FUNC_1(&VAR_3->ec_regs_base->eee.pre_cnt);
 VAR_4->min_interval = FUNC_1(&VAR_3->ec_regs_base->eee.post_cnt);
 VAR_4->stop_cnt = FUNC_1(&VAR_3->ec_regs_base->eee.stop_cnt);

 return 0;
}
