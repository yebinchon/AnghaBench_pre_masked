
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_STORE ;
struct TYPE_9__ {int * chain_store; int * verify_store; } ;
struct TYPE_8__ {TYPE_2__* ssl; TYPE_1__* ctx; } ;
struct TYPE_7__ {TYPE_4__* cert; } ;
struct TYPE_6__ {TYPE_4__* cert; } ;
typedef TYPE_3__ SSL_CONF_CTX ;
typedef TYPE_4__ CERT ;


 scalar_t__ FUNC_0 (int *,char const*,char const*) ;
 int * FUNC_1 () ;

__attribute__((used)) static int FUNC_2(SSL_CONF_CTX *VAR_0,
                    const char *VAR_1, const char *VAR_2, int VAR_3)
{
    CERT *VAR_4;
    X509_STORE **VAR_5;
    if (VAR_0->ctx)
        VAR_4 = VAR_0->ctx->cert;
    else if (VAR_0->ssl)
        VAR_4 = VAR_0->ssl->cert;
    else
        return 1;
    VAR_5 = VAR_3 ? &VAR_4->verify_store : &VAR_4->chain_store;
    if (*VAR_5 == ((void*)0)) {
        *VAR_5 = FUNC_1();
        if (*VAR_5 == ((void*)0))
            return 0;
    }
    return FUNC_0(*VAR_5, VAR_1, VAR_2) > 0;
}
