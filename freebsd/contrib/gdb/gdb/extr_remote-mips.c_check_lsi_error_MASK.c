
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lsi_error {int code; int string; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int) ;
 int VAR_1 ;
 struct lsi_error* VAR_2 ;
 struct lsi_error* VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (CORE_ADDR VAR_5, int VAR_6)
{
  struct lsi_error *VAR_7;
  char *VAR_8 = FUNC_1 (VAR_5);

  if (VAR_6 == 0)
    return 0;


  if (VAR_6 & VAR_0)
    {
      if (VAR_4)
 {
   int VAR_9 = 0;
   for (VAR_7 = VAR_3; VAR_7->code != 0; VAR_7++)
     {
       if ((VAR_7->code & VAR_6) == VAR_7->code)
  {
    VAR_9 = 1;
    FUNC_0 (VAR_1,
      "common_breakpoint (0x%s): Warning: %s\n",
          VAR_8,
          VAR_7->string);
  }
     }
   if (!VAR_9)
     FUNC_0 (VAR_1,
   "common_breakpoint (0x%s): Unknown warning: 0x%x\n",
    VAR_8,
    VAR_6);
 }
      return 0;
    }


  for (VAR_7 = VAR_2; VAR_7->code != 0; VAR_7++)
    {
      if ((VAR_7->code & VAR_6) == VAR_7->code)
 {
   FUNC_0 (VAR_1,
         "common_breakpoint (0x%s): Error: %s\n",
         VAR_8,
         VAR_7->string);
   return 1;
 }
    }
  FUNC_0 (VAR_1,
        "common_breakpoint (0x%s): Unknown error: 0x%x\n",
        VAR_8,
        VAR_6);
  return 1;
}
