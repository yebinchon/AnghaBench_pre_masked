
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* method; int * s3; } ;
struct TYPE_6__ {int (* ssl_clear ) (TYPE_2__*) ;} ;
typedef int SSL3_STATE ;
typedef TYPE_2__ SSL ;


 int * FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(SSL *VAR_0)
{
    SSL3_STATE *VAR_1;

    if ((VAR_1 = FUNC_0(sizeof(*VAR_1))) == ((void*)0))
        goto err;
    VAR_0->s3 = VAR_1;


    if (!FUNC_1(VAR_0))
        goto err;


    if (!VAR_0->method->ssl_clear(VAR_0))
        return 0;

    return 1;
 err:
    return 0;
}
