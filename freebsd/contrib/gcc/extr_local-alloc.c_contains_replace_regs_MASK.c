
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {int replace; } ;







 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;




 size_t FUNC_3 (int ) ;

 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_7 (rtx VAR_1)
{
  int VAR_2, VAR_3;
  const char *VAR_4;
  enum rtx_code VAR_5 = FUNC_0 (VAR_1);

  switch (VAR_5)
    {
    case 134:
    case 136:
    case 131:
    case 128:
    case 135:
    case 133:
    case 130:
    case 137:
    case 132:
      return 0;

    case 129:
      return VAR_0[FUNC_3 (VAR_1)].replace;

    default:
      break;
    }

  VAR_4 = FUNC_1 (VAR_5);
  for (VAR_2 = FUNC_2 (VAR_5) - 1; VAR_2 >= 0; VAR_2--)
    switch (VAR_4[VAR_2])
      {
      case 'e':
 if (FUNC_7 (FUNC_4 (VAR_1, VAR_2)))
   return 1;
 break;
      case 'E':
 for (VAR_3 = FUNC_6 (VAR_1, VAR_2) - 1; VAR_3 >= 0; VAR_3--)
   if (FUNC_7 (FUNC_5 (VAR_1, VAR_2, VAR_3)))
     return 1;
 break;
      }

  return 0;
}
