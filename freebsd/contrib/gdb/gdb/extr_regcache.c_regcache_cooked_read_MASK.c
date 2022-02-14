
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; scalar_t__* register_valid_p; scalar_t__ readonly_p; } ;
struct TYPE_2__ {int nr_cooked_registers; int nr_raw_registers; int gdbarch; int * sizeof_register; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct regcache*,int,void*) ;
 int FUNC_2 (void*,int ,int ) ;
 int FUNC_3 (struct regcache*,int,void*) ;
 int FUNC_4 (struct regcache*,int) ;

void
FUNC_5 (struct regcache *VAR_0, int VAR_1, void *VAR_2)
{
  FUNC_0 (VAR_1 >= 0);
  FUNC_0 (VAR_1 < VAR_0->descr->nr_cooked_registers);
  if (VAR_1 < VAR_0->descr->nr_raw_registers)
    FUNC_3 (VAR_0, VAR_1, VAR_2);
  else if (VAR_0->readonly_p
    && VAR_1 < VAR_0->descr->nr_cooked_registers
    && VAR_0->register_valid_p[VAR_1])

    FUNC_2 (VAR_2, FUNC_4 (VAR_0, VAR_1),
     VAR_0->descr->sizeof_register[VAR_1]);
  else
    FUNC_1 (VAR_0->descr->gdbarch, VAR_0,
      VAR_1, VAR_2);
}
