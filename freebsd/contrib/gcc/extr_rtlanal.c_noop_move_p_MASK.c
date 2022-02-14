
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

int
FUNC_7 (rtx VAR_8)
{
  rtx VAR_9 = FUNC_2 (VAR_8);

  if (FUNC_1 (VAR_8) == VAR_1)
    return 1;


  if (FUNC_5 (VAR_8, VAR_4, VAR_2))
    return 0;



  if (FUNC_5 (VAR_8, VAR_5, VAR_2))
    return 0;

  if (FUNC_0 (VAR_9) == VAR_6 && FUNC_6 (VAR_9))
    return 1;

  if (FUNC_0 (VAR_9) == VAR_3)
    {
      int VAR_10;


      for (VAR_10 = 0; VAR_10 < FUNC_4 (VAR_9, 0); VAR_10++)
 {
   rtx VAR_11 = FUNC_3 (VAR_9, 0, VAR_10);

   if (FUNC_0 (VAR_11) == VAR_7
       || FUNC_0 (VAR_11) == VAR_0)
     continue;

   if (FUNC_0 (VAR_11) != VAR_6 || ! FUNC_6 (VAR_11))
     return 0;
 }

      return 1;
    }
  return 0;
}
