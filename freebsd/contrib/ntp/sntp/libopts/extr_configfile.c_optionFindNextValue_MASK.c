
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

tOptionValue const *
FUNC_2(const tOptDesc * VAR_4, const tOptionValue * VAR_5,
                    char const * VAR_6, char const * VAR_7)
{
    bool VAR_8 = 0;
    const tOptionValue * VAR_9 = ((void*)0);

    (void)VAR_6;
    (void)VAR_7;

    if ( (VAR_4 == ((void*)0))
       || (FUNC_0(VAR_4->fOptState) != VAR_2)) {
        VAR_3 = VAR_0;
    }

    else if (VAR_4->optCookie == ((void*)0)) {
        VAR_3 = VAR_1;
    }

    else do {
        tArgList * VAR_10 = VAR_4->optCookie;
        int VAR_11 = VAR_10->useCt;
        const void ** VAR_12 = FUNC_1(VAR_10->apzArgs);

        while (--VAR_11 >= 0) {
            const tOptionValue * VAR_13 = *(VAR_12++);
            if (VAR_8) {
                VAR_9 = VAR_13;
                break;
            }
            if (VAR_13 == VAR_5)
                VAR_8 = 1;
        }
        if (VAR_9 == ((void*)0))
            VAR_3 = VAR_1;
    } while (0);

    return VAR_9;
}
