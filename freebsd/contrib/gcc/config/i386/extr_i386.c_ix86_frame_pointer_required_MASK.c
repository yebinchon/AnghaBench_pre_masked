
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ accesses_prev_frame; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_0 (void)
{


  if (VAR_2->machine->accesses_prev_frame)
    return 1;



  if (VAR_0)
    return 1;




  if (VAR_1
      && (!VAR_3
   || VAR_5))
    return 1;

  if (VAR_4)
    return 1;

  return 0;
}
