
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * info; int * id; int * v; int * s; int * g; int * N; } ;
typedef TYPE_1__ SRP_user_pwd ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static SRP_user_pwd *FUNC_1(void)
{
    SRP_user_pwd *VAR_0;

    if ((VAR_0 = FUNC_0(sizeof(*VAR_0))) == ((void*)0)) {

        return ((void*)0);
    }
    VAR_0->N = ((void*)0);
    VAR_0->g = ((void*)0);
    VAR_0->s = ((void*)0);
    VAR_0->v = ((void*)0);
    VAR_0->id = ((void*)0);
    VAR_0->info = ((void*)0);
    return VAR_0;
}
