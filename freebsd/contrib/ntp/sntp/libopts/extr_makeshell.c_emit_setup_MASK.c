
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int presetOptCt; int pzPROGNAME; TYPE_3__* pOptDesc; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_7__ {char* argString; int argBool; scalar_t__ argIntptr; scalar_t__ argInt; } ;
struct TYPE_9__ {int optMaxCt; int * pz_NAME; TYPE_1__ optArg; int (* pOptProc ) (int ,TYPE_3__*) ;int fOptState; } ;
typedef TYPE_3__ tOptDesc ;
typedef int int_val_buf ;


 char* VAR_0 ;
 char* VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int ) ;
 char const* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 char* VAR_5 ;
 int FUNC_2 (char const*,int ,int *,char const*) ;
 int FUNC_3 (char*,int,char*,unsigned long) ;
 int FUNC_4 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_5(tOptions * VAR_6)
{
    tOptDesc * VAR_7 = VAR_6->pOptDesc;
    int VAR_8 = VAR_6->presetOptCt;
    char const * VAR_9;
    char const * VAR_10;

    for (;VAR_8 > 0; VAR_7++, --VAR_8) {
        char VAR_11[32];





        if (FUNC_1(VAR_7) || (VAR_7->pz_NAME == ((void*)0)))
            continue;

        if (VAR_7->optMaxCt > 1)
             VAR_9 = VAR_1;
        else VAR_9 = VAR_3;





        switch (FUNC_0(VAR_7->fOptState)) {
        case 130:
            (*(VAR_7->pOptProc))(VAR_2, VAR_7 );
            VAR_10 = VAR_7->optArg.argString;
            break;




        case 128:
            FUNC_3(VAR_11, sizeof(VAR_11), "%d",
                     (int)VAR_7->optArg.argInt);
            VAR_10 = VAR_11;
            break;

        case 129:
            FUNC_3(VAR_11, sizeof(VAR_11), "%lu",
                     (unsigned long)VAR_7->optArg.argIntptr);
            VAR_10 = VAR_11;
            break;

        case 131:
            VAR_10 = (VAR_7->optArg.argBool) ? VAR_5 : VAR_0;
            break;

        default:
            if (VAR_7->optArg.argString == ((void*)0)) {
                if (VAR_9 == VAR_3)
                    VAR_9 = VAR_4;
                VAR_10 = ((void*)0);
            }
            else
                VAR_10 = VAR_7->optArg.argString;
        }

        FUNC_2(VAR_9, VAR_6->pzPROGNAME, VAR_7->pz_NAME, VAR_10);
    }
}
