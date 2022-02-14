
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int hash; struct TYPE_6__* link; struct TYPE_6__** table; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_1__ FICL_HASH ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(FICL_HASH *VAR_0, FICL_WORD *VAR_1)
{
    FICL_WORD **VAR_2;

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);

    if (VAR_0->size == 1)
    {
        VAR_2 = VAR_0->table;
    }
    else
    {
        VAR_2 = VAR_0->table + (VAR_1->hash % VAR_0->size);
    }

    VAR_1->link = *VAR_2;
    *VAR_2 = VAR_1;
    return;
}
