
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static bool
FUNC_6 (rtx VAR_5, int *VAR_6)
{
  int VAR_7;
  if (VAR_4 && FUNC_4 (FUNC_1 (VAR_5)))
    return 1;
  else if (FUNC_0 (FUNC_1 (VAR_5)) == VAR_2)
    return FUNC_5 (FUNC_1 (VAR_5), VAR_5, VAR_6);
  else if (FUNC_0 (FUNC_1 (VAR_5)) == VAR_1)
    {
      for (VAR_7 = FUNC_3 (FUNC_1 (VAR_5), 0) - 1; VAR_7 >= 0; VAR_7--)
 {
   rtx VAR_8 = FUNC_2 (FUNC_1 (VAR_5), 0, VAR_7);

   if (FUNC_0 (VAR_8) == VAR_2)
     {
       if (FUNC_5 (VAR_8, VAR_5, VAR_6))
  return 1;
     }
   else if (FUNC_0 (VAR_8) != VAR_0 && FUNC_0 (VAR_8) != VAR_3)
     return 1;
 }
      return 0;
    }
  else
    return 1;
}
