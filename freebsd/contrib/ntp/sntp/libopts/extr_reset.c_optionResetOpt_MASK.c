
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tSuccess ;
struct TYPE_20__ {int (* pUsageProc ) (TYPE_2__*,int ) ;int pzProgPath; int pzProgName; int * originalOptArgCookie; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_21__ {int pOD; } ;
typedef TYPE_3__ tOptState ;
struct TYPE_19__ {char* argString; } ;
struct TYPE_22__ {char const* pz_Name; TYPE_1__ optArg; } ;
typedef TYPE_4__ tOptDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 char const VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_3__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int ,...) ;
 int FUNC_6 (TYPE_2__*,char const*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;

void
FUNC_13(tOptions * VAR_9, tOptDesc * VAR_10)
{
    static bool VAR_11 = 0;

    tOptState VAR_12 = FUNC_1(VAR_0);
    char const * VAR_13 = VAR_10->optArg.argString;
    tSuccess VAR_14;

    if (VAR_9 <= VAR_3)
        return;

    if (VAR_11)
        return;

    if ( (! FUNC_0(VAR_9))
       || (VAR_9->originalOptArgCookie == ((void*)0)))
        FUNC_3(VAR_7);

    if ((VAR_13 == ((void*)0)) || (*VAR_13 == VAR_2)) {
        FUNC_5(VAR_4, VAR_8, VAR_9->pzProgName, VAR_10->pz_Name);
        VAR_9->pUsageProc(VAR_9, VAR_1);

        FUNC_4(0 == 1);
    }

    VAR_11 = 1;

    if (VAR_13[1] == VAR_2) {
        if (*VAR_13 == '*') {
            FUNC_9(VAR_9);
            VAR_11 = 0;
            return;
        }

        VAR_14 = FUNC_7(VAR_9, (uint8_t)*VAR_13, &VAR_12);
        if (! FUNC_2(VAR_14)) {
            FUNC_5(VAR_4, VAR_5, VAR_9->pzProgPath, *VAR_13);
            VAR_9->pUsageProc(VAR_9, VAR_1);

            FUNC_4(0 == 1);
        }
    } else {
        VAR_14 = FUNC_6(VAR_9, VAR_13, &VAR_12);
        if (! FUNC_2(VAR_14)) {
            FUNC_5(VAR_4, VAR_6, VAR_9->pzProgPath, VAR_13);
            VAR_9->pUsageProc(VAR_9, VAR_1);

            FUNC_4(0 == 1);
        }
    }







    FUNC_8(VAR_9, VAR_12.pOD);
    VAR_11 = 0;
}
