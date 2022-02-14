
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {char* Buffer; struct TYPE_4__* Next; } ;
typedef TYPE_1__ ASL_CACHE_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;

char *
FUNC_1 (
    UINT32 VAR_6)
{
    char *VAR_7;
    ASL_CACHE_INFO *VAR_8;
    UINT32 VAR_9 = VAR_0;


    if (VAR_6 > VAR_9)
    {
        VAR_9 = VAR_6;

        if (VAR_2)
        {
            VAR_8 = FUNC_0 (sizeof (VAR_8->Next) + VAR_9);



            VAR_8->Next = VAR_2->Next;
            VAR_2->Next = VAR_8;



            VAR_4++;
            VAR_5 += VAR_6;

            return (VAR_8->Buffer);
        }
    }

    if ((VAR_3 + VAR_6) >= VAR_1)
    {


        VAR_8 = FUNC_0 (sizeof (VAR_8->Next) + VAR_9);



        VAR_8->Next = VAR_2;
        VAR_2 = VAR_8;



        VAR_3 = VAR_8->Buffer;
        VAR_1 = VAR_3 + VAR_9;
    }

    VAR_4++;
    VAR_5 += VAR_6;

    VAR_7 = VAR_3;
    VAR_3 += VAR_6;
    return (VAR_7);
}
