
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;

rtx
FUNC_8 (unsigned int VAR_1, rtx VAR_2)
{
  const char *VAR_3;
  int VAR_4, VAR_5;
  rtx VAR_6;

  if (FUNC_4 (VAR_2) && FUNC_3 (VAR_2) == VAR_1)
    return VAR_2;

  VAR_3 = FUNC_1 (FUNC_0 (VAR_2));
  for (VAR_4 = FUNC_2 (FUNC_0 (VAR_2)) - 1; VAR_4 >= 0; VAR_4--)
    {
      if (VAR_3[VAR_4] == 'e')
 {
   if ((VAR_6 = FUNC_8 (VAR_1, FUNC_5 (VAR_2, VAR_4))))
     return VAR_6;
 }
      else if (VAR_3[VAR_4] == 'E')
 for (VAR_5 = FUNC_7 (VAR_2, VAR_4) - 1; VAR_5 >= 0; VAR_5--)
   if ((VAR_6 = FUNC_8 (VAR_1 , FUNC_6 (VAR_2, VAR_4, VAR_5))))
     return VAR_6;
    }

  return VAR_0;
}
