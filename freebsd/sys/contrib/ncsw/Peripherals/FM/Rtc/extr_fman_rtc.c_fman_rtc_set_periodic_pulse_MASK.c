
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rtc_regs {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtc_regs*,int ) ;
 int FUNC_1 (struct rtc_regs*,int,int ) ;

void FUNC_2(struct rtc_regs *VAR_2, int VAR_3, uint32_t VAR_4,
      bool VAR_5)
{
 uint32_t VAR_6;
 FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
  if (VAR_3 == 0)
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_1;
  FUNC_0(VAR_2, VAR_6);
 }
}
