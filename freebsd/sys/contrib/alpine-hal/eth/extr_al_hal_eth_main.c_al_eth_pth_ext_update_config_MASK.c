
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_pth_ext_update_params {int triggers; int method; } ;
struct TYPE_3__ {int int_update_ctrl; } ;
struct TYPE_4__ {TYPE_1__ pth; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_4,
     struct al_eth_pth_ext_update_params * VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = FUNC_1(&VAR_4->ec_regs_base->pth.int_update_ctrl);
 FUNC_0(VAR_6, VAR_2,
    VAR_3,
    VAR_5->method);

 FUNC_0(VAR_6, VAR_0,
    VAR_1,
    VAR_5->triggers);
 FUNC_2(&VAR_4->ec_regs_base->pth.int_update_ctrl, VAR_6);
 return 0;
}
