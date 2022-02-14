
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;

int
FUNC_8 (rtx VAR_2, int VAR_3)
{
  enum rtx_code VAR_4;
  int VAR_5;
  const char *VAR_6;

  if (VAR_2 == 0)
    return 0;

  VAR_4 = FUNC_0 (VAR_2);
  if (VAR_4 == VAR_1)
    return FUNC_1 (VAR_2) == VAR_0 || FUNC_7 (FUNC_4 (VAR_2, 0), VAR_3);

  VAR_6 = FUNC_2 (VAR_4);
  for (VAR_5 = FUNC_3 (VAR_4) - 1; VAR_5 >= 0; VAR_5--)
    if (VAR_6[VAR_5] == 'e')
      {
 if (FUNC_8 (FUNC_4 (VAR_2, VAR_5), VAR_3))
   return 1;
      }
    else if (VAR_6[VAR_5] == 'E')
      {
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < FUNC_6 (VAR_2, VAR_5); VAR_7++)
   if (FUNC_8 (FUNC_5 (VAR_2, VAR_5, VAR_7), VAR_3))
     return 1;
      }
  return 0;
}
