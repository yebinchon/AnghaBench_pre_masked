
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,scalar_t__,scalar_t__) ;

rtx
FUNC_5 (rtx VAR_3, rtx *VAR_4)
{
  rtx VAR_5, VAR_6;
  rtx VAR_7;

  if (FUNC_0 (VAR_3) != VAR_1)
    return VAR_3;


  if (FUNC_0 (FUNC_2 (VAR_3, 1)) == VAR_0
      && 0 != (VAR_7 = FUNC_4 (VAR_1, FUNC_1 (VAR_3), *VAR_4,
      FUNC_2 (VAR_3, 1)))
      && FUNC_0 (VAR_7) == VAR_0)
    {
      *VAR_4 = VAR_7;
      return FUNC_5 (FUNC_2 (VAR_3, 0), VAR_4);
    }

  VAR_7 = VAR_2;
  VAR_5 = FUNC_5 (FUNC_2 (VAR_3, 0), &VAR_7);
  VAR_6 = FUNC_5 (FUNC_2 (VAR_3, 1), &VAR_7);
  if ((VAR_6 != FUNC_2 (VAR_3, 1) || VAR_5 != FUNC_2 (VAR_3, 0))
      && 0 != (VAR_7 = FUNC_4 (VAR_1, FUNC_1 (VAR_3),
      *VAR_4, VAR_7))
      && FUNC_0 (VAR_7) == VAR_0)
    {
      *VAR_4 = VAR_7;
      return FUNC_3 (FUNC_1 (VAR_3), VAR_5, VAR_6);
    }

  return VAR_3;
}
