
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int teEnvPresetType ;
typedef int tOptions ;
struct TYPE_6__ {scalar_t__* pzOptArg; int flags; TYPE_1__* pOD; int optType; } ;
typedef TYPE_2__ tOptState ;
struct TYPE_5__ {int fOptState; int * pz_DisablePfx; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__* FUNC_5 (char*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_7 (scalar_t__*,int *) ;

__attribute__((used)) static void
FUNC_8(tOptState * VAR_7, char * VAR_8,
            tOptions * VAR_9, teEnvPresetType VAR_10)
{
    VAR_7->pzOptArg = FUNC_5(VAR_8);
    if (VAR_7->pzOptArg == ((void*)0))
        return;

    VAR_7->flags = VAR_5 | VAR_2 | VAR_7->pOD->fOptState;
    VAR_7->optType = VAR_6;

    if ( (VAR_7->pOD->pz_DisablePfx != ((void*)0))
       && (FUNC_7(VAR_7->pzOptArg, VAR_7->pOD->pz_DisablePfx) == 0)) {
        VAR_7->flags |= VAR_4;
        VAR_7->pzOptArg = ((void*)0);
        FUNC_6(VAR_9, VAR_7);
        return;
    }

    switch (VAR_10) {
    case 129:



        if (FUNC_1(VAR_7->flags))
            break;
        return;

    case 128:



        if (FUNC_2(VAR_7->flags) || FUNC_3(VAR_7->flags))
            break;
        return;

    default:
        break;
    }







    if (FUNC_4(VAR_7->pOD->fOptState) == VAR_1) {



        VAR_7->pzOptArg = ((void*)0);

    } else if (VAR_7->pzOptArg[0] == VAR_0) {




        if ((VAR_7->pOD->fOptState & VAR_3) == 0)
            return;
        VAR_7->pzOptArg = ((void*)0);

    } else {
        FUNC_0(VAR_7->pzOptArg, VAR_7->pzOptArg, "option argument");
        VAR_7->flags |= VAR_2;
    }

    FUNC_6(VAR_9, VAR_7);
}
