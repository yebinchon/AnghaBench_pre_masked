
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int e_machine; } ;
typedef int FILE ;






 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3 (FILE *VAR_2)
{
  if (! VAR_0)
    return 1;

  switch (VAR_1.e_machine)
    {
    case 131:
      return FUNC_0 (VAR_2);
    case 130:
    case 129:
      return FUNC_1 (VAR_2);
      break;
    case 128:
      return FUNC_2 (VAR_2);
      break;
    default:
      break;
    }
  return 1;
}
