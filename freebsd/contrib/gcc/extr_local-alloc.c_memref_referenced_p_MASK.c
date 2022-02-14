
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {int replacement; } ;







 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;




 int FUNC_3 (int ) ;


 size_t FUNC_4 (int ) ;

 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

 int VAR_0 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_11 (rtx VAR_3, rtx VAR_4)
{
  int VAR_5, VAR_6;
  const char *VAR_7;
  enum rtx_code VAR_8 = FUNC_0 (VAR_4);

  switch (VAR_8)
    {
    case 137:
    case 139:
    case 134:
    case 128:
    case 138:
    case 136:
    case 131:
    case 140:
    case 135:
    case 133:
      return 0;

    case 130:
      return (VAR_1[FUNC_4 (VAR_4)].replacement
       && FUNC_11 (VAR_3,
          VAR_1[FUNC_4 (VAR_4)].replacement));

    case 132:
      if (FUNC_10 (VAR_3, VAR_0, VAR_4, VAR_2))
 return 1;
      break;

    case 129:


      if (FUNC_3 (FUNC_5 (VAR_4)))
 {
   if (FUNC_11 (VAR_3, FUNC_7 (FUNC_5 (VAR_4), 0)))
     return 1;
 }
      else if (FUNC_11 (VAR_3, FUNC_5 (VAR_4)))
 return 1;

      return FUNC_11 (VAR_3, FUNC_6 (VAR_4));

    default:
      break;
    }

  VAR_7 = FUNC_1 (VAR_8);
  for (VAR_5 = FUNC_2 (VAR_8) - 1; VAR_5 >= 0; VAR_5--)
    switch (VAR_7[VAR_5])
      {
      case 'e':
 if (FUNC_11 (VAR_3, FUNC_7 (VAR_4, VAR_5)))
   return 1;
 break;
      case 'E':
 for (VAR_6 = FUNC_9 (VAR_4, VAR_5) - 1; VAR_6 >= 0; VAR_6--)
   if (FUNC_11 (VAR_3, FUNC_8 (VAR_4, VAR_5, VAR_6)))
     return 1;
 break;
      }

  return 0;
}
