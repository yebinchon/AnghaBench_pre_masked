
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct al_hal_eth_adapter {TYPE_1__* ec_regs_base; } ;
struct TYPE_4__ {int thash_table_data; int thash_table_addr; } ;
struct TYPE_3__ {TYPE_2__ rfw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_5, uint32_t VAR_6, uint8_t VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;
 FUNC_0(VAR_6 < VAR_0);

 VAR_9 = (VAR_7 << VAR_4) & VAR_3;
 VAR_9 |= (VAR_8 << VAR_2) & VAR_1;

 FUNC_1(&VAR_5->ec_regs_base->rfw.thash_table_addr, VAR_6);
 FUNC_1(&VAR_5->ec_regs_base->rfw.thash_table_data, VAR_9);
 return 0;
}
