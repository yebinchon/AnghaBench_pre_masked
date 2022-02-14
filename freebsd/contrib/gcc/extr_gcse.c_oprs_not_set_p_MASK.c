
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 int FUNC_0 (scalar_t__) ;





 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;




 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ) ;

 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int) ;
 int FUNC_9 (scalar_t__,int) ;
 int FUNC_10 (int ,int ,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_11 (rtx VAR_1, rtx VAR_2)
{
  int VAR_3, VAR_4;
  enum rtx_code VAR_5;
  const char *VAR_6;

  if (VAR_1 == 0)
    return 1;

  VAR_5 = FUNC_1 (VAR_1);
  switch (VAR_5)
    {
    case 130:
    case 137:
    case 136:
    case 134:
    case 135:
    case 133:
    case 128:
    case 132:
    case 138:
    case 139:
      return 1;

    case 131:
      if (FUNC_10 (FUNC_0 (VAR_2),
      FUNC_4 (VAR_2), VAR_1, 0))
 return 0;
      else
 return FUNC_11 (FUNC_7 (VAR_1, 0), VAR_2);

    case 129:
      return ! FUNC_6 (VAR_0, FUNC_5 (VAR_1));

    default:
      break;
    }

  for (VAR_3 = FUNC_3 (VAR_5) - 1, VAR_6 = FUNC_2 (VAR_5); VAR_3 >= 0; VAR_3--)
    {
      if (VAR_6[VAR_3] == 'e')
 {



   if (VAR_3 == 0)
     return FUNC_11 (FUNC_7 (VAR_1, VAR_3), VAR_2);

   if (! FUNC_11 (FUNC_7 (VAR_1, VAR_3), VAR_2))
     return 0;
 }
      else if (VAR_6[VAR_3] == 'E')
 for (VAR_4 = 0; VAR_4 < FUNC_9 (VAR_1, VAR_3); VAR_4++)
   if (! FUNC_11 (FUNC_8 (VAR_1, VAR_3, VAR_4), VAR_2))
     return 0;
    }

  return 1;
}
