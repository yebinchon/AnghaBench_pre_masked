
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rtc_regs {TYPE_1__* tmr_alarm; } ;
typedef int int64_t ;
struct TYPE_2__ {int tmr_alarm_h; int tmr_alarm_l; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct rtc_regs *VAR_0, int VAR_1, int64_t VAR_2)
{
 FUNC_0((uint32_t)VAR_2, &VAR_0->tmr_alarm[VAR_1].tmr_alarm_l);
 FUNC_0((uint32_t)(VAR_2 >> 32), &VAR_0->tmr_alarm[VAR_1].tmr_alarm_h);
}
