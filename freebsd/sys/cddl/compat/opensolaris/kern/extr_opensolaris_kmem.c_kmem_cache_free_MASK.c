
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kc_size; int * kc_destructor; int kc_zone; } ;
typedef TYPE_1__ kmem_cache_t ;


 int FUNC_0 (void*,int ) ;
 int FUNC_1 (void*,int ,TYPE_1__*) ;
 int FUNC_2 (int ,void*,TYPE_1__*) ;

void
FUNC_3(kmem_cache_t *VAR_0, void *VAR_1)
{



 if (VAR_0->kc_destructor != ((void*)0))
  FUNC_1(VAR_1, VAR_0->kc_size, VAR_0);
 FUNC_0(VAR_1, VAR_0->kc_size);

}
