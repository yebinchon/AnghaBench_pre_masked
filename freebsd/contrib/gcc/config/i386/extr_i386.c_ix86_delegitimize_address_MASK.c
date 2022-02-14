
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
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_7 (rtx VAR_16)
{
  rtx VAR_17 = VAR_16;

  rtx VAR_18 = VAR_5;

  rtx VAR_19 = VAR_5;

  rtx VAR_20 = VAR_5;

  if (FUNC_0 (VAR_17) == VAR_3)
    VAR_17 = FUNC_2 (VAR_17, 0);

  if (VAR_10)
    {
      if (FUNC_0 (VAR_17) != VAR_1
   || FUNC_0 (FUNC_2 (VAR_17, 0)) != VAR_12
   || FUNC_3 (FUNC_2 (VAR_17, 0), 1) != VAR_15
   || FUNC_0 (VAR_16) != VAR_3)
 return VAR_16;
      return FUNC_4 (FUNC_2 (VAR_17, 0), 0, 0);
    }

  if (FUNC_0 (VAR_17) != VAR_7
      || FUNC_0 (FUNC_2 (VAR_17, 1)) != VAR_1)
    return VAR_16;

  if (FUNC_0 (FUNC_2 (VAR_17, 0)) == VAR_9
      && FUNC_1 (FUNC_2 (VAR_17, 0)) == VAR_6)

    ;
  else if (FUNC_0 (FUNC_2 (VAR_17, 0)) == VAR_7)
    {

      VAR_18 = FUNC_2 (VAR_17, 0);
      if (FUNC_0 (FUNC_2 (VAR_18, 0)) == VAR_9
   && FUNC_1 (FUNC_2 (VAR_18, 0)) == VAR_6)
 VAR_18 = FUNC_2 (VAR_18, 1);
      else if (FUNC_0 (FUNC_2 (VAR_18, 1)) == VAR_9
        && FUNC_1 (FUNC_2 (VAR_18, 1)) == VAR_6)
 VAR_18 = FUNC_2 (VAR_18, 0);
      else
 return VAR_16;
      if (FUNC_0 (VAR_18) != VAR_9
   && FUNC_0 (VAR_18) != VAR_4
   && FUNC_0 (VAR_18) != VAR_0)
 return VAR_16;
    }
  else
    return VAR_16;

  VAR_17 = FUNC_2 (FUNC_2 (VAR_17, 1), 0);
  if (FUNC_0 (VAR_17) == VAR_7
      && FUNC_0 (FUNC_2 (VAR_17, 1)) == VAR_2)
    {
      VAR_19 = FUNC_2 (VAR_17, 1);
      VAR_17 = FUNC_2 (VAR_17, 0);
    }

  if (FUNC_0 (VAR_17) == VAR_12
      && ((FUNC_3 (VAR_17, 1) == VAR_13 && FUNC_0 (VAR_16) == VAR_3)
   || (FUNC_3 (VAR_17, 1) == VAR_14 && FUNC_0 (VAR_16) != VAR_3)))
    VAR_20 = FUNC_4 (VAR_17, 0, 0);

  if (VAR_11 && FUNC_5 (VAR_17)
      && FUNC_0 (VAR_16) != VAR_3)
    VAR_20 = FUNC_2 (VAR_17, 0);

  if (! VAR_20)
    return VAR_16;

  if (VAR_19)
    VAR_20 = FUNC_6 (VAR_8, VAR_20, VAR_19);
  if (VAR_18)
    VAR_20 = FUNC_6 (VAR_8, VAR_18, VAR_20);
  return VAR_20;
}
