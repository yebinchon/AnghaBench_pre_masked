
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;

int
FUNC_6 (rtx VAR_4, rtx VAR_5, rtx VAR_6)
{
  rtx VAR_7, VAR_8;
  unsigned int VAR_9;
  HOST_WIDE_INT VAR_10;


  if (FUNC_3 (VAR_4) || FUNC_3 (VAR_5))
    return 0;


  if (FUNC_2 (VAR_4) < 64)
    return 0;

  VAR_7 = FUNC_5 (VAR_4, 0);
  VAR_8 = FUNC_5 (VAR_5, 0);


  if (FUNC_0 (VAR_7) == VAR_2)
    {

      if (FUNC_0 (FUNC_5 (VAR_7, 0)) != VAR_3)
 return 0;
      else
 {
          VAR_9 = FUNC_4 (FUNC_5 (VAR_7, 0));

   if (FUNC_0 (FUNC_5 (VAR_7, 1)) != VAR_0)
            return 0;
          VAR_10 = FUNC_1 (FUNC_5 (VAR_7, 1));
 }
    }
  else if (FUNC_0 (VAR_7) != VAR_3)
    return 0;
  else
    {
      VAR_9 = FUNC_4 (VAR_7);

      VAR_10 = 0;
    }


  if (FUNC_0 (VAR_8) != VAR_2)
    return 0;

  if (FUNC_0 (FUNC_5 (VAR_8, 0)) != VAR_3
      || FUNC_0 (FUNC_5 (VAR_8, 1)) != VAR_0)
    return 0;

  if (VAR_9 != FUNC_4 (FUNC_5 (VAR_8, 0)))
    return 0;

  if (VAR_6 != VAR_1 && VAR_9 == FUNC_4 (VAR_6))
    return 0;



  if (VAR_10 % 8 != 0)
    return 0;


  if (FUNC_1 (FUNC_5 (VAR_8, 1)) != VAR_10 + 4)
    return 0;



  return 1;
}
