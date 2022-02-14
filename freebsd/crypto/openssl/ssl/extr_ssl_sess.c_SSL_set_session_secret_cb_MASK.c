
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tls_session_secret_cb_fn ;
struct TYPE_4__ {void* session_secret_cb_arg; int session_secret_cb; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;



int FUNC_0(SSL *VAR_0,
                              tls_session_secret_cb_fn VAR_1,
                              void *VAR_2)
{
    if (VAR_0 == ((void*)0))
        return 0;
    VAR_0->ext.session_secret_cb = VAR_1;
    VAR_0->ext.session_secret_cb_arg = VAR_2;
    return 1;
}
