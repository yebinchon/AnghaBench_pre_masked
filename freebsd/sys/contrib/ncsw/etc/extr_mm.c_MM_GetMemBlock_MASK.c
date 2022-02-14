
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int base; struct TYPE_4__* p_Next; } ;
typedef TYPE_1__ t_MemBlock ;
struct TYPE_5__ {TYPE_1__* memBlocks; } ;
typedef TYPE_2__ t_MM ;
typedef scalar_t__ t_Handle ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;

uint64_t FUNC_1(t_Handle VAR_1, int VAR_2)
{
    t_MM *VAR_3 = (t_MM*)VAR_1;
    t_MemBlock *VAR_4;
    int VAR_5;

    FUNC_0(VAR_3);

    VAR_4 = VAR_3->memBlocks;
    for (VAR_5=0; VAR_5 < VAR_2; VAR_5++)
        VAR_4 = VAR_4->p_Next;

    if ( VAR_4 )
        return (VAR_4->base);
    else
        return (uint64_t)VAR_0;
}
