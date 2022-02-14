
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

bool
FUNC_7 (rtx VAR_1)
{
  const char *VAR_2;
  int VAR_3;

  if (FUNC_0 (VAR_1) == VAR_0)
    return FUNC_6 (VAR_1);

  VAR_2 = FUNC_1 (FUNC_0 (VAR_1));
  for (VAR_3 = FUNC_2 (FUNC_0 (VAR_1)) - 1; VAR_3 >= 0; VAR_3--)
    {
      if (VAR_2[VAR_3] == 'E')
 {
   int VAR_4;

   for (VAR_4 = FUNC_5 (VAR_1, VAR_3) - 1; VAR_4 >= 0; VAR_4--)
     if (FUNC_7 (FUNC_4 (VAR_1, VAR_3, VAR_4)))
       return 1;
 }

      else if (VAR_2[VAR_3] == 'e' && FUNC_7 (FUNC_3 (VAR_1, VAR_3)))
 return 1;
    }

  return 0;
}
