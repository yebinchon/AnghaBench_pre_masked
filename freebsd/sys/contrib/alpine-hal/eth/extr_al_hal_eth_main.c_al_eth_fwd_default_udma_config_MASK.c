
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct TYPE_4__ {TYPE_1__* rfw_default; } ;
struct TYPE_3__ {int opt_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_2, uint32_t VAR_3,
       uint8_t VAR_4)
{
 FUNC_0(&VAR_2->ec_regs_base->rfw_default[VAR_3].opt_1,
          VAR_0,
          VAR_4 << VAR_1);
 return 0;
}
