
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* Peer; struct TYPE_5__* Child; } ;
typedef TYPE_1__ DT_SUBTABLE ;


 int FUNC_0 () ;

DT_SUBTABLE *
FUNC_1 (
    DT_SUBTABLE *VAR_0,
    DT_SUBTABLE *VAR_1)
{
    FUNC_0 ();


    if (!VAR_1)
    {


        return (VAR_0->Child);
    }



    return (VAR_1->Peer);
}
