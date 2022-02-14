
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_regs {int dummy; } ;


 int FUNC_0 (struct rtc_regs*) ;
 int FUNC_1 (struct rtc_regs*,int) ;

void FUNC_2(struct rtc_regs *VAR_0, uint32_t VAR_1)
{
 FUNC_1(VAR_0, FUNC_0(VAR_0) & ~VAR_1);
}
