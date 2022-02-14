
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int RTX_CODE ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;


 int FUNC_3 (int ) ;





 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int) ;

int
FUNC_7 (rtx VAR_0)
{
  RTX_CODE VAR_1;

  VAR_1 = FUNC_0 (VAR_0);
  switch (VAR_1)
    {
    case 134:
    case 129:
    case 136:
    case 138:
    case 137:
    case 135:
    case 140:
    case 132:
    case 131:
    case 130:
    case 139:
    case 143:
    case 144:
      return 0;

    case 128:
      return 1;

    case 133:
    case 142:
    case 141:
      if (FUNC_3 (VAR_0))
 return 1;

    default:
      break;
    }



  {
    const char *VAR_2 = FUNC_1 (VAR_1);
    int VAR_3;

    for (VAR_3 = FUNC_2 (VAR_1) - 1; VAR_3 >= 0; VAR_3--)
      {
 if (VAR_2[VAR_3] == 'e')
   {
     if (FUNC_7 (FUNC_4 (VAR_0, VAR_3)))
       return 1;
   }
 else if (VAR_2[VAR_3] == 'E')
   {
     int VAR_4;
     for (VAR_4 = 0; VAR_4 < FUNC_6 (VAR_0, VAR_3); VAR_4++)
       if (FUNC_7 (FUNC_5 (VAR_0, VAR_3, VAR_4)))
  return 1;
   }
      }
  }
  return 0;
}
