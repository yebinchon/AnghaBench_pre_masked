
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssl_async_args {TYPE_1__* s; } ;
struct TYPE_3__ {int (* handshake_func ) (TYPE_1__*) ;} ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
    struct ssl_async_args *VAR_1;
    SSL *VAR_2;

    VAR_1 = (struct ssl_async_args *)VAR_0;
    VAR_2 = VAR_1->s;

    return VAR_2->handshake_func(VAR_2);
}
