
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void* ptr; struct TYPE_6__* next; } ;
struct TYPE_5__ {size_t sz; TYPE_2__** tab; } ;
typedef TYPE_1__ Hashtab ;
typedef TYPE_2__ Hashentry ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*,void*) ;

void
FUNC_2(Hashtab * VAR_0, int (*VAR_1) (void *VAR_2, void *VAR_3),
        void *VAR_4)
{
    Hashentry **VAR_5, *VAR_6;

    FUNC_0(VAR_0);

    for (VAR_5 = VAR_0->tab; VAR_5 < &VAR_0->tab[VAR_0->sz]; ++VAR_5)
 for (VAR_6 = *VAR_5; VAR_6; VAR_6 = VAR_6->next)
     if ((*VAR_1) (VAR_6->ptr, VAR_4))
  return;
}
