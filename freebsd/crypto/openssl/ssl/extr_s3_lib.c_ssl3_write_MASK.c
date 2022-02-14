
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* method; TYPE_1__* s3; } ;
struct TYPE_8__ {int (* ssl_write_bytes ) (TYPE_3__*,int ,void const*,size_t,size_t*) ;} ;
struct TYPE_7__ {scalar_t__ renegotiate; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*,int ,void const*,size_t,size_t*) ;

int FUNC_3(SSL *VAR_1, const void *VAR_2, size_t VAR_3, size_t *VAR_4)
{
    FUNC_0();
    if (VAR_1->s3->renegotiate)
        FUNC_1(VAR_1, 0);

    return VAR_1->method->ssl_write_bytes(VAR_1, VAR_0, VAR_2, VAR_3,
                                      VAR_4);
}
