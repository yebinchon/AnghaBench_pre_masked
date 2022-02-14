
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* busyBlocks; } ;
typedef TYPE_1__ t_MM ;
struct TYPE_6__ {scalar_t__ base; struct TYPE_6__* p_Next; } ;
typedef TYPE_2__ t_BusyBlock ;



__attribute__((used)) static void FUNC_0(t_MM *VAR_0, t_BusyBlock *VAR_1)
{
    t_BusyBlock *VAR_2, *VAR_3;


    VAR_3 = 0;
    VAR_2 = VAR_0->busyBlocks;

    while ( VAR_2 && VAR_1->base > VAR_2->base )
    {
        VAR_3 = VAR_2;
        VAR_2 = VAR_2->p_Next;
    }


    if ( VAR_2 )
        VAR_1->p_Next = VAR_2;
    if ( VAR_3 )
        VAR_3->p_Next = VAR_1;
    else
        VAR_0->busyBlocks = VAR_1;
}
