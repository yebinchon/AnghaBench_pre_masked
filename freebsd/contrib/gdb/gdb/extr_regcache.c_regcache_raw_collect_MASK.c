
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regcache {TYPE_1__* descr; } ;
struct TYPE_2__ {int nr_raw_registers; size_t* sizeof_register; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,void const*,size_t) ;
 void* FUNC_2 (struct regcache const*,int) ;

void
FUNC_3 (const struct regcache *VAR_0, int VAR_1, void *VAR_2)
{
  const void *VAR_3;
  size_t VAR_4;

  FUNC_0 (VAR_0 != ((void*)0) && VAR_2 != ((void*)0));
  FUNC_0 (VAR_1 >= 0 && VAR_1 < VAR_0->descr->nr_raw_registers);

  VAR_3 = FUNC_2 (VAR_0, VAR_1);
  VAR_4 = VAR_0->descr->sizeof_register[VAR_1];
  FUNC_1 (VAR_2, VAR_3, VAR_4);
}
