
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int file_flags; } ;
typedef TYPE_2__ tuFileMode ;
struct TYPE_10__ {int pzProgName; } ;
typedef TYPE_3__ tOptions ;
struct TYPE_8__ {int argFd; int argString; } ;
struct TYPE_11__ {int fOptState; TYPE_1__ optArg; int optCookie; } ;
typedef TYPE_4__ tOptDesc ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(tOptions * VAR_1, tOptDesc * VAR_2, tuFileMode VAR_3)
{
    int VAR_4 = FUNC_3(VAR_2->optArg.argString, VAR_3.file_flags);
    if (VAR_4 < 0)
        FUNC_2(VAR_1->pzProgName, "open", VAR_2->optArg.argString);


    if ((VAR_2->fOptState & VAR_0) != 0)
        VAR_2->optCookie = FUNC_1(VAR_2->optArg.argString);
    else
        FUNC_0(VAR_2->optCookie, VAR_2->optArg.argString, "file name");

    VAR_2->optArg.argFd = VAR_4;
    VAR_2->fOptState &= ~VAR_0;
}
