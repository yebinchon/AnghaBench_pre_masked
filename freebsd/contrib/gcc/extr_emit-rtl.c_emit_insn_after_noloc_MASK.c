
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;





 int FUNC_0 (scalar_t__) ;



 scalar_t__ VAR_0 ;

 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;

rtx
FUNC_6 (rtx VAR_1, rtx VAR_2)
{
  rtx VAR_3 = VAR_2;

  FUNC_3 (VAR_2);

  if (VAR_1 == VAR_0)
    return VAR_3;

  switch (FUNC_0 (VAR_1))
    {
    case 131:
    case 130:
    case 133:
    case 132:
    case 134:
    case 129:
      VAR_3 = FUNC_2 (VAR_1, VAR_2);
      break;







    default:
      VAR_3 = FUNC_5 (VAR_1);
      FUNC_1 (VAR_3, VAR_2);
      break;
    }

  return VAR_3;
}
