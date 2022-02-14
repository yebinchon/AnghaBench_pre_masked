
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct TYPE_4__ {TYPE_1__* fwd_mac; } ;
struct TYPE_3__ {int ctrl; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
 FUNC_0(VAR_2 < VAR_0);

 FUNC_1(&VAR_1->ec_regs_base->fwd_mac[VAR_2].ctrl, VAR_3);

 return 0;
}
