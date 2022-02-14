
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int (* func_read ) (TYPE_3__*,void*,size_t,size_t*) ;} ;
struct ssl_async_args {size_t num; TYPE_1__ f; int type; void* buf; TYPE_3__* s; } ;
struct TYPE_10__ {int shutdown; scalar_t__ early_data_state; int mode; size_t asyncrw; TYPE_2__* method; int rwstate; int * handshake_func; } ;
struct TYPE_9__ {int (* ssl_read ) (TYPE_3__*,void*,size_t,size_t*) ;} ;
typedef TYPE_3__ SSL ;


 int * FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_9 ;
 int FUNC_3 (TYPE_3__*,struct ssl_async_args*,int ) ;
 int FUNC_4 (TYPE_3__*,void*,size_t,size_t*) ;

int FUNC_5(SSL *VAR_10, void *VAR_11, size_t VAR_12, size_t *VAR_13)
{
    if (VAR_10->handshake_func == ((void*)0)) {
        FUNC_1(VAR_4, VAR_8);
        return -1;
    }

    if (VAR_10->shutdown & VAR_7) {
        VAR_10->rwstate = VAR_6;
        return 0;
    }

    if (VAR_10->early_data_state == VAR_3
                || VAR_10->early_data_state == VAR_2) {
        FUNC_1(VAR_4, VAR_0);
        return 0;
    }




    FUNC_2(VAR_10, 0);

    if ((VAR_10->mode & VAR_5) && FUNC_0() == ((void*)0)) {
        struct ssl_async_args VAR_14;
        int VAR_15;

        VAR_14.s = VAR_10;
        VAR_14.buf = VAR_11;
        VAR_14.num = VAR_12;
        VAR_14.type = VAR_1;
        VAR_14.f.func_read = VAR_10->method->ssl_read;

        VAR_15 = FUNC_3(VAR_10, &VAR_14, VAR_9);
        *VAR_13 = VAR_10->asyncrw;
        return VAR_15;
    } else {
        return VAR_10->method->ssl_read(VAR_10, VAR_11, VAR_12, VAR_13);
    }
}
