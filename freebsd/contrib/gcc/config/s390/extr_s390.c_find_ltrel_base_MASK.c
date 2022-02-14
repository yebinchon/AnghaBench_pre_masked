
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static rtx
FUNC_7 (rtx VAR_3)
{
  int VAR_4, VAR_5;
  const char *VAR_6;

  if (FUNC_0 (VAR_3) == VAR_1
      && FUNC_4 (VAR_3, 1) == VAR_2)
    return FUNC_5 (VAR_3, 0, 0);

  VAR_6 = FUNC_1 (FUNC_0 (VAR_3));
  for (VAR_4 = FUNC_2 (FUNC_0 (VAR_3)) - 1; VAR_4 >= 0; VAR_4--)
    {
      if (VAR_6[VAR_4] == 'e')
        {
          rtx VAR_7 = FUNC_7 (FUNC_3 (VAR_3, VAR_4));
   if (VAR_7)
     return VAR_7;
        }
      else if (VAR_6[VAR_4] == 'E')
        {
          for (VAR_5 = 0; VAR_5 < FUNC_6 (VAR_3, VAR_4); VAR_5++)
     {
              rtx VAR_8 = FUNC_7 (FUNC_5 (VAR_3, VAR_4, VAR_5));
       if (VAR_8)
  return VAR_8;
     }
        }
    }

  return VAR_0;
}
