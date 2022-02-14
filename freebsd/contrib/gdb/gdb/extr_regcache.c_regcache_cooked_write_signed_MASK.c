
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; } ;
struct TYPE_2__ {int nr_cooked_registers; int * sizeof_register; } ;
typedef int LONGEST ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct regcache*,int,void*) ;
 int FUNC_3 (void*,int ,int ) ;

void
FUNC_4 (struct regcache *VAR_0, int VAR_1,
         LONGEST VAR_2)
{
  void *VAR_3;
  FUNC_1 (VAR_0 != ((void*)0));
  FUNC_1 (VAR_1 >=0 && VAR_1 < VAR_0->descr->nr_cooked_registers);
  VAR_3 = FUNC_0 (VAR_0->descr->sizeof_register[VAR_1]);
  FUNC_3 (VAR_3, VAR_0->descr->sizeof_register[VAR_1], VAR_2);
  FUNC_2 (VAR_0, VAR_1, VAR_3);
}
