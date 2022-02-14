
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;







 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;



 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;

int
FUNC_10 (rtx VAR_0, rtx VAR_1, rtx VAR_2)
{
  enum rtx_code VAR_3 = FUNC_0 (VAR_0);
  const char *VAR_4;
  int VAR_5, VAR_6;
  rtx VAR_7;

  if (VAR_1 == VAR_2)
    return 0;

  switch (VAR_3)
    {
    case 134:
    case 135:
    case 133:
    case 136:
    case 128:
    case 132:
      return 0;

    case 130:
    case 137:
      return 1;

    case 131:
      if (FUNC_10 (FUNC_5 (VAR_0, 0), VAR_1, VAR_2))
 return 1;
      if (FUNC_3 (VAR_0))
 return 0;
      for (VAR_7 = FUNC_4 (VAR_1); VAR_7 != VAR_2; VAR_7 = FUNC_4 (VAR_7))
 if (FUNC_8 (VAR_0, VAR_7))
   return 1;
      return 0;
      break;

    case 129:
      return FUNC_9 (VAR_0, VAR_1, VAR_2);

    default:
      break;
    }

  VAR_4 = FUNC_1 (VAR_3);
  for (VAR_5 = FUNC_2 (VAR_3) - 1; VAR_5 >= 0; VAR_5--)
    {
      if (VAR_4[VAR_5] == 'e' && FUNC_10 (FUNC_5 (VAR_0, VAR_5), VAR_1, VAR_2))
 return 1;

      else if (VAR_4[VAR_5] == 'E')
 for (VAR_6 = FUNC_7 (VAR_0, VAR_5) - 1; VAR_6 >= 0; VAR_6--)
   if (FUNC_10 (FUNC_6 (VAR_0, VAR_5, VAR_6), VAR_1, VAR_2))
     return 1;
    }

  return 0;
}
