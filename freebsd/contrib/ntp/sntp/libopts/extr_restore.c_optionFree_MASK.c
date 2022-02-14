
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* argString; } ;
struct TYPE_10__ {int optCt; int fOptState; char* pSavedState; struct TYPE_10__* pOptDesc; int * optCookie; TYPE_1__ optArg; } ;
typedef TYPE_2__ tOptions ;
typedef TYPE_2__ tOptDesc ;


 int FUNC_0 (char*) ;


 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,size_t) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(tOptions * VAR_2)
{
 free_saved_state:
    {
        tOptDesc * VAR_3 = VAR_2->pOptDesc;
        int VAR_4 = VAR_2->optCt;
        do {
            if (VAR_3->fOptState & VAR_0) {
                FUNC_0(VAR_3->optArg.argString);
                VAR_3->optArg.argString = ((void*)0);
                VAR_3->fOptState &= ~VAR_0;
            }

            switch (FUNC_1(VAR_3->fOptState)) {
            case 128:







                                 ;

                break;

            case 129:
                if (VAR_3->optCookie != ((void*)0))
                    FUNC_4(VAR_3->optCookie);
                break;
            }

            VAR_3->optCookie = ((void*)0);
        } while (VAR_3++, --VAR_4 > 0);
    }
    if (VAR_2->pSavedState != ((void*)0)) {
        tOptions * VAR_5 = (tOptions *)VAR_2->pSavedState;
        FUNC_2(VAR_2, VAR_5, sizeof(*VAR_5));
        FUNC_2(VAR_2->pOptDesc, VAR_5+1, (size_t)VAR_5->optCt * sizeof(tOptDesc));
        FUNC_0(VAR_2->pSavedState);
        VAR_2->pSavedState = ((void*)0);
        goto free_saved_state;
    }
}
