
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Next; } ;
typedef TYPE_1__ DT_FIELD ;


 TYPE_1__* VAR_0 ;

void
FUNC_0 (
    DT_FIELD *VAR_1)
{
    DT_FIELD *VAR_2;
    DT_FIELD *VAR_3;


    VAR_2 = VAR_3 = VAR_0;

    while (VAR_3)
    {
        VAR_2 = VAR_3;
        VAR_3 = VAR_3->Next;
    }

    if (VAR_2)
    {
        VAR_2->Next = VAR_1;
    }
    else
    {
        VAR_0 = VAR_1;
    }
}
