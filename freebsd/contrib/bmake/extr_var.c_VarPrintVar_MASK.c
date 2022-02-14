
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* name; int val; } ;
typedef TYPE_1__ Var ;


 char* FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
    Var *VAR_2 = (Var *)VAR_1;
    FUNC_1(VAR_0, "%-16s = %s\n", VAR_2->name, FUNC_0(&VAR_2->val, ((void*)0)));
}
