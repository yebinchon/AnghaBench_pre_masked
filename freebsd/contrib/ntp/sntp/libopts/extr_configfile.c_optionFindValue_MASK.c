
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tOptionValue ;
struct TYPE_4__ {TYPE_2__* optCookie; int fOptState; } ;
typedef TYPE_1__ tOptDesc ;
struct TYPE_5__ {int useCt; int apzArgs; } ;
typedef TYPE_2__ tArgList ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 void** FUNC_1 (int ) ;
 int VAR_3 ;
 int * FUNC_2 (int const*,char const*) ;

const tOptionValue *
FUNC_3(const tOptDesc * VAR_4, char const * VAR_5, char const * VAR_6)
{
    const tOptionValue * VAR_7 = ((void*)0);

    if ( (VAR_4 == ((void*)0))
       || (FUNC_0(VAR_4->fOptState) != VAR_2)) {
        VAR_3 = VAR_0;
    }

    else if (VAR_4->optCookie == ((void*)0)) {
        VAR_3 = VAR_1;
    }

    else do {
        tArgList * VAR_8 = VAR_4->optCookie;
        int VAR_9 = VAR_8->useCt;
        const void ** VAR_10 = FUNC_1(VAR_8->apzArgs);

        if (VAR_9 == 0) {
            VAR_3 = VAR_1;
            break;
        }

        if (VAR_5 == ((void*)0)) {
            VAR_7 = (const tOptionValue *)*VAR_10;
            break;
        }

        while (--VAR_9 >= 0) {
            const tOptionValue * VAR_11 = *(VAR_10++);
            const tOptionValue * VAR_12 = FUNC_2(VAR_11, VAR_5);

            if (VAR_12 == ((void*)0))
                continue;

            if (VAR_6 == ((void*)0)) {
                VAR_7 = VAR_11;
                break;
            }
        }
        if (VAR_7 == ((void*)0))
            VAR_3 = VAR_1;
    } while (0);

    return VAR_7;
}
