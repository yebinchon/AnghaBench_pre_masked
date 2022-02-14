
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
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;

int
FUNC_7 (rtx VAR_3)
{
  const char * VAR_4;
  int VAR_5;

  if (FUNC_0 (VAR_3) == VAR_0)
    return 1;



  if (FUNC_0 (VAR_3) == VAR_1 && FUNC_4 (VAR_3, 1) == VAR_2)
    return 0;

  VAR_4 = FUNC_1 (FUNC_0 (VAR_3));
  for (VAR_5 = FUNC_2 (FUNC_0 (VAR_3)) - 1; VAR_5 >= 0; VAR_5--)
    {
      if (VAR_4[VAR_5] == 'E')
 {
   int VAR_6;

   for (VAR_6 = FUNC_6 (VAR_3, VAR_5) - 1; VAR_6 >= 0; VAR_6--)
     if (FUNC_7 (FUNC_5 (VAR_3, VAR_5, VAR_6)))
       return 1;
 }
      else if (VAR_4[VAR_5] == 'e' && FUNC_7 (FUNC_3 (VAR_3, VAR_5)))
 return 1;
    }

  return 0;
}
