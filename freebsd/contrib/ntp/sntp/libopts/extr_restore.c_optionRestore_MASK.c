
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* pzProgName; char* pzPROGNAME; struct TYPE_7__* pSavedState; scalar_t__ optCt; struct TYPE_7__* pOptDesc; } ;
typedef TYPE_1__ tOptions ;
typedef int tOptDesc ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;

void
FUNC_5(tOptions * VAR_4)
{
    tOptions * VAR_5 = (tOptions *)VAR_4->pSavedState;

    if (VAR_5 == ((void*)0)) {
        char const * VAR_6 = VAR_4->pzProgName;
        if (VAR_6 == ((void*)0)) {
            VAR_6 = VAR_4->pzPROGNAME;
            if (VAR_6 == ((void*)0))
                VAR_6 = VAR_2;
        }
        FUNC_1(VAR_1, VAR_3, VAR_6);
        FUNC_4(VAR_0);
    }

    VAR_4->pSavedState = ((void*)0);
    FUNC_3(VAR_4);

    FUNC_2(VAR_4, VAR_5, sizeof(*VAR_5));
    FUNC_2(VAR_4->pOptDesc, VAR_5+1, (size_t)VAR_5->optCt * sizeof(tOptDesc));
    VAR_4->pSavedState = VAR_5;

    FUNC_0(VAR_4);
}
