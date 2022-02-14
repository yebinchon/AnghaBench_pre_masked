
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,scalar_t__) ;

void
FUNC_10 (tree VAR_1)
{
  tree VAR_2, VAR_3;

  for (VAR_2 = FUNC_1 (VAR_1); VAR_2; VAR_2 = FUNC_6 (VAR_2))
    {
      if (FUNC_7 (VAR_2) == VAR_0
   && FUNC_3 (VAR_2)
   && FUNC_5 (FUNC_2 (VAR_2))
   && FUNC_8 (FUNC_4 (FUNC_2 (VAR_2))))
 FUNC_9 (0, "variable %q+D might be clobbered by %<longjmp%>"
   " or %<vfork%>",
   VAR_2);
    }

  for (VAR_3 = FUNC_0 (VAR_1); VAR_3; VAR_3 = FUNC_6 (VAR_3))
    FUNC_10 (VAR_3);
}
