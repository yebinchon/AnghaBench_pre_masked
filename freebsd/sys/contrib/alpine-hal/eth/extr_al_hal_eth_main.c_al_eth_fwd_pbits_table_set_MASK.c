
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct TYPE_3__ {int pbits_table_data; int pbits_table_addr; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_2, uint32_t VAR_3, uint8_t VAR_4)
{

 FUNC_0(VAR_3 < VAR_0);
 FUNC_0(VAR_4 < VAR_1);
 FUNC_1(&VAR_2->ec_regs_base->rfw.pbits_table_addr, VAR_3);
 FUNC_1(&VAR_2->ec_regs_base->rfw.pbits_table_data, VAR_4);
 return 0;
}
