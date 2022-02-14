
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ rev_id; TYPE_2__* mac_regs_base; } ;
struct TYPE_3__ {int v3_pcs_10g_ll_ncerr; int v3_pcs_10g_ll_cerr; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_1,
   uint32_t *VAR_2, uint32_t *VAR_3)
{
 if (VAR_1->rev_id <= VAR_0)
  return -1;

 *VAR_2 = FUNC_0(&VAR_1->mac_regs_base->stat.v3_pcs_10g_ll_cerr);
 *VAR_3 = FUNC_0(&VAR_1->mac_regs_base->stat.v3_pcs_10g_ll_ncerr);

 return 0;
}
