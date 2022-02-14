
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {scalar_t__ base_reg; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 int* VAR_4 ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_5[16];

  FUNC_1 (VAR_5);

  VAR_4[VAR_0] = VAR_5[VAR_0];
  VAR_4[VAR_1] = VAR_5[VAR_1];
  VAR_4[VAR_2] = VAR_5[VAR_2];

  if (VAR_3->machine->base_reg)
    VAR_4[FUNC_0 (VAR_3->machine->base_reg)] = 1;
}
