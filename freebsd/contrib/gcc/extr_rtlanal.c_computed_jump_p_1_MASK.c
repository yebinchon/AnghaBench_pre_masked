
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;



 int FUNC_0 (int ) ;



 int const FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;






 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_0)
{
  enum rtx_code VAR_1 = FUNC_1 (VAR_0);
  int VAR_2, VAR_3;
  const char *VAR_4;

  switch (VAR_1)
    {
    case 132:
    case 130:
      return 0;

    case 137:
    case 135:
    case 136:
    case 134:
    case 128:
    case 129:
      return 1;

    case 131:
      return ! (FUNC_1 (FUNC_4 (VAR_0, 0)) == 128
  && FUNC_0 (FUNC_4 (VAR_0, 0)));

    case 133:
      return (FUNC_7 (FUNC_4 (VAR_0, 1))
       || FUNC_7 (FUNC_4 (VAR_0, 2)));

    default:
      break;
    }

  VAR_4 = FUNC_2 (VAR_1);
  for (VAR_2 = FUNC_3 (VAR_1) - 1; VAR_2 >= 0; VAR_2--)
    {
      if (VAR_4[VAR_2] == 'e'
   && FUNC_7 (FUNC_4 (VAR_0, VAR_2)))
 return 1;

      else if (VAR_4[VAR_2] == 'E')
 for (VAR_3 = 0; VAR_3 < FUNC_6 (VAR_0, VAR_2); VAR_3++)
   if (FUNC_7 (FUNC_5 (VAR_0, VAR_2, VAR_3)))
     return 1;
    }

  return 0;
}
