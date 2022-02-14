
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_hal_eth_adapter {scalar_t__ rev_id; TYPE_2__* mac_regs_base; } ;
typedef scalar_t__ al_bool ;
struct TYPE_3__ {int pcs_10g_ll_cfg; } ;
struct TYPE_4__ {TYPE_1__ gen_v3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_3, al_bool VAR_4)
{
 if (VAR_3->rev_id <= VAR_0)
  return -1;

 if (VAR_4)
  FUNC_0(&VAR_3->mac_regs_base->gen_v3.pcs_10g_ll_cfg,
     (VAR_1 |
      VAR_2),
     (VAR_1 |
      VAR_2));
 else
  FUNC_0(&VAR_3->mac_regs_base->gen_v3.pcs_10g_ll_cfg,
     (VAR_1 |
      VAR_2),
     0);
 return 0;
}
