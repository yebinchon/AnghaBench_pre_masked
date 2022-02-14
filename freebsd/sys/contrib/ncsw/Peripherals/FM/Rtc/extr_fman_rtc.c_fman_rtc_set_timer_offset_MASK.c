
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_regs {int tmr_off_h; int tmr_off_l; } ;
typedef int int64_t ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct rtc_regs *VAR_0, int64_t VAR_1)
{
 FUNC_0((uint32_t)VAR_1, &VAR_0->tmr_off_l);
 FUNC_0((uint32_t)(VAR_1 >> 32), &VAR_0->tmr_off_h);
}
