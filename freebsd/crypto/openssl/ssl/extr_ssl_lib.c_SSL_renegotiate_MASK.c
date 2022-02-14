
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int options; int renegotiate; int new_session; TYPE_1__* method; } ;
struct TYPE_6__ {int (* ssl_renegotiate ) (TYPE_2__*) ;} ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(SSL *VAR_4)
{
    if (FUNC_0(VAR_4)) {
        FUNC_1(VAR_0, VAR_3);
        return 0;
    }

    if ((VAR_4->options & VAR_1)) {
        FUNC_1(VAR_0, VAR_2);
        return 0;
    }

    VAR_4->renegotiate = 1;
    VAR_4->new_session = 1;

    return VAR_4->method->ssl_renegotiate(VAR_4);
}
