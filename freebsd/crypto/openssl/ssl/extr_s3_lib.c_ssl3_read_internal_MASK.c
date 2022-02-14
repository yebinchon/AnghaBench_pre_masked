
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* s3; TYPE_1__* method; } ;
struct TYPE_10__ {int in_read_app_data; scalar_t__ renegotiate; } ;
struct TYPE_9__ {int (* ssl_read_bytes ) (TYPE_3__*,int ,int *,void*,size_t,int,size_t*) ;} ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int *,void*,size_t,int,size_t*) ;
 int FUNC_4 (TYPE_3__*,int ,int *,void*,size_t,int,size_t*) ;

__attribute__((used)) static int FUNC_5(SSL *VAR_1, void *VAR_2, size_t VAR_3, int VAR_4,
                              size_t *VAR_5)
{
    int VAR_6;

    FUNC_0();
    if (VAR_1->s3->renegotiate)
        FUNC_2(VAR_1, 0);
    VAR_1->s3->in_read_app_data = 1;
    VAR_6 =
        VAR_1->method->ssl_read_bytes(VAR_1, VAR_0, ((void*)0), VAR_2, VAR_3,
                                  VAR_4, VAR_5);
    if ((VAR_6 == -1) && (VAR_1->s3->in_read_app_data == 2)) {







        FUNC_1(VAR_1, 1);
        VAR_6 =
            VAR_1->method->ssl_read_bytes(VAR_1, VAR_0, ((void*)0), VAR_2,
                                      VAR_3, VAR_4, VAR_5);
        FUNC_1(VAR_1, 0);
    } else
        VAR_1->s3->in_read_app_data = 0;

    return VAR_6;
}
