
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,scalar_t__) ;

void
FUNC_7 (void)
{
  tree VAR_1;
  for (VAR_1 = FUNC_0 (VAR_0);
       VAR_1; VAR_1 = FUNC_4 (VAR_1))
    if (FUNC_1 (VAR_1) != 0
 && FUNC_3 (FUNC_1 (VAR_1))
 && FUNC_5 (FUNC_2 (FUNC_1 (VAR_1))))
      FUNC_6 (0, "argument %q+D might be clobbered by %<longjmp%> or %<vfork%>",
        VAR_1);
}
