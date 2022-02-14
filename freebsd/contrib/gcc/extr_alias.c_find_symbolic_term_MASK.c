
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static rtx
FUNC_5 (rtx VAR_2)
{
  int VAR_3;
  enum rtx_code VAR_4;
  const char *VAR_5;

  VAR_4 = FUNC_0 (VAR_2);
  if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
    return VAR_2;
  if (FUNC_3 (VAR_2))
    return 0;

  VAR_5 = FUNC_1 (VAR_4);
  for (VAR_3 = FUNC_2 (VAR_4) - 1; VAR_3 >= 0; VAR_3--)
    {
      rtx VAR_6;

      if (VAR_5[VAR_3] == 'e')
 {
   VAR_6 = FUNC_5 (FUNC_4 (VAR_2, VAR_3));
   if (VAR_6 != 0)
     return VAR_6;
 }
      else if (VAR_5[VAR_3] == 'E')
 break;
    }
  return 0;
}
