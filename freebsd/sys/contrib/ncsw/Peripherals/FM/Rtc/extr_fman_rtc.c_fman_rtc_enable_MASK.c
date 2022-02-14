
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtc_regs*) ;
 int FUNC_2 (struct rtc_regs*,int) ;
 int FUNC_3 (struct rtc_regs*,int ) ;

void FUNC_4(struct rtc_regs *VAR_2, bool VAR_3)
{
 uint32_t VAR_4 = FUNC_1(VAR_2);


 if (VAR_3) {
  FUNC_2(VAR_2, (VAR_4 | VAR_1));

  FUNC_0(10);

  FUNC_3(VAR_2, 0);
 }

 FUNC_2(VAR_2, (VAR_4 | VAR_0));
}
