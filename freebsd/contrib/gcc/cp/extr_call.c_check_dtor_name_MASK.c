
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ,int ) ;

bool
FUNC_11 (tree VAR_4, tree VAR_5)
{

  if (VAR_5 == VAR_3)
    return 1;

  if (FUNC_2 (VAR_5) == VAR_2)
    VAR_5 = FUNC_3 (VAR_5);
  else if (FUNC_6 (VAR_5))
            ;
  else if (FUNC_2 (VAR_5) == VAR_1)
    {
      if ((FUNC_1 (VAR_4) && VAR_5 == FUNC_7 (VAR_4))
   || (FUNC_2 (VAR_4) == VAR_0
       && VAR_5 == FUNC_4 (VAR_4)))
 return 1;
      else
 VAR_5 = FUNC_9 (VAR_5);
    }
  else
    {







      FUNC_8 (FUNC_0 (VAR_5));
      return 0;
    }

  if (!VAR_5)
    return 0;
  return FUNC_10 (FUNC_5 (VAR_4), FUNC_5 (VAR_5));
}
