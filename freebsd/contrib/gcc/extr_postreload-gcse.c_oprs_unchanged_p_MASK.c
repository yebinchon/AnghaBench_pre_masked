
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static bool
FUNC_11 (rtx VAR_1, rtx VAR_2, bool VAR_3)
{
  int VAR_4, VAR_5;
  enum rtx_code VAR_6;
  const char *VAR_7;

  if (VAR_1 == 0)
    return 1;

  VAR_6 = FUNC_0 (VAR_1);
  switch (VAR_6)
    {
    case 129:

      FUNC_8 (FUNC_4 (VAR_1) < VAR_0);
      if (VAR_3)
 return !FUNC_10 (VAR_1, FUNC_3 (VAR_2) - 1);
      else
 return !FUNC_10 (VAR_1, 0);

    case 137:
      if (FUNC_9 (FUNC_3 (VAR_2), VAR_1, VAR_3))
 return 0;
      else
 return FUNC_11 (FUNC_5 (VAR_1, 0), VAR_2, VAR_3);

    case 136:
    case 143:
    case 142:
    case 140:
    case 141:
    case 139:
    case 128:
    case 138:
    case 144:
    case 145:
      return 1;

    case 132:
    case 131:
    case 135:
    case 134:
    case 130:
    case 133:
      if (VAR_3)
 return 0;
      break;

    default:
      break;
    }

  for (VAR_4 = FUNC_2 (VAR_6) - 1, VAR_7 = FUNC_1 (VAR_6); VAR_4 >= 0; VAR_4--)
    {
      if (VAR_7[VAR_4] == 'e')
 {
   if (! FUNC_11 (FUNC_5 (VAR_1, VAR_4), VAR_2, VAR_3))
     return 0;
 }
      else if (VAR_7[VAR_4] == 'E')
 for (VAR_5 = 0; VAR_5 < FUNC_7 (VAR_1, VAR_4); VAR_5++)
   if (! FUNC_11 (FUNC_6 (VAR_1, VAR_4, VAR_5), VAR_2, VAR_3))
     return 0;
    }

  return 1;
}
