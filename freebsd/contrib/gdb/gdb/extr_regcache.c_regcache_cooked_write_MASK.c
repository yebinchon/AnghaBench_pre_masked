
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; } ;
struct TYPE_2__ {int nr_cooked_registers; int nr_raw_registers; int gdbarch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,struct regcache*,int,void const*) ;
 int FUNC_2 (struct regcache*,int,void const*) ;

void
FUNC_3 (struct regcache *VAR_0, int VAR_1, const void *VAR_2)
{
  FUNC_0 (VAR_1 >= 0);
  FUNC_0 (VAR_1 < VAR_0->descr->nr_cooked_registers);
  if (VAR_1 < VAR_0->descr->nr_raw_registers)
    FUNC_2 (VAR_0, VAR_1, VAR_2);
  else
    FUNC_1 (VAR_0->descr->gdbarch, VAR_0,
       VAR_1, VAR_2);
}
