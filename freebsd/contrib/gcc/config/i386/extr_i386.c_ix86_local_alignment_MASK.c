
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

int
FUNC_10 (tree VAR_13, int VAR_14)
{


  if (VAR_9)
    {
      if (FUNC_0 (VAR_13)
    && FUNC_9 (VAR_13)
    && FUNC_3 (FUNC_9 (VAR_13)) == VAR_4
    && (FUNC_5 (FUNC_9 (VAR_13)) >= 128
        || FUNC_4 (FUNC_9 (VAR_13))) && VAR_14 < 128)
 return 128;
    }
  if (FUNC_3 (VAR_13) == VAR_0)
    {
      if (FUNC_8 (FUNC_6 (VAR_13)) == VAR_3 && VAR_14 < 64)
 return 64;
      if (FUNC_1 (FUNC_8 (FUNC_6 (VAR_13))) && VAR_14 < 128)
 return 128;
    }
  else if (FUNC_3 (VAR_13) == VAR_1)
    {
      if (FUNC_8 (VAR_13) == VAR_2 && VAR_14 < 64)
 return 64;
      if (FUNC_8 (VAR_13) == VAR_12 && VAR_14 < 128)
 return 128;
    }
  else if ((FUNC_3 (VAR_13) == VAR_8
     || FUNC_3 (VAR_13) == VAR_10
     || FUNC_3 (VAR_13) == VAR_6)
    && FUNC_7 (VAR_13))
    {
      if (FUNC_2 (FUNC_7 (VAR_13)) == VAR_3 && VAR_14 < 64)
 return 64;
      if (FUNC_1 (FUNC_2 (FUNC_7 (VAR_13))) && VAR_14 < 128)
 return 128;
    }
  else if (FUNC_3 (VAR_13) == VAR_7 || FUNC_3 (VAR_13) == VAR_11
    || FUNC_3 (VAR_13) == VAR_5)
    {

      if (FUNC_8 (VAR_13) == VAR_3 && VAR_14 < 64)
 return 64;
      if (FUNC_1 (FUNC_8 (VAR_13)) && VAR_14 < 128)
 return 128;
    }
  return VAR_14;
}
