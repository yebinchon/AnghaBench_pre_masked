
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* seed_key; int gN_cache; int users_pwd; } ;
typedef TYPE_1__ SRP_VBASE ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(SRP_VBASE *VAR_1)
{
    if (!VAR_1)
        return;
    FUNC_2(VAR_1->users_pwd, VAR_0);
    FUNC_1(VAR_1->gN_cache);
    FUNC_0(VAR_1->seed_key);
    FUNC_0(VAR_1);
}
