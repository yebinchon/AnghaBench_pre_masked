
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_10__ {int fOptSet; int (* pUsageProc ) (TYPE_2__*,int ) ;int pzProgName; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_9__ {long argInt; int argString; } ;
struct TYPE_11__ {int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 char* VAR_5 ;

void
FUNC_5(tOptions * VAR_6, tOptDesc * VAR_7)
{
    time_t VAR_8;

    if (FUNC_1(VAR_6, VAR_7))
        return;

    VAR_8 = FUNC_3(VAR_7->optArg.argString);
    if (VAR_8 == VAR_0) {
        FUNC_2(VAR_4, VAR_5, VAR_6->pzProgName, VAR_7->optArg.argString);
        if ((VAR_6->fOptSet & VAR_2) != 0)
            (*(VAR_6->pUsageProc))(VAR_6, VAR_1);
    }

    if (VAR_7->fOptState & VAR_3) {
        FUNC_0(VAR_7->optArg.argString);
        VAR_7->fOptState &= ~VAR_3;
    }

    VAR_7->optArg.argInt = (long)VAR_8;
}
