
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

bool
FUNC_8 (tree VAR_4)
{
  if (FUNC_5 (VAR_4) == VAR_1)
    {
      while (VAR_4)
 {
   if (FUNC_8 (FUNC_4 (VAR_4)))
     return 1;
   VAR_4 = FUNC_3 (VAR_4);
 }
      return 0;
    }


  if (FUNC_2 (VAR_4)
      || FUNC_5 (VAR_4) == VAR_3)
    return 1;

  if (FUNC_5 (VAR_4) == VAR_2
      || FUNC_5 (VAR_4) == VAR_0)
    return 1;

  if (FUNC_6 (FUNC_0 (VAR_4)))
    return FUNC_7 (FUNC_1 (VAR_4));
  return 0;
}
