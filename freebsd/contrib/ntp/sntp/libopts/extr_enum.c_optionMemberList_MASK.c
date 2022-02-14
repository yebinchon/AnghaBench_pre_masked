
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {uintptr_t argIntptr; int argString; } ;
struct TYPE_6__ {TYPE_1__ optArg; int (* pOptProc ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ tOptDesc ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;

char *
FUNC_2(tOptDesc * VAR_1)
{
    uintptr_t VAR_2 = VAR_1->optArg.argIntptr;
    char * VAR_3;
    (*(VAR_1->pOptProc))(VAR_0, VAR_1);
    VAR_3 = FUNC_0(VAR_1->optArg.argString);
    VAR_1->optArg.argIntptr = VAR_2;
    return VAR_3;
}
