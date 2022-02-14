
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct rtc_regs {TYPE_1__* tmr_etts; } ;
struct TYPE_2__ {int tmr_etts_h; int tmr_etts_l; } ;


 scalar_t__ FUNC_0 (int *) ;

uint64_t FUNC_1(struct rtc_regs *VAR_0, int VAR_1)
{
 uint64_t VAR_2;

 VAR_2 = (uint64_t)FUNC_0(&VAR_0->tmr_etts[VAR_1].tmr_etts_l);
 VAR_2 |= ((uint64_t)FUNC_0(&VAR_0->tmr_etts[VAR_1].tmr_etts_h)
  << 32);

 return VAR_2;
}
