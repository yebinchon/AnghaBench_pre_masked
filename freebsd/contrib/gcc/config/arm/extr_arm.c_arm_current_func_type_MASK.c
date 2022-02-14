
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {unsigned long func_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 () ;
 TYPE_2__* VAR_1 ;

unsigned long
FUNC_2 (void)
{
  if (FUNC_0 (VAR_1->machine->func_type) == VAR_0)
    VAR_1->machine->func_type = FUNC_1 ();

  return VAR_1->machine->func_type;
}
