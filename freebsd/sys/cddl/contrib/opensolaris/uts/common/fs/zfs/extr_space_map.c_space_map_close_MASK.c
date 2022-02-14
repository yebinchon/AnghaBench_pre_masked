
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * sm_phys; int * sm_dbuf; } ;
typedef TYPE_1__ space_map_t ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void
FUNC_2(space_map_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->sm_dbuf != ((void*)0))
  FUNC_0(VAR_0->sm_dbuf, VAR_0);
 VAR_0->sm_dbuf = ((void*)0);
 VAR_0->sm_phys = ((void*)0);

 FUNC_1(VAR_0, sizeof (*VAR_0));
}
