
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__** freeBlocks; } ;
typedef TYPE_1__ t_MM ;
struct TYPE_7__ {scalar_t__ base; scalar_t__ end; struct TYPE_7__* p_Next; } ;
typedef TYPE_2__ t_FreeBlock ;
typedef int t_BusyBlock ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (scalar_t__,scalar_t__,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 size_t VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static uint64_t FUNC_5(t_MM *VAR_3, uint64_t VAR_4, uint64_t VAR_5, char* VAR_6)
{
    t_FreeBlock *VAR_7;
    t_BusyBlock *VAR_8;
    uint64_t VAR_9, VAR_10, VAR_11 = 0;




    VAR_7 = VAR_3->freeBlocks[VAR_2];

    while ( VAR_7 )
    {
        VAR_11 = FUNC_3(VAR_7->base, VAR_5);



        if ( VAR_11 >= VAR_7->base &&
             VAR_11 < VAR_7->end &&
             VAR_4 <= (VAR_7->end - VAR_11) )
            break;
        else
            VAR_7 = VAR_7->p_Next;
    }


    if ( !VAR_7 )
        return (uint64_t)(VAR_1);

    VAR_9 = VAR_11;
    VAR_10 = VAR_11 + VAR_4;


    if ((VAR_8 = FUNC_1(VAR_9, VAR_4, VAR_6)) == ((void*)0))
        return (uint64_t)(VAR_1);


    if ( FUNC_2 ( VAR_3, VAR_9, VAR_10 ) != VAR_0 )
    {
        FUNC_4(VAR_8);
        return (uint64_t)(VAR_1);
    }


    FUNC_0 ( VAR_3, VAR_8 );

    return (VAR_9);
}
