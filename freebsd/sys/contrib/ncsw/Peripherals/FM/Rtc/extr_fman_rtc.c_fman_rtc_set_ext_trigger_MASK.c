
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtc_regs*,int) ;
 int FUNC_1 (struct rtc_regs*) ;
 int FUNC_2 (struct rtc_regs*,int) ;

void FUNC_3(struct rtc_regs *VAR_4, int VAR_5, bool VAR_6,
      bool VAR_7)
{
 uint32_t VAR_8;
 if (VAR_6) {
  if (VAR_5 == 0)
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_3;
  FUNC_0(VAR_4, VAR_8);
 }
 if (VAR_7) {
  if (VAR_5 == 0)
   VAR_8 = VAR_0;
  else
   VAR_8 = VAR_1;
  FUNC_2(VAR_4, FUNC_1(VAR_4) | VAR_8);
 }
}
