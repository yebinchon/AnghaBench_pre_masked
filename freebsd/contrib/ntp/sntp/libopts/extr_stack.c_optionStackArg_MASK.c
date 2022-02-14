
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tOptions ;
struct TYPE_8__ {int * argString; } ;
struct TYPE_9__ {int fOptState; TYPE_3__* optCookie; TYPE_1__ optArg; } ;
typedef TYPE_2__ tOptDesc ;
struct TYPE_10__ {int useCt; struct TYPE_10__** apzArgs; } ;
typedef TYPE_3__ tArgList ;


 int FUNC_0 (char*,int *,char*) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__**,int ) ;

void
FUNC_5(tOptions * VAR_1, tOptDesc * VAR_2)
{
    char * VAR_3;

    if (FUNC_2(VAR_1, VAR_2))
        return;

    if ((VAR_2->fOptState & VAR_0) != 0) {
        tArgList * VAR_4 = VAR_2->optCookie;
        int VAR_5;
        if (VAR_4 == ((void*)0))
            return;

        VAR_5 = VAR_4->useCt;
        while (--VAR_5 >= 0)
            FUNC_1(VAR_4->apzArgs[VAR_5]);
        FUNC_1(VAR_4);

    } else {
        if (VAR_2->optArg.argString == ((void*)0))
            return;

        FUNC_0(VAR_3, VAR_2->optArg.argString, "stack arg");
        FUNC_4(&(VAR_2->optCookie), FUNC_3(VAR_3));
    }
}
