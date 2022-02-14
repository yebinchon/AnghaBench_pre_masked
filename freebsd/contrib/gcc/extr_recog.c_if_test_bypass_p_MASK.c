
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

int
FUNC_12 (rtx VAR_4, rtx VAR_5)
{
  rtx VAR_6, VAR_7;

  VAR_7 = FUNC_11 (VAR_5);
  if (! VAR_7)
    {
      FUNC_9 (FUNC_2 (VAR_5) || FUNC_0 (VAR_5));
      return 0;
    }

  if (FUNC_1 (FUNC_5 (VAR_7)) != VAR_1)
    return 0;
  VAR_7 = FUNC_5 (VAR_7);

  VAR_6 = FUNC_11 (VAR_4);
  if (VAR_6)
    {
      if (FUNC_10 (FUNC_4 (VAR_6), FUNC_6 (VAR_7, 1))
   || FUNC_10 (FUNC_4 (VAR_6), FUNC_6 (VAR_7, 2)))
 return 0;
    }
  else
    {
      rtx VAR_8;
      int VAR_9;

      VAR_8 = FUNC_3 (VAR_4);
      FUNC_9 (FUNC_1 (VAR_8) == VAR_2);

      for (VAR_9 = 0; VAR_9 < FUNC_8 (VAR_8, 0); VAR_9++)
 {
   rtx VAR_10 = FUNC_7 (VAR_8, 0, VAR_9);

   if (FUNC_1 (VAR_10) == VAR_0)
     continue;

   FUNC_9 (FUNC_1 (VAR_10) == VAR_3);

   if (FUNC_10 (FUNC_4 (VAR_6), FUNC_6 (VAR_7, 1))
       || FUNC_10 (FUNC_4 (VAR_6), FUNC_6 (VAR_7, 2)))
     return 0;
 }
    }

  return 1;
}
