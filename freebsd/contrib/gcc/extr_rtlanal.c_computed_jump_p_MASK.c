
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;

int
FUNC_10 (rtx VAR_7)
{
  int VAR_8;
  if (FUNC_1 (VAR_7))
    {
      rtx VAR_9 = FUNC_2 (VAR_7);

      if (FUNC_9 (VAR_7, VAR_3, VAR_1))
 return 0;
      else if (FUNC_0 (VAR_9) == VAR_2)
 {
   int VAR_10 = FUNC_7 (VAR_9, 0);
   int VAR_11 = 0;

   for (VAR_8 = VAR_10 - 1; VAR_8 >= 0; VAR_8--)
     if (FUNC_0 (FUNC_6 (VAR_9, 0, VAR_8)) == VAR_5
  && (FUNC_0 (FUNC_5 (FUNC_6 (VAR_9, 0, VAR_8), 0))
      == VAR_0))
       VAR_11 = 1;

   if (! VAR_11)
     for (VAR_8 = VAR_10 - 1; VAR_8 >= 0; VAR_8--)
       if (FUNC_0 (FUNC_6 (VAR_9, 0, VAR_8)) == VAR_4
    && FUNC_3 (FUNC_6 (VAR_9, 0, VAR_8)) == VAR_6
    && FUNC_8 (FUNC_4 (FUNC_6 (VAR_9, 0, VAR_8))))
  return 1;
 }
      else if (FUNC_0 (VAR_9) == VAR_4
        && FUNC_3 (VAR_9) == VAR_6
        && FUNC_8 (FUNC_4 (VAR_9)))
 return 1;
    }
  return 0;
}
