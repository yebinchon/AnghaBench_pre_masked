
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mod; int reg; scalar_t__ rm; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_4 (int VAR_6, int VAR_7)
{
  if (VAR_2.mod == 3)
    {
      if (VAR_2.reg >= 5 && VAR_2.reg <= 7 && VAR_2.rm == 0)
 {
   if (VAR_2.reg == 7)
     FUNC_2 (VAR_3 + FUNC_3 (VAR_3) - sizeof ("clflush") + 1, "sfence");
   else if (VAR_2.reg == 6)
     FUNC_2 (VAR_3 + FUNC_3 (VAR_3) - sizeof ("xsaveopt") + 1, "mfence");
   else if (VAR_2.reg == 5)
     FUNC_2 (VAR_3 + FUNC_3 (VAR_3) - sizeof ("xrstor") + 1, "lfence");
   VAR_6 = 0;
 }
      else if (VAR_2.reg <= 3 && (VAR_4 & VAR_0) != 0)
 {
   if (VAR_2.reg == 0)
     FUNC_2 (VAR_3 + FUNC_3 (VAR_3) - sizeof ("fxsave") + 1, "rdfsbase");
   else if (VAR_2.reg == 1)
     FUNC_2 (VAR_3 + FUNC_3 (VAR_3) - sizeof ("fxrstor") + 1, "rdgsbase");
   else if (VAR_2.reg == 2)
     FUNC_2 (VAR_3 + FUNC_3 (VAR_3) - sizeof ("ldmxcsr") + 1, "wrfsbase");
   else if (VAR_2.reg == 3)
     FUNC_2 (VAR_3 + FUNC_3 (VAR_3) - sizeof ("stmxcsr") + 1, "wrgsbase");
   VAR_5 |= VAR_0;
   VAR_6 = VAR_1;
 }
      else
 {
   FUNC_0 ();
   return;
 }
    }

  FUNC_1 (VAR_6, VAR_7);
}
