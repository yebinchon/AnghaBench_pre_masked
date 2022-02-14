
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* tokens; } ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0 (int VAR_1)
{
  int VAR_2;

  switch (VAR_0->tokens[VAR_1 - 1])
    {
    default:
      return 1;
    case 129:
    case 128:
    case 130:
      return 1 + FUNC_0(VAR_1 - 1);
    case 133:
    case 132:
    case 131:
      VAR_2 = FUNC_0(VAR_1 - 1);
      return 1 + VAR_2 + FUNC_0(VAR_1 - 1 - VAR_2);
    }
}
