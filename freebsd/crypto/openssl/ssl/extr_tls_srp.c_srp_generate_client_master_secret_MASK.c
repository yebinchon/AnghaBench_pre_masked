
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* (* SRP_give_srp_client_pwd_callback ) (TYPE_2__*,int ) ;int a; int g; int B; int N; int login; int s; int SRP_cb_arg; int A; } ;
struct TYPE_8__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;
typedef int BIGNUM ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ) ;
 unsigned char* FUNC_4 (int) ;
 int * FUNC_5 (int ,int ,int ,int *,int ,int *) ;
 int * FUNC_6 (int ,int ,int ) ;
 int * FUNC_7 (int ,int ,char*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,unsigned char*,int,int) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (TYPE_2__*,int ) ;

int FUNC_13(SSL *VAR_5)
{
    BIGNUM *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    int VAR_9 = -1, VAR_10 = 0;
    char *VAR_11 = ((void*)0);
    unsigned char *VAR_12 = ((void*)0);




    if (FUNC_8(VAR_5->srp_ctx.B, VAR_5->srp_ctx.N) == 0
            || (VAR_7 = FUNC_6(VAR_5->srp_ctx.A, VAR_5->srp_ctx.B, VAR_5->srp_ctx.N))
               == ((void*)0)
            || VAR_5->srp_ctx.SRP_give_srp_client_pwd_callback == ((void*)0)) {
        FUNC_9(VAR_5, VAR_2,
                 VAR_3, VAR_0);
        goto err;
    }
    if ((VAR_11 = VAR_5->srp_ctx.SRP_give_srp_client_pwd_callback(VAR_5,
                                                      VAR_5->srp_ctx.SRP_cb_arg))
            == ((void*)0)) {
        FUNC_9(VAR_5, VAR_2,
                 VAR_3,
                 VAR_4);
        goto err;
    }
    if ((VAR_6 = FUNC_7(VAR_5->srp_ctx.s, VAR_5->srp_ctx.login, VAR_11)) == ((void*)0)
            || (VAR_8 = FUNC_5(VAR_5->srp_ctx.N, VAR_5->srp_ctx.B,
                                        VAR_5->srp_ctx.g, VAR_6,
                                        VAR_5->srp_ctx.a, VAR_7)) == ((void*)0)) {
        FUNC_9(VAR_5, VAR_2,
                 VAR_3, VAR_0);
        goto err;
    }

    VAR_10 = FUNC_2(VAR_8);
    if ((VAR_12 = FUNC_4(VAR_10)) == ((void*)0)) {
        FUNC_9(VAR_5, VAR_2,
                 VAR_3, VAR_1);
        goto err;
    }
    FUNC_0(VAR_8, VAR_12);

    VAR_9 = FUNC_10(VAR_5, VAR_12, VAR_10, 1);
 err:
    FUNC_1(VAR_8);
    FUNC_1(VAR_6);
    if (VAR_11 != ((void*)0))
        FUNC_3(VAR_11, FUNC_11(VAR_11));
    FUNC_1(VAR_7);
    return VAR_9;
}
