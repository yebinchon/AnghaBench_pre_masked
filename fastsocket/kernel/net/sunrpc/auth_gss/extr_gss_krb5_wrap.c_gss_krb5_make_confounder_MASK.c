
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(char *VAR_0, u32 VAR_1)
{
 static u64 VAR_2 = 0;
 u64 *VAR_3 = (u64 *)VAR_0;
 if (VAR_2 == 0) {
  VAR_2 = FUNC_1();
  VAR_2 = (VAR_2 << 32) | FUNC_1();
 }

 switch (VAR_1) {
 case 16:
  *VAR_3++ = VAR_2++;

 case 8:
  *VAR_3++ = VAR_2++;
  break;
 default:
  FUNC_0();
 }
}
