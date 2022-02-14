
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct TYPE_3__ {int wol_en; } ;
struct TYPE_4__ {TYPE_1__ wol; } ;


 int FUNC_0 (int *,int ) ;

int FUNC_1(
  struct al_hal_eth_adapter *VAR_0)
{
 FUNC_0(&VAR_0->ec_regs_base->wol.wol_en, 0);

 return 0;
}
