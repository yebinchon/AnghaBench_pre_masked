
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

enum machine_mode
FUNC_4 (enum rtx_code VAR_6, rtx VAR_7, rtx VAR_8)
{
  if (FUNC_1 (FUNC_0 (VAR_7)))
    return FUNC_3 (VAR_6);
  switch (VAR_6)
    {

    case 138:
    case 129:
      return VAR_3;

    case 136:
    case 134:
    case 130:
    case 132:
      return VAR_4;


    case 137:
    case 131:
      if (VAR_8 == VAR_5)
 return VAR_1;
      else

 return VAR_0;




    case 135:
    case 133:
      if (VAR_8 == VAR_5)
 return VAR_2;
      else
 return VAR_0;


    case 128:
      return VAR_4;
    default:
      FUNC_2 ();
    }
}
