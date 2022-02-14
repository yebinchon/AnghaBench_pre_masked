
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int,int,int ,int ) ;
 int FUNC_12 (int,int ) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static bool
FUNC_14 (rtx VAR_8, rtx VAR_9)
{
  rtx VAR_10, VAR_11;

  if (FUNC_0 (VAR_8) == VAR_1)
      VAR_8 = FUNC_1 (VAR_8);

  if (FUNC_0 (VAR_8) == VAR_4)
    {
      VAR_10 = FUNC_3 (VAR_8);
      if (FUNC_0 (VAR_10) == VAR_5)
 VAR_10 = FUNC_6 (VAR_10, 0);
      while (FUNC_0 (VAR_10) == VAR_6)
 VAR_10 = FUNC_5 (VAR_10);

      if (FUNC_0 (VAR_10) == VAR_3)
 {
   int VAR_12 = FUNC_2 (VAR_10);

   if (FUNC_13 (VAR_9) == VAR_7)
     {
       VAR_11 = FUNC_1 (VAR_9);
       if (FUNC_0 (VAR_11) == VAR_2)
  {
    FUNC_9 (FUNC_8 (VAR_11, 0) == 2);
    VAR_11 = FUNC_7 (VAR_11, 0, 0);
  }
       FUNC_9 (FUNC_0 (VAR_11) == VAR_4);
       return FUNC_11 (VAR_12, VAR_12+1, FUNC_4 (VAR_11), 0);
     }
   else if (FUNC_10 (VAR_9) == VAR_0)
     return FUNC_12 (VAR_12, FUNC_1 (VAR_9));
 }
    }
  return 0;
}
