
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


 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

int
FUNC_9 (rtx VAR_1, rtx VAR_2)
{
  const char *VAR_3;
  int VAR_4;
  enum rtx_code VAR_5;

  if (VAR_2 == 0)
    return 0;

  if (VAR_1 == VAR_2)
    return 1;

  if (FUNC_0 (VAR_2) == VAR_0)
    return VAR_1 == FUNC_5 (VAR_2, 0);

  VAR_5 = FUNC_0 (VAR_2);

  switch (VAR_5)
    {

    case 129:
      return FUNC_4 (VAR_1) && FUNC_3 (VAR_2) == FUNC_3 (VAR_1);



    case 128:
    case 134:
    case 130:
      return 0;

    case 132:
    case 131:
    case 133:

      return 0;

    default:
      break;
    }

  if (FUNC_0 (VAR_1) == VAR_5 && FUNC_8 (VAR_1, VAR_2))
    return 1;

  VAR_3 = FUNC_1 (VAR_5);

  for (VAR_4 = FUNC_2 (VAR_5) - 1; VAR_4 >= 0; VAR_4--)
    {
      if (VAR_3[VAR_4] == 'E')
 {
   int VAR_6;
   for (VAR_6 = FUNC_7 (VAR_2, VAR_4) - 1; VAR_6 >= 0; VAR_6--)
     if (FUNC_9 (VAR_1, FUNC_6 (VAR_2, VAR_4, VAR_6)))
       return 1;
 }
      else if (VAR_3[VAR_4] == 'e'
        && FUNC_9 (VAR_1, FUNC_5 (VAR_2, VAR_4)))
 return 1;
    }
  return 0;
}
