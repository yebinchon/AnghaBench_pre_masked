
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ LengthField; scalar_t__ TotalLength; scalar_t__ Child; } ;
typedef TYPE_1__ DT_SUBTABLE ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3 (
    void)
{
    DT_SUBTABLE *VAR_1;
    DT_SUBTABLE *VAR_2;


    VAR_1 = VAR_0;
    VAR_2 = ((void*)0);

    if (!VAR_1)
    {
        return;
    }

    FUNC_2 (VAR_1);

    while (1)
    {
        VAR_2 = FUNC_0 (VAR_1, VAR_2);
        if (VAR_2)
        {
            if (VAR_2->LengthField)
            {
                FUNC_2 (VAR_2);
            }

            if (VAR_2->Child)
            {
                VAR_1 = VAR_2;
                VAR_2 = ((void*)0);
            }
            else
            {
                VAR_1->TotalLength += VAR_2->TotalLength;
                if (VAR_1->LengthField)
                {
                    FUNC_2 (VAR_1);
                }
            }
        }
        else
        {
            VAR_2 = VAR_1;

            if (VAR_2 == VAR_0)
            {
                break;
            }

            VAR_1 = FUNC_1 (VAR_1);

            VAR_1->TotalLength += VAR_2->TotalLength;
            if (VAR_1->LengthField)
            {
                FUNC_2 (VAR_1);
            }
        }
    }
}
