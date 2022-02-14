
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_13__ {int fOptSet; int (* pUsageProc ) (TYPE_2__*,int ) ;int pzProgName; int * pzPkgDataDir; } ;
typedef TYPE_2__ tOptions ;
struct TYPE_12__ {scalar_t__ argInt; int argString; } ;
struct TYPE_14__ {int fOptState; TYPE_1__ optArg; } ;
typedef TYPE_3__ tOptDesc ;
struct tm {int dummy; } ;
typedef int fmt ;


 char* FUNC_0 (scalar_t__,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,struct tm*) ;
 scalar_t__ FUNC_7 (struct tm*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_13 (int *) ;
 char* VAR_6 ;

void
FUNC_14(tOptions * VAR_7, tOptDesc * VAR_8)
{
    FUNC_8(VAR_7, VAR_8);
    if (VAR_8->optArg.argInt != VAR_0)
        VAR_8->optArg.argInt += (long)FUNC_13(((void*)0));
}
