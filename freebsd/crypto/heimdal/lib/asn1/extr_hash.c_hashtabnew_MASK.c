
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* cmp ) (void*,void*) ;unsigned int (* hash ) (void*) ;int sz; int ** tab; } ;
typedef TYPE_1__ Hashtab ;
typedef int Hashentry ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

Hashtab *
FUNC_2(int VAR_0,
    int (*VAR_1) (void *, void *),
    unsigned (*VAR_2) (void *))
{
    Hashtab *VAR_3;
    int VAR_4;

    FUNC_0(VAR_0 > 0);

    VAR_3 = (Hashtab *) FUNC_1(sizeof(Hashtab) + (VAR_0 - 1) * sizeof(Hashentry *));
    if (VAR_3 == ((void*)0))
 return ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
 VAR_3->tab[VAR_4] = ((void*)0);

    VAR_3->cmp = VAR_1;
    VAR_3->hash = VAR_2;
    VAR_3->sz = VAR_0;
    return VAR_3;
}
