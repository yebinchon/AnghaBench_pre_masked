
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static rtx
FUNC_6 (rtx VAR_6, rtx *VAR_7, int VAR_8, int VAR_9)
{
  rtx VAR_10, VAR_11;
  rtx VAR_12;
  rtx VAR_13;
  int VAR_14, VAR_15;

  if (FUNC_0 (VAR_6) == VAR_2)
    {
      VAR_10 = FUNC_6 (FUNC_1 (VAR_6, 0), VAR_7, VAR_8, VAR_9);
      VAR_11 = FUNC_6 (FUNC_1 (VAR_6, 1), VAR_7, VAR_8, VAR_9);
      if (VAR_10 != FUNC_1 (VAR_6, 0) || VAR_11 != FUNC_1 (VAR_6, 1))
 {
   VAR_12 = FUNC_4 (FUNC_0 (VAR_6), VAR_10, VAR_11);

   VAR_6 = FUNC_5 (VAR_12, VAR_8, VAR_9);
 }
    }

  else if (FUNC_0 (VAR_6) == VAR_0)
    {


      VAR_13 = *VAR_7;
      VAR_10 = FUNC_6 (FUNC_1 (VAR_6, 0), &VAR_13, VAR_8, VAR_9);
      VAR_14 = (VAR_13 == VAR_4);

      VAR_13 = *VAR_7;
      VAR_11 = FUNC_6 (FUNC_1 (VAR_6, 1), &VAR_13, VAR_8, VAR_9);
      VAR_15 = (VAR_13 == VAR_4);

      if (VAR_14 && VAR_15)
 *VAR_7 = VAR_4;

      if (VAR_10 != FUNC_1 (VAR_6, 0) || VAR_11 != FUNC_1 (VAR_6, 1))
 {
   VAR_12 = FUNC_4 (FUNC_0 (VAR_6), VAR_10, VAR_11);

   VAR_6 = FUNC_5 (VAR_12, VAR_8, VAR_9);
 }
    }

  if (FUNC_3 (VAR_6, *VAR_7))
    return VAR_4;

  else if (FUNC_0 (VAR_6) == VAR_3 && FUNC_3 (FUNC_1 (VAR_6, 0), *VAR_7))
    return VAR_5;

  else if (FUNC_0 (*VAR_7) == VAR_3 && FUNC_3 (FUNC_1 (*VAR_7, 0), VAR_6))
    return VAR_5;

  else if (FUNC_0 (*VAR_7) == VAR_1 && FUNC_0 (VAR_6) == VAR_3
    && FUNC_0 (FUNC_1 (VAR_6, 0)) == VAR_1
    && FUNC_2 (*VAR_7, 0) == FUNC_2 (FUNC_1 (VAR_6, 0), 0))
    *VAR_7 = VAR_4;

  else if (FUNC_0 (VAR_6) == VAR_1 && FUNC_0 (*VAR_7) == VAR_3
    && FUNC_0 (FUNC_1 (*VAR_7, 0)) == VAR_1
    && FUNC_2 (VAR_6, 0) == FUNC_2 (FUNC_1 (*VAR_7, 0), 0))
    return VAR_4;

  return VAR_6;
}
