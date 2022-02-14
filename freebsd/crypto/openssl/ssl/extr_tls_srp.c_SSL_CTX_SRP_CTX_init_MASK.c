
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int strength; } ;
struct ssl_ctx_st {TYPE_1__ srp_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

int FUNC_1(struct ssl_ctx_st *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return 0;

    FUNC_0(&VAR_1->srp_ctx, 0, sizeof(VAR_1->srp_ctx));
    VAR_1->srp_ctx.strength = VAR_0;

    return 1;
}
