
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int kc_size; int * kc_constructor; int kc_zone; } ;
typedef TYPE_1__ kmem_cache_t ;


 void* FUNC_0 (int ,int) ;
 int FUNC_1 (void*,int ,TYPE_1__*,int) ;
 void* FUNC_2 (int ,TYPE_1__*,int) ;

void *
FUNC_3(kmem_cache_t *VAR_0, int VAR_1)
{



 void *VAR_2;

 VAR_2 = FUNC_0(VAR_0->kc_size, VAR_1);
 if (VAR_2 != ((void*)0) && VAR_0->kc_constructor != ((void*)0))
  FUNC_1(VAR_2, VAR_0->kc_size, VAR_0, VAR_1);
 return (VAR_2);

}
