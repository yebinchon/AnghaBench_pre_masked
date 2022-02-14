
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdtable {int minargc; int maxargc; int helptxt; int cmd; } ;


 int FUNC_0 (char*,int ,int,...) ;

int
FUNC_1(struct cmdtable *VAR_0, int VAR_1, char *VAR_2[])
{
    if (VAR_0->minargc == VAR_0->maxargc)
 FUNC_0("command `%s' takes %u arguments, got %u", VAR_0->cmd,
     VAR_0->minargc-1, VAR_1-1);
    else
 FUNC_0("command `%s' takes from %u to %u arguments",
       VAR_0->cmd, VAR_0->minargc-1, VAR_0->maxargc-1);

    FUNC_0("usage: %s: %s", VAR_0->cmd, VAR_0->helptxt);
    return 1;
}
