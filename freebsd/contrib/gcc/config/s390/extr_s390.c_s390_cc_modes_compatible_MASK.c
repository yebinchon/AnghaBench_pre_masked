
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
 int VAR_0 ;

__attribute__((used)) static enum machine_mode
FUNC_0 (enum machine_mode VAR_1, enum machine_mode VAR_2)
{
  if (VAR_1 == VAR_2)
    return VAR_1;

  switch (VAR_1)
    {
    case 128:
      if (VAR_2 == 130 || VAR_2 == 132 || VAR_2 == 129
   || VAR_2 == 133 || VAR_2 == 134 || VAR_2 == 131)
        return VAR_2;
      return VAR_0;

    case 133:
    case 130:
    case 132:
    case 134:
    case 131:
    case 129:
      if (VAR_2 == 128)
 return VAR_1;

      return VAR_0;

    default:
      return VAR_0;
    }
  return VAR_0;
}
