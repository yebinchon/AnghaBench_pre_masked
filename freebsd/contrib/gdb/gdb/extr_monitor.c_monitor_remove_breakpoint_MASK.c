
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int num_breakpoints; int * clr_break; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_5 ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (CORE_ADDR VAR_6, char *VAR_7)
{
  int VAR_8;

  FUNC_3 ("MON rmbkpt %s\n", FUNC_6 (VAR_6));
  if (VAR_4->clr_break == ((void*)0))
    FUNC_1 ("No clr_break defined for this monitor");

  if (VAR_4->flags & VAR_0)
    VAR_6 = FUNC_0 (VAR_6);

  for (VAR_8 = 0; VAR_8 < VAR_4->num_breakpoints; VAR_8++)
    {
      if (VAR_3[VAR_8] == VAR_6)
 {
   VAR_3[VAR_8] = 0;

   if (VAR_4->flags & VAR_2)
     FUNC_5 (VAR_4->clr_break, VAR_6);
   else if (VAR_4->flags & VAR_1)
     FUNC_5 (VAR_4->clr_break, VAR_8 + 1);
   else
     FUNC_5 (VAR_4->clr_break, VAR_8);
   FUNC_4 (((void*)0), 0);
   return 0;
 }
    }
  FUNC_2 (VAR_5,
        "Can't find breakpoint associated with 0x%s\n",
        FUNC_7 (VAR_6));
  return 1;
}
