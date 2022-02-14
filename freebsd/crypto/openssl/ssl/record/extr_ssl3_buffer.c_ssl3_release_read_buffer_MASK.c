
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rlayer; } ;
struct TYPE_5__ {int * buf; } ;
typedef TYPE_1__ SSL3_BUFFER ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;

int FUNC_2(SSL *VAR_0)
{
    SSL3_BUFFER *VAR_1;

    VAR_1 = FUNC_1(&VAR_0->rlayer);
    FUNC_0(VAR_1->buf);
    VAR_1->buf = ((void*)0);
    return 1;
}
