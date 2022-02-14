
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int replace; } ;
typedef int RTX_CODE ;







 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;


 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 size_t FUNC_5 (int ) ;

 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int
FUNC_10 (rtx VAR_1)
{
  RTX_CODE VAR_2 = FUNC_0 (VAR_1);
  int VAR_3;
  const char *VAR_4;

  switch (VAR_2)
    {
    case 130:
      return !FUNC_3 (VAR_1) || FUNC_10 (FUNC_6 (VAR_1, 0));

    case 135:
    case 133:
    case 134:
    case 132:
    case 128:
    case 131:
      return 0;

    case 129:
      return VAR_0[FUNC_5 (VAR_1)].replace == 0 && FUNC_9 (VAR_1, 0);

    case 136:
      if (FUNC_4 (VAR_1))
 return 1;



    default:
      break;
    }

  VAR_4 = FUNC_1 (VAR_2);
  for (VAR_3 = FUNC_2 (VAR_2) - 1; VAR_3 >= 0; VAR_3--)
    if (VAR_4[VAR_3] == 'e')
      {
 if (FUNC_10 (FUNC_6 (VAR_1, VAR_3)))
   return 1;
      }
    else if (VAR_4[VAR_3] == 'E')
      {
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < FUNC_8 (VAR_1, VAR_3); VAR_5++)
   if (FUNC_10 (FUNC_7 (VAR_1, VAR_3, VAR_5)))
     return 1;
      }

  return 0;
}
