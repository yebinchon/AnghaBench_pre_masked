
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* Peer; struct TYPE_4__* Child; scalar_t__ Depth; struct TYPE_4__* Parent; } ;
typedef TYPE_1__ DT_SUBTABLE ;



void
FUNC_0 (
    DT_SUBTABLE *VAR_0,
    DT_SUBTABLE *VAR_1)
{
    DT_SUBTABLE *VAR_2;


    VAR_1->Peer = ((void*)0);
    VAR_1->Parent = VAR_0;
    VAR_1->Depth = VAR_0->Depth + 1;



    if (!VAR_0->Child)
    {
        VAR_0->Child = VAR_1;
    }
    else
    {


        VAR_2 = VAR_0->Child;
        while (VAR_2->Peer)
        {
            VAR_2 = VAR_2->Peer;
        }



        VAR_2->Peer = VAR_1;
    }
}
