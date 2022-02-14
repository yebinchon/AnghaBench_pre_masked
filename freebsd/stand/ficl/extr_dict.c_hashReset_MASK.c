
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int size; int * name; int * link; int ** table; } ;
typedef TYPE_1__ FICL_HASH ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(FICL_HASH *VAR_0)
{
    unsigned VAR_1;

    FUNC_0(VAR_0);

    for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
    {
        VAR_0->table[VAR_1] = ((void*)0);
    }

    VAR_0->link = ((void*)0);
    VAR_0->name = ((void*)0);
    return;
}
