
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ base_reg; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_0 ;

bool
FUNC_1 (unsigned int VAR_1, unsigned int VAR_2)
{


  if (VAR_0->machine->base_reg)
    if (FUNC_0 (VAR_0->machine->base_reg) == VAR_1
 || FUNC_0 (VAR_0->machine->base_reg) == VAR_2)
      return 0;

  return 1;
}
