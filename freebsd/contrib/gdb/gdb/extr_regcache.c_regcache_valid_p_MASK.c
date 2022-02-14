
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {int* register_valid_p; TYPE_1__* descr; } ;
struct TYPE_2__ {int nr_raw_registers; } ;


 int FUNC_0 (int) ;

int
FUNC_1 (struct regcache *VAR_0, int VAR_1)
{
  FUNC_0 (VAR_0 != ((void*)0));
  FUNC_0 (VAR_1 >= 0 && VAR_1 < VAR_0->descr->nr_raw_registers);
  return VAR_0->register_valid_p[VAR_1];
}
