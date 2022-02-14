
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* Peer; scalar_t__ Child; } ;
typedef int (* DT_WALK_CALLBACK ) (TYPE_1__*,void*,void*) ;
typedef TYPE_1__ DT_SUBTABLE ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;

void
FUNC_2 (
    DT_SUBTABLE *VAR_1,
    DT_WALK_CALLBACK VAR_2,
    void *VAR_3,
    void *VAR_4)
{
    DT_SUBTABLE *VAR_5;
    DT_SUBTABLE *VAR_6;


    VAR_5 = VAR_1;
    VAR_6 = ((void*)0);

    if (!VAR_5)
    {
        return;
    }

    VAR_2 (VAR_5, VAR_3, VAR_4);

    while (1)
    {
        VAR_6 = FUNC_0 (VAR_5, VAR_6);
        if (VAR_6)
        {
            VAR_2 (VAR_6, VAR_3, VAR_4);

            if (VAR_6->Child)
            {
                VAR_5 = VAR_6;
                VAR_6 = ((void*)0);
            }
        }
        else
        {
            VAR_6 = VAR_5;
            if (VAR_6 == VAR_0)
            {
                break;
            }

            VAR_5 = FUNC_1 (VAR_5);

            if (VAR_6->Peer == VAR_1)
            {
                break;
            }
        }
    }
}
