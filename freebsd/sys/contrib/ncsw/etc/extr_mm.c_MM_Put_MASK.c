
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int h_Spinlock; int freeMemSize; TYPE_2__* busyBlocks; } ;
typedef TYPE_1__ t_MM ;
typedef scalar_t__ t_Handle ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ end; struct TYPE_7__* p_Next; } ;
typedef TYPE_2__ t_BusyBlock ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

uint64_t FUNC_5(t_Handle VAR_1, uint64_t VAR_2)
{
    t_MM *VAR_3 = (t_MM *)VAR_1;
    t_BusyBlock *VAR_4, *VAR_5;
    uint64_t VAR_6;
    uint32_t VAR_7;

    FUNC_0(VAR_3);




    VAR_5 = 0;

    VAR_7 = FUNC_3(VAR_3->h_Spinlock);
    VAR_4 = VAR_3->busyBlocks;
    while ( VAR_4 && VAR_2 != VAR_4->base )
    {
        VAR_5 = VAR_4;
        VAR_4 = VAR_4->p_Next;
    }

    if ( !VAR_4 )
    {
        FUNC_4(VAR_3->h_Spinlock, VAR_7);
        return (uint64_t)(0);
    }

    if ( FUNC_1( VAR_3, VAR_4->base, VAR_4->end ) != VAR_0 )
    {
        FUNC_4(VAR_3->h_Spinlock, VAR_7);
        return (uint64_t)(0);
    }


    if ( VAR_5 )
        VAR_5->p_Next = VAR_4->p_Next;
    else
        VAR_3->busyBlocks = VAR_4->p_Next;

    VAR_6 = VAR_4->end - VAR_4->base;


    VAR_3->freeMemSize += VAR_6;

    FUNC_2(VAR_4);
    FUNC_4(VAR_3->h_Spinlock, VAR_7);

    return (VAR_6);
}
