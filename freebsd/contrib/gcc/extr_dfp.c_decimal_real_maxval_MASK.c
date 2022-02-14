
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {int* sig; } ;
typedef TYPE_1__ REAL_VALUE_TYPE ;





 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 () ;

void
FUNC_2 (REAL_VALUE_TYPE *VAR_0, int VAR_1, enum machine_mode VAR_2)
{
  char *VAR_3;

  switch (VAR_2)
    {
    case 129:
      VAR_3 = (char *) "9.999999E96";
      break;
    case 130:
      VAR_3 = (char *) "9.999999999999999E384";
      break;
    case 128:
      VAR_3 = (char *) "9.999999999999999999999999999999999E6144";
      break;
    default:
      FUNC_1 ();
    }

  FUNC_0 (VAR_0, VAR_3);
  if (VAR_1)
    VAR_0->sig[0] |= 0x80000000;
}
