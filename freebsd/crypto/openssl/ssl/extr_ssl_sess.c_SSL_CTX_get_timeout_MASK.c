
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long session_timeout; } ;
typedef TYPE_1__ SSL_CTX ;



long FUNC_0(const SSL_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return 0;
    return VAR_0->session_timeout;
}
