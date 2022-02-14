
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;





 int FUNC_0 (int ) ;




 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (rtx VAR_2)
{
  switch (FUNC_0 (VAR_2))
    {
    case 144:
    case 145:

      return 0;

    case 143:

      return VAR_1 != 0;

    case 140:


      if (FUNC_4 (VAR_2))
 return 1;
      else
 return VAR_1 != 0;

    case 146:
      return FUNC_5 (FUNC_1 (VAR_2, 0));
    case 141:
    case 142:
      return FUNC_5 (FUNC_1 (VAR_2, 0))
      || FUNC_5 (FUNC_1 (VAR_2, 1));

    case 139:
      switch (FUNC_2 (VAR_2, 1))
 {

 case 132:
 case 137:
 case 135:
 case 130:
 case 129:
 case 128:
 case 131:
 case 138:
 case 136:
 case 134:
   return 0;



 case 133:
   return VAR_0;

 default:
   return 1;
 }
      break;

    default:
      FUNC_3 ();
    }
}
