
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int RTX_CODE ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;


 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int) ;

int
FUNC_8 (rtx VAR_1)
{
  RTX_CODE VAR_2;

  VAR_2 = FUNC_0 (VAR_1);
  switch (VAR_2)
    {
    case 140:
    case 129:
    case 142:
    case 144:
    case 143:
    case 141:
    case 146:
    case 138:
    case 131:
    case 130:
    case 150:
    case 151:
      return 0;

    case 145:



      return (FUNC_1 (VAR_1) != VAR_0);

    case 133:
    case 134:
    case 136:
    case 137:
    case 132:
    case 135:
    case 147:
    case 128:

      return 1;

    case 139:
    case 149:
    case 148:
      if (FUNC_4 (VAR_1))
 return 1;

    default:
      break;
    }



  {
    const char *VAR_3 = FUNC_2 (VAR_2);
    int VAR_4;

    for (VAR_4 = FUNC_3 (VAR_2) - 1; VAR_4 >= 0; VAR_4--)
      {
 if (VAR_3[VAR_4] == 'e')
   {
     if (FUNC_8 (FUNC_5 (VAR_1, VAR_4)))
       return 1;
   }
 else if (VAR_3[VAR_4] == 'E')
   {
     int VAR_5;
     for (VAR_5 = 0; VAR_5 < FUNC_7 (VAR_1, VAR_4); VAR_5++)
       if (FUNC_8 (FUNC_6 (VAR_1, VAR_4, VAR_5)))
  return 1;
   }
      }
  }
  return 0;
}
