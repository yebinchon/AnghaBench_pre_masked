
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* func_other ) (TYPE_3__*) ;} ;
struct ssl_async_args {TYPE_2__ f; int type; TYPE_3__* s; } ;
struct TYPE_10__ {int mode; TYPE_1__* method; int * handshake_func; } ;
struct TYPE_8__ {int (* ssl_shutdown ) (TYPE_3__*) ;} ;
typedef TYPE_3__ SSL ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*,struct ssl_async_args*,int ) ;
 int FUNC_4 (TYPE_3__*) ;

int FUNC_5(SSL *VAR_6)
{







    if (VAR_6->handshake_func == ((void*)0)) {
        FUNC_2(VAR_1, VAR_4);
        return -1;
    }

    if (!FUNC_1(VAR_6)) {
        if ((VAR_6->mode & VAR_2) && FUNC_0() == ((void*)0)) {
            struct ssl_async_args VAR_7;

            VAR_7.s = VAR_6;
            VAR_7.type = VAR_0;
            VAR_7.f.func_other = VAR_6->method->ssl_shutdown;

            return FUNC_3(VAR_6, &VAR_7, VAR_5);
        } else {
            return VAR_6->method->ssl_shutdown(VAR_6);
        }
    } else {
        FUNC_2(VAR_1, VAR_3);
        return -1;
    }
}
