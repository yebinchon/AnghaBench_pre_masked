
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* operands; } ;
struct TYPE_3__ {scalar_t__ op_type; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int
FUNC_0 (void)
{
  int VAR_2;

  for (VAR_2 = 0; VAR_1->operands[VAR_2].op_type && VAR_2 < VAR_0; VAR_2++)
    ;

  return VAR_2;
}
