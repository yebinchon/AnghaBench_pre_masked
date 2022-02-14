
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ptr; struct TYPE_6__* next; } ;
struct TYPE_5__ {size_t (* hash ) (void*) ;size_t sz; scalar_t__ (* cmp ) (void*,int ) ;TYPE_2__** tab; } ;
typedef TYPE_1__ Hashtab ;
typedef TYPE_2__ Hashentry ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (void*,int ) ;

__attribute__((used)) static Hashentry *
FUNC_3(Hashtab * VAR_0, void *VAR_1)
{
    Hashentry *VAR_2;

    FUNC_0(VAR_0 && VAR_1);

    for (VAR_2 = VAR_0->tab[(*VAR_0->hash) (VAR_1) % VAR_0->sz];
  VAR_2;
  VAR_2 = VAR_2->next)
 if ((*VAR_0->cmp) (VAR_1, VAR_2->ptr) == 0)
     break;
    return VAR_2;
}
