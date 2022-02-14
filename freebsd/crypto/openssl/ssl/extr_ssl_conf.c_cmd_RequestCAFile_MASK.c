
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * canames; } ;
typedef TYPE_1__ SSL_CONF_CTX ;


 int FUNC_0 (int *,char const*) ;
 int * FUNC_1 () ;

__attribute__((used)) static int FUNC_2(SSL_CONF_CTX *VAR_0, const char *VAR_1)
{
    if (VAR_0->canames == ((void*)0))
        VAR_0->canames = FUNC_1();
    if (VAR_0->canames == ((void*)0))
        return 0;
    return FUNC_0(VAR_0->canames, VAR_1);
}
