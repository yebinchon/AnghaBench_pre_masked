
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,unsigned int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_9 (int ,int ,unsigned int) ;

int
FUNC_10 (rtx VAR_5, unsigned int VAR_6)
{
  rtx VAR_7;


  if (FUNC_9 (VAR_5, VAR_3, VAR_6))
    return 1;

  if (FUNC_0 (VAR_5)
      && FUNC_8 (VAR_5, VAR_0, VAR_6))
    return 1;

  VAR_7 = FUNC_3 (VAR_5);

  if (FUNC_2 (VAR_7) == VAR_1)
    VAR_7 = FUNC_1 (VAR_7);

  if (FUNC_2 (VAR_7) == VAR_4)
    return FUNC_7 (FUNC_4 (VAR_7), VAR_6);
  else if (FUNC_2 (VAR_7) == VAR_2)
    {
      int VAR_8;

      for (VAR_8 = FUNC_6 (VAR_7, 0) - 1; VAR_8 >= 0; VAR_8--)
 {
   rtx VAR_9 = FUNC_5 (VAR_7, 0, VAR_8);

   if (FUNC_2 (VAR_9) == VAR_1)
     VAR_9 = FUNC_1 (VAR_9);

   if ((FUNC_2 (VAR_9) == VAR_4 || FUNC_2 (VAR_9) == VAR_0)
       && FUNC_7 (FUNC_4 (VAR_9), VAR_6))
     return 1;
 }
    }

  return 0;
}
