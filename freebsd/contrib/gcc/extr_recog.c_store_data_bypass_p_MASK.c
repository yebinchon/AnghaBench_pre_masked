
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;

int
FUNC_9 (rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5, VAR_6;

  VAR_6 = FUNC_8 (VAR_4);
  FUNC_6 (VAR_6);

  if (!FUNC_1 (FUNC_3 (VAR_6)))
    return 0;

  VAR_5 = FUNC_8 (VAR_3);
  if (VAR_5)
    {
      if (FUNC_7 (FUNC_3 (VAR_5), FUNC_3 (VAR_6)))
 return 0;
    }
  else
    {
      rtx VAR_7;
      int VAR_8;

      VAR_7 = FUNC_2 (VAR_3);
      FUNC_6 (FUNC_0 (VAR_7) == VAR_1);

      for (VAR_8 = 0; VAR_8 < FUNC_5 (VAR_7, 0); VAR_8++)
 {
   rtx VAR_9 = FUNC_4 (VAR_7, 0, VAR_8);

   if (FUNC_0 (VAR_9) == VAR_0)
     continue;

   FUNC_6 (FUNC_0 (VAR_9) == VAR_2);

   if (FUNC_7 (FUNC_3 (VAR_9), FUNC_3 (VAR_6)))
     return 0;
 }
    }

  return 1;
}
