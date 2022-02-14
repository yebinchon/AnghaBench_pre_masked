
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;





 int FUNC_0 (int ) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;




 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int FUNC_5 (int ) ;

 int VAR_0 ;
 int FUNC_6 (int ,int) ;


 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_1)
{
  register rtx VAR_2 = FUNC_4 (VAR_1);

  switch (FUNC_1 (FUNC_5 (VAR_2)))
    {

    case 133:
    case 128:

    case 141:


    case 137:

    case 135: case 134:
    case 143: case 142:
    case 139: case 138:
    case 145: case 144:
    case 146:
    case 132:
      return 1;
    case 150:
      {
 rtx VAR_3 = FUNC_6 (FUNC_5 (VAR_2), 0);
 rtx VAR_4 = FUNC_6 (FUNC_5 (VAR_2), 1);
 if (FUNC_1 (VAR_4) == 147)
   return FUNC_3 (VAR_4) >= 0;
 if (FUNC_1 (VAR_3) != 131)
   return 0;
 if (FUNC_7 (VAR_3, VAR_1) == 1)
   return 1;
 return (FUNC_1 (VAR_4) == 131 && FUNC_7 (VAR_4, VAR_1) == 1);
      }
    case 140:
    case 129:
      {
 rtx VAR_5 = FUNC_6 (FUNC_5 (VAR_2), 0);
 rtx VAR_6 = FUNC_6 (FUNC_5 (VAR_2), 1);
 if (FUNC_1 (VAR_5) != 131 || FUNC_7 (VAR_5, VAR_1) <= 0)
   return 0;
 if (FUNC_1 (VAR_6) == 147)
   return FUNC_3 (VAR_6) >= 0;
 return (FUNC_1 (VAR_6) == 131 && FUNC_7 (VAR_6, VAR_1) == 1);
      }
    case 136:
      return FUNC_2 (FUNC_5 (VAR_2)) == VAR_0;

    case 148:
      return ! (FUNC_0 (FUNC_5 (VAR_2)) & 0x80000000);
    case 147:
      return ! (FUNC_3 (FUNC_5 (VAR_2)) & 0x80000000);
    case 149:
    case 130:
      return - (FUNC_2 (FUNC_5 (VAR_2)) == VAR_0);
    case 131:
      return FUNC_7 (FUNC_5 (VAR_2), VAR_1);
    default:
      return 0;
    }
}
