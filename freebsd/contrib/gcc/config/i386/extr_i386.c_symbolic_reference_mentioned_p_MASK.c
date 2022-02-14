
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;

int
FUNC_6 (rtx VAR_2)
{
  const char *VAR_3;
  int VAR_4;

  if (FUNC_0 (VAR_2) == VAR_1 || FUNC_0 (VAR_2) == VAR_0)
    return 1;

  VAR_3 = FUNC_1 (FUNC_0 (VAR_2));
  for (VAR_4 = FUNC_2 (FUNC_0 (VAR_2)) - 1; VAR_4 >= 0; VAR_4--)
    {
      if (VAR_3[VAR_4] == 'E')
 {
   int VAR_5;

   for (VAR_5 = FUNC_5 (VAR_2, VAR_4) - 1; VAR_5 >= 0; VAR_5--)
     if (FUNC_6 (FUNC_4 (VAR_2, VAR_4, VAR_5)))
       return 1;
 }

      else if (VAR_3[VAR_4] == 'e' && FUNC_6 (FUNC_3 (VAR_2, VAR_4)))
 return 1;
    }

  return 0;
}
