
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int VAR_1 ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12 (rtx VAR_2, int VAR_3, int *VAR_4)
{
  rtx VAR_5;

  if (FUNC_2 (VAR_2)
      && (VAR_5 = FUNC_11 (VAR_2)))
    {
      rtx VAR_6 = FUNC_5 (VAR_5);
      rtx VAR_7 = FUNC_6 (VAR_5);

      if (FUNC_1 (VAR_6) == VAR_0)
 VAR_6 = FUNC_8 (VAR_6, 0);

      if (FUNC_4 (VAR_6)
   && FUNC_7 (VAR_1, FUNC_3 (VAR_6)))
 {
   FUNC_10 (!FUNC_9 (VAR_7, ((void*)0)));

   if (!VAR_3 || FUNC_0 (VAR_7))
     {
       if (VAR_4)
  *VAR_4 = FUNC_3 (VAR_6);
       return 1;
     }
 }
    }
  return 0;
}
