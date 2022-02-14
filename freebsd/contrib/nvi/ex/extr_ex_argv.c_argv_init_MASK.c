
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ argc; int argv; } ;
struct TYPE_5__ {scalar_t__ argsoff; int args; } ;
typedef int SCR ;
typedef TYPE_1__ EX_PRIVATE ;
typedef TYPE_2__ EXCMD ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

int
FUNC_2(SCR *VAR_0, EXCMD *VAR_1)
{
 EX_PRIVATE *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_2->argsoff = 0;
 FUNC_1(VAR_0, 1);

 VAR_1->argv = VAR_2->args;
 VAR_1->argc = VAR_2->argsoff;
 return (0);
}
