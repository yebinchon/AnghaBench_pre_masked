
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* method; } ;
struct TYPE_6__ {int (* ssl_clear ) (TYPE_2__*) ;} ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(SSL *VAR_0)
{
    if (!FUNC_0(VAR_0))
        return 0;
    if (!VAR_0->method->ssl_clear(VAR_0))
        return 0;

    return 1;
}
