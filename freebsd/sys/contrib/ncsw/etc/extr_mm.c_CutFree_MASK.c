
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
    uint64_t VAR_11, VAR_12, VAR_13;
    uint64_t VAR_14;
    int VAR_15;

    for (VAR_15=0; VAR_15 <= VAR_3; VAR_15++)
    {
        VAR_8 = VAR_10 = 0;
        VAR_9 = VAR_5->freeBlocks[VAR_15];

        VAR_14 = (uint64_t)(0x1 << VAR_15);
        VAR_11 = FUNC_1(VAR_7, VAR_14);

        while ( VAR_9 )
        {
            VAR_12 = VAR_9->base;
            VAR_13 = VAR_9->end;

            if ( (VAR_6 <= VAR_12) && (VAR_7 <= VAR_13) && (VAR_7 > VAR_12) )
            {
                if ( VAR_11 >= VAR_13 ||
                     (VAR_11 < VAR_13 && ((VAR_13-VAR_11) < VAR_14)) )
                {
                    if (VAR_8)
                        VAR_8->p_Next = VAR_9->p_Next;
                    else
                        VAR_5->freeBlocks[VAR_15] = VAR_9->p_Next;
                    FUNC_3(VAR_9);
                }
                else
                {
                    VAR_9->base = VAR_11;
                }
                break;
            }
            else if ( (VAR_6 > VAR_12) && (VAR_7 <= VAR_13) )
            {
                if ( (VAR_6-VAR_12) >= VAR_14 )
                {
                    if ( (VAR_11 < VAR_13) && ((VAR_13-VAR_11) >= VAR_14) )
                    {
                        if ((VAR_10 = FUNC_0(VAR_11, VAR_13-VAR_11)) == ((void*)0))
                            FUNC_2(VAR_2, VAR_0, VAR_4);
                        VAR_10->p_Next = VAR_9->p_Next;
                        VAR_9->p_Next = VAR_10;
                    }
                    VAR_9->end = VAR_6;
                }
                else if ( (VAR_11 < VAR_13) && ((VAR_13-VAR_11) >= VAR_14) )
                {
                    VAR_9->base = VAR_11;
                }
                else
                {
                    if (VAR_8)
                        VAR_8->p_Next = VAR_9->p_Next;
                    else
                        VAR_5->freeBlocks[VAR_15] = VAR_9->p_Next;
                    FUNC_3(VAR_9);
                }
                break;
            }
            else
            {
                VAR_8 = VAR_9;
                VAR_9 = VAR_9->p_Next;
            }
        }
    }

    return (VAR_1);
}
