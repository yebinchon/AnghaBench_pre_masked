
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct TYPE_3__ {int mhash_table_data; int mhash_table_addr; } ;
struct TYPE_4__ {TYPE_1__ rfw; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__,int ,int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__) ;

int FUNC_4(struct al_hal_eth_adapter *VAR_1, uint32_t VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5 = 0;
 FUNC_2(VAR_2 < VAR_0);

 FUNC_1(VAR_5, FUNC_0(3,0), 0, VAR_3);
 FUNC_1(VAR_5, FUNC_0(5,4), 4, VAR_4);

 FUNC_3(&VAR_1->ec_regs_base->rfw.mhash_table_addr, VAR_2);
 FUNC_3(&VAR_1->ec_regs_base->rfw.mhash_table_data, VAR_5);
 return 0;
}
