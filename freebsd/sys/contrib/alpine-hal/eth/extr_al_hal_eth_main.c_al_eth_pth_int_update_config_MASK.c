
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_pth_int_update_params {scalar_t__ enable; scalar_t__ trigger; int method; } ;
struct TYPE_3__ {int int_update_ctrl; } ;
struct TYPE_4__ {TYPE_1__ pth; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_6,
     struct al_eth_pth_int_update_params *VAR_7)
{
 uint32_t VAR_8;

 VAR_8 = FUNC_1(&VAR_6->ec_regs_base->pth.int_update_ctrl);
 if (VAR_7->enable == VAR_1) {
  VAR_8 &= ~VAR_2;
 } else {
  VAR_8 |= VAR_2;
  FUNC_0(VAR_8, VAR_3,
     VAR_4,
     VAR_7->method);
  if (VAR_7->trigger == VAR_0)
   VAR_8 |= VAR_5;
  else
   VAR_8 &= ~VAR_5;
 }
 FUNC_2(&VAR_6->ec_regs_base->pth.int_update_ctrl, VAR_8);
 return 0;
}
