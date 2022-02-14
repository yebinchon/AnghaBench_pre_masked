
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct TYPE_3__ {int ext_write_compensation_subseconds_msb; int ext_write_compensation_subseconds_lsb; } ;
struct TYPE_4__ {TYPE_1__ pth; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_1,
       uint64_t VAR_2)
{
 uint32_t VAR_3;


 VAR_3 = (VAR_2 & FUNC_0(18)) << VAR_0;
 FUNC_1(&VAR_1->ec_regs_base->pth.ext_write_compensation_subseconds_lsb, VAR_3);

 VAR_3 = VAR_2 >> 18;
 FUNC_1(&VAR_1->ec_regs_base->pth.ext_write_compensation_subseconds_msb, VAR_3);
 return 0;
}
