
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rtx ;
struct TYPE_6__ {TYPE_2__* machine; } ;
struct TYPE_4__ {scalar_t__ args_size; scalar_t__ total_size; int initialized; } ;
struct TYPE_5__ {TYPE_1__ frame; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

HOST_WIDE_INT
FUNC_5 (rtx VAR_8, HOST_WIDE_INT VAR_9)
{
  rtx VAR_10 = VAR_3;
  rtx VAR_11 = FUNC_2 (VAR_8, &VAR_10);

  if (VAR_9 == 0)
    VAR_9 = FUNC_0 (VAR_10);

  if (VAR_11 == VAR_7 || VAR_11 == VAR_5
      || VAR_11 == VAR_6)
    {
      HOST_WIDE_INT VAR_12 = (!VAR_2->machine->frame.initialized)
      ? FUNC_1 (FUNC_4 ())
      : VAR_2->machine->frame.total_size;


      if (VAR_4 && VAR_0)
 VAR_12 -= VAR_2->machine->frame.args_size;

      VAR_9 = VAR_9 - VAR_12;
    }
  return VAR_9;
}
