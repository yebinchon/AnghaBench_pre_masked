
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tOptions ;
typedef int tOptionValue ;
struct TYPE_7__ {int argString; } ;
struct TYPE_8__ {int fOptState; TYPE_3__* optCookie; int pz_Name; TYPE_1__ optArg; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_9__ {int useCt; char** apzArgs; } ;
typedef TYPE_3__ tArgList ;


 int FUNC_0 (TYPE_3__*) ;
 int * VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__**,void*) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(tOptions * VAR_2, tOptDesc * VAR_3)
{
    if (VAR_2 < VAR_0)
        return;

    if (VAR_3->fOptState & VAR_1) {
        tArgList * VAR_4 = VAR_3->optCookie;
        int VAR_5;
        char const ** VAR_6;

        if (VAR_4 == ((void*)0))
            return;
        VAR_5 = VAR_4->useCt;
        VAR_6 = VAR_4->apzArgs;

        while (--VAR_5 >= 0) {
            void * VAR_7 = FUNC_1(*(VAR_6++));
            FUNC_4((tOptionValue const *)VAR_7);
        }

        FUNC_0(VAR_3->optCookie);

    } else {
        tOptionValue * VAR_8 = FUNC_3(
            VAR_3->optArg.argString, VAR_3->pz_Name, FUNC_5(VAR_3->pz_Name));

        if (VAR_8 != ((void*)0))
            FUNC_2(&(VAR_3->optCookie), FUNC_1(VAR_8));
    }
}
