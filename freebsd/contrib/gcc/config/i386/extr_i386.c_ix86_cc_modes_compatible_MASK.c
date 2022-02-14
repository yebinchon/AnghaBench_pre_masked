
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;

__attribute__((used)) static enum machine_mode
FUNC_2 (enum machine_mode VAR_2, enum machine_mode VAR_3)
{
  if (VAR_2 == VAR_3)
    return VAR_2;

  if (FUNC_0 (VAR_2) != VAR_0 || FUNC_0 (VAR_3) != VAR_0)
    return VAR_1;

  if ((VAR_2 == 132 && VAR_3 == 131)
      || (VAR_2 == 131 && VAR_3 == 132))
    return 132;

  switch (VAR_2)
    {
    default:
      FUNC_1 ();

    case 128:
    case 132:
    case 131:
    case 130:
    case 129:
      switch (VAR_3)
 {
 default:
   return VAR_1;

 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
   return 128;
 }

    case 133:
    case 134:


      return VAR_1;
    }
}
