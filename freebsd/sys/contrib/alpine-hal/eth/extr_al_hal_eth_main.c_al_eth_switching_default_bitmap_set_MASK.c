
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct al_hal_eth_adapter {TYPE_1__* ec_regs_base; } ;
struct TYPE_4__ {int bc_udma; int mc_udma; int uc_udma; } ;
struct TYPE_3__ {TYPE_2__* tfw_udma; } ;


 int FUNC_0 (int *,size_t) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_0, uint8_t VAR_1, uint8_t VAR_2,
      uint8_t VAR_3,uint8_t VAR_4)
{
 FUNC_0(&VAR_0->ec_regs_base->tfw_udma[VAR_1].uc_udma, VAR_2);
 FUNC_0(&VAR_0->ec_regs_base->tfw_udma[VAR_1].mc_udma, VAR_3);
 FUNC_0(&VAR_0->ec_regs_base->tfw_udma[VAR_1].bc_udma, VAR_4);

 return 0;
}
