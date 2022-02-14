
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ optCt; struct TYPE_7__* pOptDesc; struct TYPE_7__* pSavedState; } ;
typedef TYPE_1__ tOptions ;
typedef int tOptDesc ;


 TYPE_1__* FUNC_0 (size_t,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,size_t) ;

void
FUNC_3(tOptions * VAR_0)
{
    tOptions * VAR_1 = (tOptions *)VAR_0->pSavedState;

    if (VAR_1 == ((void*)0)) {
        size_t VAR_2 = sizeof(*VAR_0)
            + ((size_t)VAR_0->optCt * sizeof(tOptDesc));
        VAR_1 = FUNC_0(VAR_2, "saved option state");

        VAR_0->pSavedState = VAR_1;
    }

    FUNC_2(VAR_1, VAR_0, sizeof(*VAR_1));
    FUNC_2(VAR_1 + 1, VAR_0->pOptDesc, (size_t)VAR_1->optCt * sizeof(tOptDesc));

    FUNC_1(VAR_0);
}
