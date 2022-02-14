
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static enum rtx_code
FUNC_3 (rtx VAR_1, enum rtx_code VAR_2,
      rtx *VAR_3, rtx *VAR_4)
{
  rtx VAR_5;

  switch (VAR_2)
    {
    case 136:
    case 133:



      return VAR_0;

    case 137:
    case 138:
    case 131:
    case 132:

      break;

    case 141:
    case 135:
    case 128:
    case 134:



      if (!VAR_1 || !FUNC_1 (VAR_1, *VAR_4))
 break;


    case 140:
    case 139:
    case 130:
    case 129:


      VAR_5 = *VAR_3;
      *VAR_3 = *VAR_4;
      *VAR_4 = VAR_5;
      VAR_2 = FUNC_2 (VAR_2);
      break;

    default:
      FUNC_0 ();
    }

  return VAR_2;
}
