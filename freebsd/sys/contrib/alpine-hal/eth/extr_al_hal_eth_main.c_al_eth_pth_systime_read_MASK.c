
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_pth_time {int femto; scalar_t__ seconds; } ;
struct TYPE_3__ {int system_time_seconds; int system_time_subseconds_msb; } ;
struct TYPE_4__ {TYPE_1__ pth; } ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(struct al_hal_eth_adapter *VAR_0,
       struct al_eth_pth_time *VAR_1)
{
 uint32_t VAR_2;




 VAR_2 = FUNC_0(&VAR_0->ec_regs_base->pth.system_time_subseconds_msb);
 VAR_1->femto = (uint64_t)VAR_2 << 18;
 VAR_2 = FUNC_0(&VAR_0->ec_regs_base->pth.system_time_seconds);
 VAR_1->seconds = VAR_2;

 return 0;
}
