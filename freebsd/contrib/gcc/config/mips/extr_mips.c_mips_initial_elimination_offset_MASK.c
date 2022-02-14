
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* machine; } ;
struct TYPE_4__ {scalar_t__ args_size; scalar_t__ total_size; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
typedef scalar_t__ HOST_WIDE_INT ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

HOST_WIDE_INT
FUNC_3 (int VAR_4, int VAR_5)
{
  HOST_WIDE_INT VAR_6;

  FUNC_0 (FUNC_2 ());


  switch (VAR_4)
    {
    case 128:
      VAR_6 = 0;
      break;

    case 129:
      VAR_6 = (VAR_2->machine->frame.total_size
  - VAR_3);
      break;

    default:
      FUNC_1 ();
    }

  if (VAR_1 && VAR_5 == VAR_0)
    VAR_6 -= VAR_2->machine->frame.args_size;

  return VAR_6;
}
