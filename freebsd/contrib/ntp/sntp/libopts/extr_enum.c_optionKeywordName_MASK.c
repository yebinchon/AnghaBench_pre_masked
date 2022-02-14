
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int argEnum; char const* argString; } ;
struct TYPE_6__ {TYPE_1__ optArg; int (* pOptProc ) (int ,TYPE_2__*) ;int member_0; } ;
typedef TYPE_2__ tOptDesc ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*) ;

char const *
FUNC_1(tOptDesc * VAR_1, unsigned int VAR_2)
{
    tOptDesc VAR_3 = { 0 };
    VAR_3.optArg.argEnum = VAR_2;

    (*(VAR_1->pOptProc))(VAR_0, &VAR_3 );
    return VAR_3.optArg.argString;
}
