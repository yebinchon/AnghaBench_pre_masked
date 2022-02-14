
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (int ,char**,int *,int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

CORE_ADDR
FUNC_4 (CORE_ADDR VAR_0)
{
  char *VAR_1;
  CORE_ADDR VAR_2;


  if (FUNC_0 (VAR_0, &VAR_1, &VAR_2, ((void*)0)) == 0)
    return 0;


  if (FUNC_3 (VAR_1, "_call_via_", 10) == 0)
    {


      static char *VAR_3[15] =
      {"r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7",
       "r8", "r9", "sl", "fp", "ip", "sp", "lr"
      };
      int VAR_4;

      for (VAR_4 = 0; VAR_4 <= 14; VAR_4++)
 if (FUNC_2 (&VAR_1[10], VAR_3[VAR_4]) == 0)
   return FUNC_1 (VAR_4);
    }

  return 0;
}
