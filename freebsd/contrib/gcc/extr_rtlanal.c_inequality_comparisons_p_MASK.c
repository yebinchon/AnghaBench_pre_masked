
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int) ;

int
FUNC_6 (rtx VAR_0)
{
  const char *VAR_1;
  int VAR_2, VAR_3;
  enum rtx_code VAR_4 = FUNC_0 (VAR_0);

  switch (VAR_4)
    {
    case 130:
    case 129:
    case 131:
    case 145:
    case 142:
    case 143:
    case 141:
    case 144:
    case 136:
    case 128:
      return 0;

    case 133:
    case 132:
    case 138:
    case 137:
    case 135:
    case 134:
    case 140:
    case 139:
      return 1;

    default:
      break;
    }

  VAR_2 = FUNC_2 (VAR_4);
  VAR_1 = FUNC_1 (VAR_4);

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      if (VAR_1[VAR_3] == 'e')
 {
   if (FUNC_6 (FUNC_3 (VAR_0, VAR_3)))
     return 1;
 }
      else if (VAR_1[VAR_3] == 'E')
 {
   int VAR_5;
   for (VAR_5 = FUNC_5 (VAR_0, VAR_3) - 1; VAR_5 >= 0; VAR_5--)
     if (FUNC_6 (FUNC_4 (VAR_0, VAR_3, VAR_5)))
       return 1;
 }
    }

  return 0;
}
