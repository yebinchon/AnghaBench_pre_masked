
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

int
FUNC_13 (tree VAR_9)
{
  bool VAR_10;
  int VAR_11;

  VAR_11 = VAR_8;
  if (!VAR_11)
    VAR_8 = 1;
  if (FUNC_7 (VAR_9))
    VAR_10 = FUNC_9 (VAR_9);
  else if (FUNC_4 (VAR_9) == VAR_5)
    VAR_10 = FUNC_8 (VAR_9);
  else if (FUNC_4 (VAR_9) == VAR_4)
    VAR_10 = (FUNC_13 (FUNC_6 (VAR_9))
     || FUNC_13 (FUNC_3 (VAR_9)));
  else if (FUNC_4 (VAR_9) == VAR_6)
    VAR_10 = FUNC_9 (FUNC_5 (VAR_9));
  else if (FUNC_1 (VAR_9)
    || FUNC_2 (VAR_9)
    || FUNC_4 (VAR_9) == VAR_3
    || FUNC_4 (VAR_9) == VAR_2
    || FUNC_4 (VAR_9) == VAR_0
    || FUNC_4 (VAR_9) == VAR_1
    || FUNC_0 (VAR_9))
    VAR_10 = (FUNC_11 (VAR_9)
     || FUNC_12 (VAR_9));
  else
    {
      FUNC_10 (VAR_9 == VAR_7);
      VAR_10 = 0;
    }

  VAR_8 = VAR_11;

  return VAR_10;
}
