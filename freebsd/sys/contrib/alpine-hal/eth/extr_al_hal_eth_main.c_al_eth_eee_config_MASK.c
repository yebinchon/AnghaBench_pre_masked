
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ mac_mode; TYPE_5__* ec_regs_base; TYPE_3__* mac_regs_base; int name; } ;
struct al_eth_eee_params {scalar_t__ enable; int tx_eee_timer; int min_interval; int stop_cnt; scalar_t__ fast_wake; } ;
struct TYPE_9__ {int cfg_e; int stop_cnt; int post_cnt; int pre_cnt; } ;
struct TYPE_10__ {TYPE_4__ eee; } ;
struct TYPE_7__ {int pcs_40g_ll_eee_cfg; } ;
struct TYPE_6__ {int pcs_cfg; } ;
struct TYPE_8__ {TYPE_2__ gen_v3; TYPE_1__ kr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct al_hal_eth_adapter*,int ,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int) ;

int FUNC_6(struct al_hal_eth_adapter *VAR_16, struct al_eth_eee_params *VAR_17)
{
 uint32_t VAR_18;
 FUNC_2("[%s]: config eee.\n", VAR_16->name);

 if (VAR_17->enable == 0) {
  FUNC_2("[%s]: disable eee.\n", VAR_16->name);
  FUNC_4(&VAR_16->ec_regs_base->eee.cfg_e, 0);
  return 0;
 }
 if (FUNC_0(VAR_16->mac_mode) || FUNC_1(VAR_16->mac_mode)) {
  FUNC_5(
   &VAR_16->mac_regs_base->kr.pcs_cfg,
   VAR_12,
   ((FUNC_0(VAR_16->mac_mode)) ?
   VAR_10 :
   VAR_11) <<
   VAR_13);
 }
 if ((VAR_16->mac_mode == VAR_0) ||
  (VAR_16->mac_mode == VAR_1)) {
  FUNC_5(
   &VAR_16->mac_regs_base->gen_v3.pcs_40g_ll_eee_cfg,
   VAR_8,
   ((VAR_16->mac_mode == VAR_0) ?
   VAR_14 :
   VAR_15) <<
   VAR_9);

  FUNC_3(VAR_16, VAR_7,
   VAR_17->fast_wake ? 1 : 0);
 }

 FUNC_4(&VAR_16->ec_regs_base->eee.pre_cnt, VAR_17->tx_eee_timer);
 FUNC_4(&VAR_16->ec_regs_base->eee.post_cnt, VAR_17->min_interval);
 FUNC_4(&VAR_16->ec_regs_base->eee.stop_cnt, VAR_17->stop_cnt);

 VAR_18 = VAR_3 | VAR_4 |
        VAR_2 |
        VAR_6 | VAR_5;
 FUNC_4(&VAR_16->ec_regs_base->eee.cfg_e, VAR_18);

 return 0;
}
