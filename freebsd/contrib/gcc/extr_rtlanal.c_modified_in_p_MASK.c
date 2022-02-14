
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



 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;

int
FUNC_9 (rtx VAR_0, rtx VAR_1)
{
  enum rtx_code VAR_2 = FUNC_0 (VAR_0);
  const char *VAR_3;
  int VAR_4, VAR_5;

  switch (VAR_2)
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
      if (FUNC_9 (FUNC_4 (VAR_0, 0), VAR_1))
 return 1;
      if (FUNC_3 (VAR_0))
 return 0;
      if (FUNC_7 (VAR_0, VAR_1))
 return 1;
      return 0;
      break;

    case 129:
      return FUNC_8 (VAR_0, VAR_1);

    default:
      break;
    }

  VAR_3 = FUNC_1 (VAR_2);
  for (VAR_4 = FUNC_2 (VAR_2) - 1; VAR_4 >= 0; VAR_4--)
    {
      if (VAR_3[VAR_4] == 'e' && FUNC_9 (FUNC_4 (VAR_0, VAR_4), VAR_1))
 return 1;

      else if (VAR_3[VAR_4] == 'E')
 for (VAR_5 = FUNC_6 (VAR_0, VAR_4) - 1; VAR_5 >= 0; VAR_5--)
   if (FUNC_9 (FUNC_5 (VAR_0, VAR_4, VAR_5), VAR_1))
     return 1;
    }

  return 0;
}
