
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int lock; int references; } ;
struct TYPE_12__ {scalar_t__ sid_ctx_length; int sid_ctx; TYPE_5__* cert; TYPE_1__* method; } ;
struct TYPE_11__ {scalar_t__ (* ssl_new ) (TYPE_2__*) ;int (* ssl_free ) (TYPE_2__*) ;} ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

int FUNC_7(SSL *VAR_0, const SSL *VAR_1)
{
    int VAR_2;

    if (!FUNC_2(VAR_0, FUNC_1(VAR_1))) {
        return 0;
    }




    if (VAR_0->method != VAR_1->method) {
        VAR_0->method->ssl_free(VAR_0);
        VAR_0->method = VAR_1->method;
        if (VAR_0->method->ssl_new(VAR_0) == 0)
            return 0;
    }

    FUNC_0(&VAR_1->cert->references, &VAR_2, VAR_1->cert->lock);
    FUNC_4(VAR_0->cert);
    VAR_0->cert = VAR_1->cert;
    if (!FUNC_3(VAR_0, VAR_1->sid_ctx, (int)VAR_1->sid_ctx_length)) {
        return 0;
    }

    return 1;
}
