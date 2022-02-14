
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int presetOptCt; TYPE_3__* pOptDesc; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_16__ {int argBool; int argInt; } ;
struct TYPE_18__ {int fOptState; scalar_t__ optEquivIndex; scalar_t__ optIndex; int optActualIndex; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_3__*,char*) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,TYPE_3__*,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,TYPE_3__*) ;

void
FUNC_12(tOptions * VAR_3)
{
    tOptDesc * VAR_4;
    int VAR_5;
    FILE * VAR_6 = FUNC_4(VAR_3);

    if (VAR_6 == ((void*)0))
        return;




    VAR_5 = VAR_3->presetOptCt;
    VAR_4 = VAR_3->pOptDesc;
    do {
        tOptDesc * VAR_7;
        if (FUNC_1(VAR_4))
            continue;

        if ((VAR_4->fOptState & VAR_1) != 0)
            continue;

        if ( (VAR_4->optEquivIndex != VAR_0)
           && (VAR_4->optEquivIndex != VAR_4->optIndex))
            continue;






        VAR_7 = ((VAR_4->fOptState & VAR_2) != 0)
            ? (VAR_3->pOptDesc + VAR_4->optActualIndex) : VAR_4;

        switch (FUNC_0(VAR_4->fOptState)) {
        case 130:
            FUNC_9(VAR_6, VAR_7, VAR_4);
            break;

        case 129:
            FUNC_5(VAR_6, VAR_7, FUNC_2(VAR_7->optArg.argInt));
            break;

        case 128:
            FUNC_11(VAR_6, VAR_7);
            break;

        case 134:
            FUNC_6(VAR_6, VAR_7);
            break;

        case 131:
            FUNC_10(VAR_6, VAR_7);
            break;

        case 135:
            FUNC_5(VAR_6, VAR_7, VAR_7->optArg.argBool ? "true" : "false");
            break;

        case 132:
            FUNC_8(VAR_6, VAR_7);
            break;

        case 133:
            FUNC_7(VAR_6, VAR_7, VAR_3);
            break;

        default:
            break;
        }
    } while (VAR_4++, (--VAR_5 > 0));

    FUNC_3(VAR_6);
}
