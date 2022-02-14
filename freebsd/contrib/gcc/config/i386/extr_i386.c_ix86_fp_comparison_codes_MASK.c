
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int VAR_0 ;



 int VAR_1 ;



 int FUNC_0 () ;

void
FUNC_1 (enum rtx_code VAR_2, enum rtx_code *VAR_3,
     enum rtx_code *VAR_4,
     enum rtx_code *VAR_5)
{
  *VAR_4 = VAR_2;
  *VAR_3 = VAR_1;
  *VAR_5 = VAR_1;
  switch (VAR_2)
    {
    case 139:
    case 140:
    case 134:
    case 128:
    case 133:
    case 129:
    case 130:
    case 136:
      break;
    case 137:
      *VAR_4 = 129;
      *VAR_3 = 128;
      break;
    case 138:
      *VAR_4 = 130;
      *VAR_3 = 128;
      break;
    case 141:
      *VAR_4 = 133;
      *VAR_3 = 128;
      break;
    case 135:
      *VAR_4 = 136;
      *VAR_5 = 128;
      break;
    case 132:
      *VAR_4 = 140;
      *VAR_5 = 128;
      break;
    case 131:
      *VAR_4 = 139;
      *VAR_5 = 128;
      break;
    default:
      FUNC_0 ();
    }
  if (!VAR_0)
    {
      *VAR_5 = VAR_1;
      *VAR_3 = VAR_1;
    }
}
