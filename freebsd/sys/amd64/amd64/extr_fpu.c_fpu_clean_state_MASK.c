
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 int FUNC_0 () ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 static float VAR_0 = 0.0;
 u_short VAR_1;





 FUNC_1(&VAR_1);
 if (VAR_1 & 0x80)
  FUNC_0();






 __asm __volatile("ffree %%st(7); flds %0" : : "m" (VAR_0));
}
