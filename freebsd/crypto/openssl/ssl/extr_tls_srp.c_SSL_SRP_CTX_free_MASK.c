
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int strength; int v; int b; int a; int A; int B; int s; int g; int N; int info; int login; } ;
struct ssl_st {TYPE_1__ srp_ctx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int FUNC_3(struct ssl_st *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return 0;
    FUNC_1(VAR_1->srp_ctx.login);
    FUNC_1(VAR_1->srp_ctx.info);
    FUNC_0(VAR_1->srp_ctx.N);
    FUNC_0(VAR_1->srp_ctx.g);
    FUNC_0(VAR_1->srp_ctx.s);
    FUNC_0(VAR_1->srp_ctx.B);
    FUNC_0(VAR_1->srp_ctx.A);
    FUNC_0(VAR_1->srp_ctx.a);
    FUNC_0(VAR_1->srp_ctx.b);
    FUNC_0(VAR_1->srp_ctx.v);
    FUNC_2(&VAR_1->srp_ctx, 0, sizeof(VAR_1->srp_ctx));
    VAR_1->srp_ctx.strength = VAR_0;
    return 1;
}
