
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* items; } ;
typedef TYPE_1__ pqueue ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ pitem ;



pitem *FUNC_0(pqueue *VAR_0)
{
    pitem *VAR_1 = VAR_0->items;

    if (VAR_0->items != ((void*)0))
        VAR_0->items = VAR_0->items->next;

    return VAR_1;
}
