
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int g; int N; } ;
struct TYPE_6__ {int * v; int * s; void* g; void* N; } ;
struct TYPE_7__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ SRP_gN ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*,int **,int **,int ,int ) ;
 TYPE_3__* FUNC_3 (char const*) ;

int FUNC_4(SSL *VAR_0, const char *VAR_1, const char *VAR_2,
                                const char *VAR_3)
{
    SRP_gN *VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 == ((void*)0))
        return -1;
    VAR_0->srp_ctx.N = FUNC_1(VAR_4->N);
    VAR_0->srp_ctx.g = FUNC_1(VAR_4->g);
    FUNC_0(VAR_0->srp_ctx.v);
    VAR_0->srp_ctx.v = ((void*)0);
    FUNC_0(VAR_0->srp_ctx.s);
    VAR_0->srp_ctx.s = ((void*)0);
    if (!FUNC_2
        (VAR_1, VAR_2, &VAR_0->srp_ctx.s, &VAR_0->srp_ctx.v, VAR_4->N, VAR_4->g))
        return -1;

    return 1;
}
