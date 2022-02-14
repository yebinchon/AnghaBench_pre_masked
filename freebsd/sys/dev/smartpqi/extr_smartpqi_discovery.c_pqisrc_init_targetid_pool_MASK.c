
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; int * tid; } ;
struct TYPE_5__ {TYPE_1__ tid_pool; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(pqisrc_softstate_t *VAR_2)
{
 int VAR_3, VAR_4 = VAR_1 + VAR_0 - 1;

 for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2->tid_pool.tid[VAR_3] = VAR_4--;
 }
 VAR_2->tid_pool.index = VAR_3 - 1;
}
