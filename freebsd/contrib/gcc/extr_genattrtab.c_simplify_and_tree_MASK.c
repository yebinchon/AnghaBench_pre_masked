
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__,int,int) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_7, rtx *VAR_8, int VAR_9, int VAR_10)
{
  rtx VAR_11, VAR_12;
  rtx VAR_13;
  rtx VAR_14;
  int VAR_15, VAR_16;

  if (FUNC_0 (VAR_7) == VAR_0)
    {
      VAR_11 = FUNC_9 (FUNC_1 (VAR_7, 0), VAR_8, VAR_9, VAR_10);
      VAR_12 = FUNC_9 (FUNC_1 (VAR_7, 1), VAR_8, VAR_9, VAR_10);
      if (VAR_11 != FUNC_1 (VAR_7, 0) || VAR_12 != FUNC_1 (VAR_7, 1))
 {
   VAR_13 = FUNC_6 (VAR_0, VAR_11, VAR_12);

   VAR_7 = FUNC_7 (VAR_13, VAR_9, VAR_10);
 }
    }

  else if (FUNC_0 (VAR_7) == VAR_3)
    {


      VAR_14 = *VAR_8;
      VAR_11 = FUNC_9 (FUNC_1 (VAR_7, 0), &VAR_14, VAR_9, VAR_10);
      VAR_15 = (VAR_14 == VAR_6);

      VAR_14 = *VAR_8;
      VAR_12 = FUNC_9 (FUNC_1 (VAR_7, 1), &VAR_14, VAR_9, VAR_10);
      VAR_16 = (VAR_14 == VAR_6);

      if (VAR_15 && VAR_16)
 *VAR_8 = VAR_6;

      if (VAR_11 != FUNC_1 (VAR_7, 0) || VAR_12 != FUNC_1 (VAR_7, 1))
 {
   VAR_13 = FUNC_6 (VAR_3, VAR_11, VAR_12);

   VAR_7 = FUNC_7 (VAR_13, VAR_9, VAR_10);
 }
    }




  if (VAR_7 == *VAR_8)
    return VAR_6;

  else if (FUNC_0 (VAR_7) == VAR_4 && FUNC_1 (VAR_7, 0) == *VAR_8)
    return VAR_5;

  else if (FUNC_0 (*VAR_8) == VAR_4 && VAR_7 == FUNC_1 (*VAR_8, 0))
    return VAR_5;

  else if (FUNC_0 (VAR_7) == VAR_2 && FUNC_0 (*VAR_8) == VAR_2)
    {
      if (FUNC_4 (*VAR_8, VAR_7))
 return VAR_6;

      if (FUNC_3 (*VAR_8, VAR_7))
 return VAR_5;

      if (FUNC_4 (VAR_7, *VAR_8))
 *VAR_8 = VAR_6;

      return VAR_7;
    }

  else if (FUNC_0 (VAR_7) == VAR_1 && FUNC_0 (*VAR_8) == VAR_1)
    {
      if (FUNC_2 (VAR_7, 0) != FUNC_2 (*VAR_8, 0))
 return VAR_7;

      if (! FUNC_8 (FUNC_2 (VAR_7, 1), FUNC_2 (*VAR_8, 1)))
 return VAR_6;
      else
 return VAR_5;
    }

  else if (FUNC_0 (*VAR_8) == VAR_1 && FUNC_0 (VAR_7) == VAR_4
    && FUNC_0 (FUNC_1 (VAR_7, 0)) == VAR_1)
    {
      if (FUNC_2 (*VAR_8, 0) != FUNC_2 (FUNC_1 (VAR_7, 0), 0))
 return VAR_7;

      if (! FUNC_8 (FUNC_2 (*VAR_8, 1), FUNC_2 (FUNC_1 (VAR_7, 0), 1)))
 return VAR_5;
      else
 return VAR_6;
    }

  else if (FUNC_0 (VAR_7) == VAR_1 && FUNC_0 (*VAR_8) == VAR_4
    && FUNC_0 (FUNC_1 (*VAR_8, 0)) == VAR_1)
    {
      if (FUNC_2 (VAR_7, 0) != FUNC_2 (FUNC_1 (*VAR_8, 0), 0))
 return VAR_7;

      if (! FUNC_8 (FUNC_2 (VAR_7, 1), FUNC_2 (FUNC_1 (*VAR_8, 0), 1)))
 return VAR_5;
      else
 *VAR_8 = VAR_6;
    }

  else if (FUNC_0 (VAR_7) == VAR_4 && FUNC_0 (*VAR_8) == VAR_4)
    {
      if (FUNC_5 (FUNC_1 (VAR_7, 0), FUNC_1 (*VAR_8, 0)))
 return VAR_6;
    }

  else if (FUNC_0 (VAR_7) == VAR_4)
    {
      if (FUNC_5 (FUNC_1 (VAR_7, 0), *VAR_8))
 return VAR_5;
    }

  else if (FUNC_0 (*VAR_8) == VAR_4)
    {
      if (FUNC_5 (FUNC_1 (*VAR_8, 0), VAR_7))
 return VAR_5;
    }

  else if (FUNC_5 (VAR_7, *VAR_8))
    return VAR_6;

  return VAR_7;
}
