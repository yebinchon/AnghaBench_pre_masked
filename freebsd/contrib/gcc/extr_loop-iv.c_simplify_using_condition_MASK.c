
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef scalar_t__ regset ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

void
FUNC_6 (rtx VAR_3, rtx *VAR_4, regset VAR_5)
{
  rtx VAR_6, VAR_7, VAR_8 = *VAR_4;

  if (!FUNC_0 (VAR_8))
    return;



  if (VAR_5
      && FUNC_2 (&VAR_3, VAR_0, VAR_5))
    return;

  VAR_6 = FUNC_4 (VAR_3);
  VAR_7 = FUNC_4 (VAR_8);

  VAR_3 = FUNC_1 (VAR_3);
  VAR_8 = FUNC_1 (VAR_8);
  if (VAR_6)
    VAR_6 = FUNC_1 (VAR_6);
  if (VAR_7)
    VAR_7 = FUNC_1 (VAR_7);

  if (FUNC_5 (VAR_8, VAR_3))
    {
      *VAR_4 = VAR_2;
      return;
    }


  if (VAR_6 && FUNC_5 (VAR_8, VAR_6))
    {
      *VAR_4 = VAR_1;
      return;
    }

  if (FUNC_3 (VAR_3, VAR_8))
    {
      *VAR_4 = VAR_2;
      return;
    }

  if (VAR_7 && FUNC_3 (VAR_3, VAR_7))
    {
      *VAR_4 = VAR_1;
      return;
    }



  if (VAR_6 && FUNC_3 (VAR_8, VAR_6))
    {
      *VAR_4 = VAR_1;
      return;
    }


  if (VAR_6 && VAR_7 && FUNC_3 (VAR_7, VAR_6))
    {
      *VAR_4 = VAR_2;
      return;
    }



  return;
}
