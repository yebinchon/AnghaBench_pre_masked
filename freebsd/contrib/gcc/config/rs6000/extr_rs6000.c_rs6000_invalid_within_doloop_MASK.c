
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static const char *
FUNC_4 (rtx VAR_2)
{
  if (FUNC_0 (VAR_2))
    return "Function call in the loop.";

  if (FUNC_2 (VAR_2)
      && (FUNC_1 (FUNC_3 (VAR_2)) == VAR_0
   || FUNC_1 (FUNC_3 (VAR_2)) == VAR_1))
    return "Computed branch in the loop.";

  return ((void*)0);
}
