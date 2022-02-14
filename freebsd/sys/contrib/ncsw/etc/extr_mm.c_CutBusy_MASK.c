
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__* busyBlocks; } ;
typedef TYPE_1__ t_MM ;
typedef int t_Error ;
struct TYPE_7__ {scalar_t__ end; scalar_t__ base; struct TYPE_7__* p_Next; int name; } ;
typedef TYPE_2__ t_BusyBlock ;


 TYPE_2__* FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static t_Error FUNC_3(t_MM *VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
    t_BusyBlock *VAR_7, *VAR_8, *VAR_9;

    VAR_7 = VAR_4->busyBlocks;
    VAR_8 = VAR_9 = 0;

    while ( VAR_7 )
    {
        if ( VAR_5 < VAR_7->end )
        {
            if ( VAR_6 > VAR_7->end )
            {
                t_BusyBlock *VAR_10;
                while ( VAR_7->p_Next && VAR_6 >= VAR_7->p_Next->end )
                {
                    VAR_10 = VAR_7->p_Next;
                    VAR_7->p_Next = VAR_7->p_Next->p_Next;
                    FUNC_2(VAR_10);
                }

                VAR_10 = VAR_7->p_Next;
                if ( VAR_10 && VAR_6 > VAR_10->base )
                {
                    VAR_10->base = VAR_6;
                }
            }

            if ( VAR_5 <= VAR_7->base )
            {
                if ( VAR_6 < VAR_7->end && VAR_6 > VAR_7->base )
                {
                    VAR_7->base = VAR_6;
                }
                else if ( VAR_6 >= VAR_7->end )
                {
                    if ( VAR_8 )
                        VAR_8->p_Next = VAR_7->p_Next;
                    else
                        VAR_4->busyBlocks = VAR_7->p_Next;
                    FUNC_2(VAR_7);
                }
            }
            else
            {
                if ( VAR_6 < VAR_7->end && VAR_6 > VAR_7->base )
                {
                    if ((VAR_9 = FUNC_0(VAR_6,
                                                  VAR_7->end-VAR_6,
                                                  VAR_7->name)) == ((void*)0))
                        FUNC_1(VAR_2, VAR_0, VAR_3);
                    VAR_9->p_Next = VAR_7->p_Next;
                    VAR_7->p_Next = VAR_9;
                }
                VAR_7->end = VAR_5;
            }
            break;
        }
        else
        {
            VAR_8 = VAR_7;
            VAR_7 = VAR_7->p_Next;
        }
    }

    return (VAR_1);
}
