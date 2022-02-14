
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ end; struct TYPE_7__* p_Next; } ;
typedef TYPE_1__ t_MemBlock ;
struct TYPE_8__ {int h_Spinlock; int freeMemSize; TYPE_1__* memBlocks; } ;
typedef TYPE_2__ t_MM ;
typedef scalar_t__ t_Handle ;
typedef scalar_t__ t_Error ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

t_Error FUNC_7(t_Handle VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
    t_MM *VAR_8 = (t_MM *)VAR_5;
    t_MemBlock *VAR_9, *VAR_10;
    t_Error VAR_11;
    uint32_t VAR_12;

    FUNC_0(VAR_8);




    VAR_12 = FUNC_5(VAR_8->h_Spinlock);

    VAR_9 = VAR_8->memBlocks;
    while ( VAR_9->p_Next )
    {
        if ( VAR_6 >= VAR_9->base && VAR_6 < VAR_9->end )
        {
        FUNC_6(VAR_8->h_Spinlock, VAR_12);
            FUNC_3(VAR_3, VAR_0, VAR_4);
        }
        VAR_9 = VAR_9->p_Next;
    }

    if ( VAR_6 >= VAR_9->base && VAR_6 < VAR_9->end )
    {
        FUNC_6(VAR_8->h_Spinlock, VAR_12);
        FUNC_3(VAR_3, VAR_0, VAR_4);
    }


    if ((VAR_10 = FUNC_2(VAR_6, VAR_7)) == ((void*)0))
    {
        FUNC_6(VAR_8->h_Spinlock, VAR_12);
        FUNC_3(VAR_3, VAR_1, VAR_4);
    }


    VAR_9->p_Next = VAR_10;


    VAR_11 = FUNC_1(VAR_8, VAR_6, VAR_6+VAR_7);
    if (VAR_11)
    {
        FUNC_6(VAR_8->h_Spinlock, VAR_12);
        VAR_9->p_Next = 0;
        FUNC_4(VAR_10);
        return ((t_Error)VAR_11);
    }


    VAR_8->freeMemSize += VAR_7;

    FUNC_6(VAR_8->h_Spinlock, VAR_12);

    return (VAR_2);
}
