
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;





 int FUNC_0 (scalar_t__) ;


 scalar_t__ FUNC_1 (scalar_t__) ;

 scalar_t__ VAR_0 ;

 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;

rtx
FUNC_5 (rtx VAR_2)
{
  rtx VAR_3 = VAR_1;
  rtx VAR_4;

  if (VAR_2 == VAR_0)
    return VAR_3;

  switch (FUNC_0 (VAR_2))
    {
    case 131:
    case 130:
    case 133:
    case 132:
    case 134:
    case 129:
      VAR_4 = VAR_2;
      while (VAR_4)
 {
   rtx VAR_5 = FUNC_1 (VAR_4);
   FUNC_2 (VAR_4);
   VAR_3 = VAR_4;
   VAR_4 = VAR_5;
 }
      break;







    default:
      VAR_3 = FUNC_4 (VAR_2);
      FUNC_2 (VAR_3);
      break;
    }

  return VAR_3;
}
