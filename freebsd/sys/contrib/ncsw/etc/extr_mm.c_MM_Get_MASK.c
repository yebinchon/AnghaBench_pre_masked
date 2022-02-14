
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_7__ {int h_Spinlock; int freeMemSize; TYPE_2__** freeBlocks; } ;
typedef TYPE_1__ t_MM ;
typedef scalar_t__ t_Handle ;
struct TYPE_8__ {int end; int base; struct TYPE_8__* p_Next; } ;
typedef TYPE_2__ t_FreeBlock ;
typedef int t_BusyBlock ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (int,int,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*,int,int,char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

uint64_t FUNC_9(t_Handle VAR_6, uint64_t VAR_7, uint64_t VAR_8, char* VAR_9)
{
    t_MM *VAR_10 = (t_MM *)VAR_6;
    t_FreeBlock *VAR_11;
    t_BusyBlock *VAR_12;
    uint64_t VAR_13, VAR_14, VAR_15, VAR_16 = 0;
    uint32_t VAR_17;

    FUNC_5(VAR_10, VAR_0, (uint64_t)VAR_3);


    if (VAR_8 == 0)
    {
        VAR_8 = 1;
    }

    VAR_15 = VAR_8;



    while ((VAR_15 & 0x1) == 0)
    {
        VAR_16++;
        VAR_15 = VAR_15 >> 1;
    }


    if (VAR_15 != 1)
    {
        FUNC_4(VAR_4, VAR_1, ("alignment (should be power of 2)"));
        return (uint64_t)VAR_3;
    }

    if (VAR_16 > VAR_5)
    {
        return (FUNC_3(VAR_10, VAR_7, VAR_8, VAR_9));
    }

    VAR_17 = FUNC_7(VAR_10->h_Spinlock);

    VAR_11 = VAR_10->freeBlocks[VAR_16];
    while ( VAR_11 && (VAR_11->end - VAR_11->base) < VAR_7 )
        VAR_11 = VAR_11->p_Next;


    if ( !VAR_11 )
    {
        FUNC_8(VAR_10->h_Spinlock, VAR_17);
        return (uint64_t)(VAR_3);
    }

    VAR_13 = VAR_11->base;
    VAR_14 = VAR_13 + VAR_7;


    if ((VAR_12 = FUNC_1(VAR_13, VAR_7, VAR_9)) == ((void*)0))
    {
        FUNC_8(VAR_10->h_Spinlock, VAR_17);
        return (uint64_t)(VAR_3);
    }


    if ( FUNC_2 ( VAR_10, VAR_13, VAR_14 ) != VAR_2 )
    {
        FUNC_8(VAR_10->h_Spinlock, VAR_17);
        FUNC_6(VAR_12);
        return (uint64_t)(VAR_3);
    }


    VAR_10->freeMemSize -= VAR_7;


    FUNC_0 ( VAR_10, VAR_12 );
    FUNC_8(VAR_10->h_Spinlock, VAR_17);

    return (VAR_13);
}
