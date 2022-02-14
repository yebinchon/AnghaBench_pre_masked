
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pzPROGNAME; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_7__ {uintptr_t argEnum; int argString; } ;
struct TYPE_9__ {int fOptState; int pz_NAME; TYPE_1__ optArg; int (* pOptProc ) (int ,TYPE_3__*) ;} ;
typedef TYPE_3__ tOptDesc ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_3(tOptions * VAR_5, tOptDesc * VAR_6)
{
    uintptr_t VAR_7 = VAR_6->optArg.argEnum;
    FUNC_1(VAR_3, VAR_5->pzPROGNAME, VAR_6->pz_NAME);




    (*(VAR_6->pOptProc))(VAR_0, VAR_6);
    FUNC_1(VAR_4, VAR_6->optArg.argString);
    if (VAR_6->fOptState & VAR_1)
        FUNC_0(VAR_6->optArg.argString);
    VAR_6->optArg.argEnum = VAR_7;

    FUNC_1(VAR_2, VAR_5->pzPROGNAME, VAR_6->pz_NAME);
}
