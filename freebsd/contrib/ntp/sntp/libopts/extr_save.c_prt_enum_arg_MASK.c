
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {uintptr_t argEnum; int argString; } ;
struct TYPE_7__ {TYPE_1__ optArg; int (* pOptProc ) (int ,TYPE_2__*) ;} ;
typedef TYPE_2__ tOptDesc ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(FILE * VAR_1, tOptDesc * VAR_2)
{
    uintptr_t VAR_3 = VAR_2->optArg.argEnum;





    (*(VAR_2->pOptProc))(VAR_0, VAR_2);
    FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_2->optArg.argString));

    VAR_2->optArg.argEnum = VAR_3;
}
