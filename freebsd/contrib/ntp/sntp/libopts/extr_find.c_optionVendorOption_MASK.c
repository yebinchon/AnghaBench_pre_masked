
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int fOptSet; int (* pUsageProc ) (TYPE_2__*,int ) ;int pzProgName; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_18__ {int flags; } ;
typedef TYPE_3__ tOptState ;
struct TYPE_16__ {char* argString; } ;
struct TYPE_19__ {int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_4__ tOptDesc ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int ,char const*) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,char const*,TYPE_3__*) ;
 int VAR_7 ;
 int FUNC_10 (TYPE_2__*,int ) ;
 char* VAR_8 ;

void
FUNC_11(tOptions * VAR_9, tOptDesc * VAR_10)
{
    tOptState VAR_11 = FUNC_3(VAR_6);
    char const * VAR_12 = VAR_10->optArg.argString;

    if (VAR_9 <= VAR_1)
        return;

    if ((VAR_10->fOptState & VAR_5) != 0)
        return;

    if ((VAR_10->fOptState & VAR_2) == 0)
        VAR_11.flags = VAR_4;

    if ( ((VAR_9->fOptSet & VAR_3) == 0)
       || ! FUNC_4(FUNC_9(VAR_9, VAR_12, &VAR_11))
       || ! FUNC_4(FUNC_7(VAR_9, &VAR_11)) )
    {
        FUNC_6(VAR_7, VAR_8, VAR_9->pzProgName, VAR_12);
        (*VAR_9->pUsageProc)(VAR_9, VAR_0);

        FUNC_5(VAR_0);
    }




    if (VAR_9->fOptSet & VAR_2) {



        if (FUNC_0(VAR_11.flags))
            (void)FUNC_8(VAR_9, &VAR_11);

    } else {




        if (FUNC_1(VAR_11.flags) || FUNC_2(VAR_11.flags))
            (void)FUNC_8(VAR_9, &VAR_11);
    }
}
