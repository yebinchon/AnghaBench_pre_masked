
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
struct TYPE_2__ {int replace; int loop_depth; } ;





 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;







 size_t FUNC_4 (int ) ;
 int FUNC_5 (size_t) ;

 int FUNC_6 (int ) ;

 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static int
FUNC_11 (rtx VAR_1, int VAR_2)
{
  int VAR_3, VAR_4;
  const char *VAR_5;
  enum rtx_code VAR_6 = FUNC_0 (VAR_1);

  switch (VAR_6)
    {
    case 129:
      return FUNC_11 (FUNC_6 (VAR_1), VAR_2);

    case 138:
    case 137:
      return 0;

    case 132:
    case 133:
    case 135:
    case 136:
    case 131:
    case 134:
      return 0;

    case 130:
      return (VAR_0[FUNC_4 (VAR_1)].loop_depth >= VAR_0[VAR_2].loop_depth
       && VAR_0[FUNC_4 (VAR_1)].replace)
      || (FUNC_5 (FUNC_4 (VAR_1)) < 0 && ! FUNC_10 (VAR_1, 0));

    case 128:
      return 0;

    case 139:
      if (FUNC_3 (VAR_1))
 return 0;



    default:
      break;
    }

  VAR_5 = FUNC_1 (VAR_6);
  for (VAR_3 = FUNC_2 (VAR_6) - 1; VAR_3 >= 0; VAR_3--)
    switch (VAR_5[VAR_3])
      {
      case 'e':
 if (! FUNC_11 (FUNC_7 (VAR_1, VAR_3), VAR_2))
   return 0;
 break;
      case 'E':
 for (VAR_4 = FUNC_9 (VAR_1, VAR_3) - 1; VAR_4 >= 0; VAR_4--)
   if (! FUNC_11 (FUNC_8 (VAR_1, VAR_3, VAR_4), VAR_2))
     return 0;
 break;
      }

  return 1;
}
