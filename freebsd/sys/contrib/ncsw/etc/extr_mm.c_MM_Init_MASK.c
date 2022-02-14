
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {int ** freeBlocks; int * memBlocks; scalar_t__ busyBlocks; scalar_t__ freeMemSize; int h_Spinlock; } ;
typedef TYPE_1__ t_MM ;
typedef TYPE_1__* t_Handle ;
typedef int t_Error ;


 int * FUNC_0 (scalar_t__,scalar_t__) ;
 int * FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;

t_Error FUNC_8(t_Handle *VAR_6, uint64_t VAR_7, uint64_t VAR_8)
{
    t_MM *VAR_9;
    uint64_t VAR_10, VAR_11;
    int VAR_12;

    if (!VAR_8)
    {
        FUNC_4(VAR_3, VAR_0, ("Size (should be positive)"));
    }


    VAR_9 = (t_MM *)FUNC_7(sizeof(t_MM));
    if (!VAR_9)
    {
        FUNC_4(VAR_3, VAR_1, VAR_5);
    }

    VAR_9->h_Spinlock = FUNC_6();
    if (!VAR_9->h_Spinlock)
    {
        FUNC_5(VAR_9);
        FUNC_4(VAR_3, VAR_1, ("MM spinlock!"));
    }


    VAR_9->freeMemSize = VAR_8;


    VAR_9->busyBlocks = 0;


    if ((VAR_9->memBlocks = FUNC_1(VAR_7, VAR_8)) == ((void*)0))
    {
        FUNC_3(VAR_9);
        FUNC_4(VAR_3, VAR_1, VAR_5);
    }


    for (VAR_12=0; VAR_12 <= VAR_4; VAR_12++)
    {
        VAR_10 = FUNC_2( VAR_7, (0x1 << VAR_12) );
        VAR_11 = VAR_8 - (VAR_10 - VAR_7);

        if ((VAR_9->freeBlocks[VAR_12] = FUNC_0(VAR_10, VAR_11)) == ((void*)0))
        {
            FUNC_3(VAR_9);
            FUNC_4(VAR_3, VAR_1, VAR_5);
        }
    }

    *VAR_6 = VAR_9;

    return (VAR_2);
}
