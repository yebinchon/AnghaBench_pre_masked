
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* sm_phys; int * sm_dbuf; } ;
typedef TYPE_2__ space_map_t ;
typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ smp_alloc; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

int64_t
FUNC_2(space_map_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return (0);
 FUNC_0(VAR_0->sm_dbuf != ((void*)0));
 return (VAR_0->sm_phys->smp_alloc - FUNC_1(VAR_0));
}
