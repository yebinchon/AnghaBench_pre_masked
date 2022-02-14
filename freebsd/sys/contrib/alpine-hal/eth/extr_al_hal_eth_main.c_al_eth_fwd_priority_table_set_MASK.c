
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct TYPE_4__ {TYPE_1__* rfw_priority; } ;
struct TYPE_3__ {int queue; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,size_t) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_1, uint8_t VAR_2, uint8_t VAR_3)
{
 FUNC_0(VAR_2 < VAR_0);

 FUNC_1(&VAR_1->ec_regs_base->rfw_priority[VAR_2].queue, VAR_3);
 return 0;
}
