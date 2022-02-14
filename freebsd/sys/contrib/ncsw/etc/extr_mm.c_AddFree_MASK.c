
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__** freeBlocks; } ;
typedef TYPE_1__ t_MM ;
struct TYPE_7__ {scalar_t__ end; scalar_t__ base; struct TYPE_7__* p_Next; } ;
typedef TYPE_2__ t_FreeBlock ;
typedef int t_Error ;


 TYPE_2__* FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static t_Error FUNC_4(t_MM *VAR_5, uint64_t VAR_6, uint64_t VAR_7)
{
    t_FreeBlock *VAR_8, *VAR_9, *VAR_10;
    uint64_t VAR_11;
    uint64_t VAR_12;
    int VAR_13;


    for (VAR_13=0; VAR_13 <= VAR_3; VAR_13++)
    {
        VAR_8 = VAR_10 = 0;
        VAR_9 = VAR_5->freeBlocks[VAR_13];

        VAR_11 = (uint64_t)(0x1 << VAR_13);
        VAR_12 = FUNC_1(VAR_6, VAR_11);


        if (VAR_12 >= VAR_7)
            continue;


        while ( VAR_9 )
        {
            if ( VAR_12 <= VAR_9->end )
            {
                if ( VAR_7 > VAR_9->end )
                {
                    t_FreeBlock *VAR_14;
                    while ( VAR_9->p_Next && VAR_7 > VAR_9->p_Next->end )
                    {
                        VAR_14 = VAR_9->p_Next;
                        VAR_9->p_Next = VAR_9->p_Next->p_Next;
                        FUNC_3(VAR_14);
                    }

                    VAR_14 = VAR_9->p_Next;
                    if ( !VAR_14 || (VAR_14 && VAR_7 < VAR_14->base) )
                    {
                        VAR_9->end = VAR_7;
                    }
                    else
                    {
                        VAR_9->end = VAR_14->end;
                        VAR_9->p_Next = VAR_14->p_Next;
                        FUNC_3(VAR_14);
                    }
                }
                else if ( (VAR_7 < VAR_9->base) && ((VAR_7-VAR_12) >= VAR_11) )
                {
                    if ((VAR_10 = FUNC_0(VAR_12, VAR_7-VAR_12)) == ((void*)0))
                        FUNC_2(VAR_2, VAR_0, VAR_4);

                    VAR_10->p_Next = VAR_9;
                    if (VAR_8)
                        VAR_8->p_Next = VAR_10;
                    else
                        VAR_5->freeBlocks[VAR_13] = VAR_10;
                    break;
                }

                if ((VAR_12 < VAR_9->base) && (VAR_7 >= VAR_9->base))
                {
                    VAR_9->base = VAR_12;
                }



                if ( (VAR_9->end - VAR_9->base) < VAR_11)
                {
                    if ( VAR_8 )
                        VAR_8->p_Next = VAR_9->p_Next;
                    else
                        VAR_5->freeBlocks[VAR_13] = VAR_9->p_Next;
                    FUNC_3(VAR_9);
                    VAR_9 = ((void*)0);
                }
                break;
            }
            else
            {
                VAR_8 = VAR_9;
                VAR_9 = VAR_9->p_Next;
            }
        }




        if ( !VAR_9 && ((((uint64_t)(VAR_7-VAR_6)) & ((uint64_t)(VAR_11-1))) == 0) )
        {
            if ((VAR_10 = FUNC_0(VAR_12, VAR_7-VAR_6)) == ((void*)0))
                FUNC_2(VAR_2, VAR_0, VAR_4);

            if (VAR_8)
                VAR_8->p_Next = VAR_10;
            else
                VAR_5->freeBlocks[VAR_13] = VAR_10;
        }


        if ((VAR_11 == 1) && !VAR_10)
        {
            if ( VAR_9 && VAR_6 > VAR_9->base )
                VAR_6 = VAR_9->base;
            if ( VAR_9 && VAR_7 < VAR_9->end )
                VAR_7 = VAR_9->end;
        }
    }

    return (VAR_1);
}
