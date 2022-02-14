
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;

int
FUNC_10 (tree VAR_15, int VAR_16)
{
  int VAR_17 = VAR_14 ? VAR_1 : 256;

  if (FUNC_0 (VAR_15)
      && FUNC_9 (VAR_15)
      && FUNC_3 (FUNC_9 (VAR_15)) == VAR_5
      && (FUNC_5 (FUNC_9 (VAR_15)) >= (unsigned) VAR_17
   || FUNC_4 (FUNC_9 (VAR_15)))
      && VAR_16 < VAR_17)
    VAR_16 = VAR_17;



  if (VAR_10)
    {
      if (FUNC_0 (VAR_15)
    && FUNC_9 (VAR_15)
    && FUNC_3 (FUNC_9 (VAR_15)) == VAR_5
    && (FUNC_5 (FUNC_9 (VAR_15)) >= 128
        || FUNC_4 (FUNC_9 (VAR_15))) && VAR_16 < 128)
 return 128;
    }

  if (FUNC_3 (VAR_15) == VAR_0)
    {
      if (FUNC_8 (FUNC_6 (VAR_15)) == VAR_4 && VAR_16 < 64)
 return 64;
      if (FUNC_1 (FUNC_8 (FUNC_6 (VAR_15))) && VAR_16 < 128)
 return 128;
    }
  else if (FUNC_3 (VAR_15) == VAR_2)
    {

      if (FUNC_8 (VAR_15) == VAR_3 && VAR_16 < 64)
 return 64;
      if (FUNC_8 (VAR_15) == VAR_13 && VAR_16 < 128)
 return 128;
    }
  else if ((FUNC_3 (VAR_15) == VAR_9
     || FUNC_3 (VAR_15) == VAR_11
     || FUNC_3 (VAR_15) == VAR_7)
    && FUNC_7 (VAR_15))
    {
      if (FUNC_2 (FUNC_7 (VAR_15)) == VAR_4 && VAR_16 < 64)
 return 64;
      if (FUNC_1 (FUNC_2 (FUNC_7 (VAR_15))) && VAR_16 < 128)
 return 128;
    }
  else if (FUNC_3 (VAR_15) == VAR_8 || FUNC_3 (VAR_15) == VAR_12
    || FUNC_3 (VAR_15) == VAR_6)
    {
      if (FUNC_8 (VAR_15) == VAR_4 && VAR_16 < 64)
 return 64;
      if (FUNC_1 (FUNC_8 (VAR_15)) && VAR_16 < 128)
 return 128;
    }

  return VAR_16;
}
