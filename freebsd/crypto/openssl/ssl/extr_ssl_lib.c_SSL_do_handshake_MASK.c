
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ssl_async_args {TYPE_2__* s; } ;
struct TYPE_11__ {int (* handshake_func ) (TYPE_2__*) ;int mode; TYPE_1__* method; } ;
struct TYPE_10__ {int (* ssl_renegotiate_check ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ SSL ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*,struct ssl_async_args*,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_2__*) ;

int FUNC_8(SSL *VAR_4)
{
    int VAR_5 = 1;

    if (VAR_4->handshake_func == ((void*)0)) {
        FUNC_3(VAR_0, VAR_2);
        return -1;
    }

    FUNC_4(VAR_4, -1);

    VAR_4->method->ssl_renegotiate_check(VAR_4, 0);

    if (FUNC_2(VAR_4) || FUNC_1(VAR_4)) {
        if ((VAR_4->mode & VAR_1) && FUNC_0() == ((void*)0)) {
            struct ssl_async_args VAR_6;

            VAR_6.s = VAR_4;

            VAR_5 = FUNC_5(VAR_4, &VAR_6, VAR_3);
        } else {
            VAR_5 = VAR_4->handshake_func(VAR_4);
        }
    }
    return VAR_5;
}
