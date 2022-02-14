
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int h_Spinlock; int freeMemSize; TYPE_2__** freeBlocks; } ;
typedef TYPE_1__ t_MM ;
typedef scalar_t__ t_Handle ;
struct TYPE_7__ {int end; int base; struct TYPE_7__* p_Next; } ;
typedef TYPE_2__ t_FreeBlock ;
typedef int t_BusyBlock ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int,int,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

uint64_t FUNC_7(t_Handle VAR_3, uint64_t VAR_4, uint64_t VAR_5, uint64_t VAR_6, char* VAR_7)
{
    t_MM *VAR_8 = (t_MM *)VAR_3;
    t_FreeBlock *VAR_9;
    t_BusyBlock *VAR_10;
    uint64_t VAR_11, VAR_12, VAR_13 = VAR_5, VAR_14=0;
    uint32_t VAR_15;

    FUNC_0(VAR_8);



    while ((VAR_13 & 0x1) == 0)
    {
        VAR_14++;
        VAR_13 = VAR_13 >> 1;
    }

    if ( (VAR_13 != 1) || (VAR_14 > VAR_2) )
    {
        return (uint64_t)(VAR_1);
    }

    VAR_15 = FUNC_5(VAR_8->h_Spinlock);
    VAR_9 = VAR_8->freeBlocks[VAR_14];





    while ( VAR_9 && (VAR_6 >= VAR_9->end))
            VAR_9 = VAR_9->p_Next;


    if ( !VAR_9 )
    {
        FUNC_6(VAR_8->h_Spinlock, VAR_15);
        return (uint64_t)(VAR_1);
    }


    VAR_11 = ( VAR_6 <= VAR_9->base ) ? VAR_9->base : VAR_6;
    if ((VAR_11 + VAR_4) <= VAR_9->end )
    {
        VAR_12 = VAR_11 + VAR_4;
    }
    else
    {
        VAR_9 = VAR_9->p_Next;
        while ( VAR_9 && ((VAR_9->end - VAR_9->base) < VAR_4) )
            VAR_9 = VAR_9->p_Next;


        if ( !VAR_9 )
        {
            FUNC_6(VAR_8->h_Spinlock, VAR_15);
            return (uint64_t)(VAR_1);
        }

        VAR_11 = VAR_9->base;
        VAR_12 = VAR_11 + VAR_4;
    }


    if ((VAR_10 = FUNC_2(VAR_11, VAR_4, VAR_7)) == ((void*)0))
    {
        FUNC_6(VAR_8->h_Spinlock, VAR_15);
        return (uint64_t)(VAR_1);
    }


    if ( FUNC_3( VAR_8, VAR_11, VAR_12 ) != VAR_0 )
    {
        FUNC_6(VAR_8->h_Spinlock, VAR_15);
        FUNC_4(VAR_10);
        return (uint64_t)(VAR_1);
    }


    VAR_8->freeMemSize -= VAR_4;


    FUNC_1( VAR_8, VAR_10 );
    FUNC_6(VAR_8->h_Spinlock, VAR_15);

    return (VAR_11);
}
