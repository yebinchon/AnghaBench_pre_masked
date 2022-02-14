
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* piterator ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ pitem ;



pitem *FUNC_0(piterator *VAR_0)
{
    pitem *VAR_1;

    if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
        return ((void*)0);


    VAR_1 = *VAR_0;
    *VAR_0 = (*VAR_0)->next;

    return VAR_1;
}
