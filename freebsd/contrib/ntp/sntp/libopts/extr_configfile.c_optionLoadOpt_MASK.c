
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int fOptSet; int pzProgName; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_9__ {int argString; } ;
struct TYPE_11__ {int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;
struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 scalar_t__ FUNC_4 (int ,struct stat*) ;

void
FUNC_5(tOptions * VAR_6, tOptDesc * VAR_7)
{
    struct stat VAR_8;

    if (VAR_6 <= VAR_2)
        return;







    if ( FUNC_0(VAR_7)
       || ((VAR_7->fOptState & VAR_4) != 0))
        return;

    if (FUNC_4(VAR_7->optArg.argString, &VAR_8) != 0) {
        if ((VAR_6->fOptSet & VAR_3) == 0)
            return;

        FUNC_3(VAR_6->pzProgName, "stat", VAR_7->optArg.argString);

    }

    if (! FUNC_1(VAR_8.st_mode)) {
        if ((VAR_6->fOptSet & VAR_3) == 0)
            return;
        VAR_5 = VAR_1;
        FUNC_3(VAR_6->pzProgName, "stat", VAR_7->optArg.argString);

    }

    FUNC_2(VAR_6, VAR_7->optArg.argString, VAR_0);
}
