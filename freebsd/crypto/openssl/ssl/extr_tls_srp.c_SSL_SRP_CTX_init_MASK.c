
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * v; int * b; int * a; int * A; int * B; int * s; int * g; int * N; int * info; int * login; int srp_Mask; int strength; int SRP_give_srp_client_pwd_callback; int SRP_verify_param_callback; int TLS_ext_srp_username_callback; int SRP_cb_arg; } ;
struct ssl_st {TYPE_3__ srp_ctx; TYPE_2__* ctx; } ;
struct TYPE_4__ {int srp_Mask; int * info; int * login; int * b; int * v; int * a; int * A; int * B; int * s; int * g; int * N; int strength; int SRP_give_srp_client_pwd_callback; int SRP_verify_param_callback; int TLS_ext_srp_username_callback; int SRP_cb_arg; } ;
struct TYPE_5__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL_CTX ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;

int FUNC_7(struct ssl_st *VAR_3)
{
    SSL_CTX *VAR_4;

    if ((VAR_3 == ((void*)0)) || ((VAR_4 = VAR_3->ctx) == ((void*)0)))
        return 0;

    FUNC_6(&VAR_3->srp_ctx, 0, sizeof(VAR_3->srp_ctx));

    VAR_3->srp_ctx.SRP_cb_arg = VAR_4->srp_ctx.SRP_cb_arg;

    VAR_3->srp_ctx.TLS_ext_srp_username_callback =
        VAR_4->srp_ctx.TLS_ext_srp_username_callback;

    VAR_3->srp_ctx.SRP_verify_param_callback =
        VAR_4->srp_ctx.SRP_verify_param_callback;

    VAR_3->srp_ctx.SRP_give_srp_client_pwd_callback =
        VAR_4->srp_ctx.SRP_give_srp_client_pwd_callback;

    VAR_3->srp_ctx.strength = VAR_4->srp_ctx.strength;

    if (((VAR_4->srp_ctx.N != ((void*)0)) &&
         ((VAR_3->srp_ctx.N = FUNC_0(VAR_4->srp_ctx.N)) == ((void*)0))) ||
        ((VAR_4->srp_ctx.g != ((void*)0)) &&
         ((VAR_3->srp_ctx.g = FUNC_0(VAR_4->srp_ctx.g)) == ((void*)0))) ||
        ((VAR_4->srp_ctx.s != ((void*)0)) &&
         ((VAR_3->srp_ctx.s = FUNC_0(VAR_4->srp_ctx.s)) == ((void*)0))) ||
        ((VAR_4->srp_ctx.B != ((void*)0)) &&
         ((VAR_3->srp_ctx.B = FUNC_0(VAR_4->srp_ctx.B)) == ((void*)0))) ||
        ((VAR_4->srp_ctx.A != ((void*)0)) &&
         ((VAR_3->srp_ctx.A = FUNC_0(VAR_4->srp_ctx.A)) == ((void*)0))) ||
        ((VAR_4->srp_ctx.a != ((void*)0)) &&
         ((VAR_3->srp_ctx.a = FUNC_0(VAR_4->srp_ctx.a)) == ((void*)0))) ||
        ((VAR_4->srp_ctx.v != ((void*)0)) &&
         ((VAR_3->srp_ctx.v = FUNC_0(VAR_4->srp_ctx.v)) == ((void*)0))) ||
        ((VAR_4->srp_ctx.b != ((void*)0)) &&
         ((VAR_3->srp_ctx.b = FUNC_0(VAR_4->srp_ctx.b)) == ((void*)0)))) {
        FUNC_5(VAR_2, VAR_0);
        goto err;
    }
    if ((VAR_4->srp_ctx.login != ((void*)0)) &&
        ((VAR_3->srp_ctx.login = FUNC_4(VAR_4->srp_ctx.login)) == ((void*)0))) {
        FUNC_5(VAR_2, VAR_1);
        goto err;
    }
    if ((VAR_4->srp_ctx.info != ((void*)0)) &&
        ((VAR_3->srp_ctx.info = FUNC_2(VAR_4->srp_ctx.info)) == ((void*)0))) {
        FUNC_5(VAR_2, VAR_1);
        goto err;
    }
    VAR_3->srp_ctx.srp_Mask = VAR_4->srp_ctx.srp_Mask;

    return 1;
 err:
    FUNC_3(VAR_3->srp_ctx.login);
    FUNC_3(VAR_3->srp_ctx.info);
    FUNC_1(VAR_3->srp_ctx.N);
    FUNC_1(VAR_3->srp_ctx.g);
    FUNC_1(VAR_3->srp_ctx.s);
    FUNC_1(VAR_3->srp_ctx.B);
    FUNC_1(VAR_3->srp_ctx.A);
    FUNC_1(VAR_3->srp_ctx.a);
    FUNC_1(VAR_3->srp_ctx.b);
    FUNC_1(VAR_3->srp_ctx.v);
    FUNC_6(&VAR_3->srp_ctx, 0, sizeof(VAR_3->srp_ctx));
    return 0;
}
