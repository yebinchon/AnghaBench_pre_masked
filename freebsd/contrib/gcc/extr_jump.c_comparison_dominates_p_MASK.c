
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;




 int VAR_0 ;



 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;



int
FUNC_0 (enum rtx_code VAR_7, enum rtx_code VAR_8)
{



  if (VAR_7 == VAR_5 || VAR_8 == VAR_5)
    return 0;

  if (VAR_7 == VAR_8)
    return 1;

  switch (VAR_7)
    {
    case 131:
      if (VAR_8 == VAR_6 || VAR_8 == VAR_4)
 return 1;
      break;

    case 139:
      if (VAR_8 == 135 || VAR_8 == VAR_1 || VAR_8 == 138 || VAR_8 == VAR_0
   || VAR_8 == VAR_3)
 return 1;
      break;

    case 129:
      if (VAR_8 == VAR_6 || VAR_8 == VAR_2)
 return 1;
      break;

    case 134:
      if (VAR_8 == 135 || VAR_8 == VAR_2 || VAR_8 == VAR_3 || VAR_8 == 133)
 return 1;
      break;

    case 130:
      if (VAR_8 == VAR_4 || VAR_8 == VAR_2)
 return 1;
      break;

    case 137:
      if (VAR_8 == 138 || VAR_8 == VAR_2 || VAR_8 == VAR_3 || VAR_8 == 133)
 return 1;
      break;

    case 138:
    case 135:
      if (VAR_8 == VAR_3)
 return 1;
      break;

    case 133:
      if (VAR_8 == VAR_2 || VAR_8 == VAR_3)
 return 1;
      break;

    case 132:
      if (VAR_8 == VAR_1 || VAR_8 == VAR_2)
 return 1;
      break;

    case 136:
      if (VAR_8 == VAR_0 || VAR_8 == VAR_2)
 return 1;
      break;

    case 128:
      if (VAR_8 == VAR_2 || VAR_8 == 131 || VAR_8 == VAR_6 || VAR_8 == 129
   || VAR_8 == VAR_4 || VAR_8 == 130)
 return 1;
      break;

    default:
      break;
    }

  return 0;
}
