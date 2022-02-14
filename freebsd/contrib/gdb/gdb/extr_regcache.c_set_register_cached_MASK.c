
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* register_valid_p; TYPE_1__* descr; } ;
struct TYPE_3__ {int nr_raw_registers; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1 (int VAR_1, int VAR_2)
{
  FUNC_0 (VAR_1 >= 0);
  FUNC_0 (VAR_1 < VAR_0->descr->nr_raw_registers);
  VAR_0->register_valid_p[VAR_1] = VAR_2;
}
