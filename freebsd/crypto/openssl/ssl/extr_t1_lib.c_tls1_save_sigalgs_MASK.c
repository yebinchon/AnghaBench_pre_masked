
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* s3; int * cert; } ;
struct TYPE_6__ {int peer_sigalgslen; int peer_sigalgs; int peer_cert_sigalgslen; int peer_cert_sigalgs; } ;
struct TYPE_7__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *,int *,int *) ;

int FUNC_2(SSL *VAR_0, PACKET *VAR_1, int VAR_2)
{

    if (!FUNC_0(VAR_0))
        return 1;

    if (VAR_0->cert == ((void*)0))
        return 0;

    if (VAR_2)
        return FUNC_1(VAR_1, &VAR_0->s3->tmp.peer_cert_sigalgs,
                             &VAR_0->s3->tmp.peer_cert_sigalgslen);
    else
        return FUNC_1(VAR_1, &VAR_0->s3->tmp.peer_sigalgs,
                             &VAR_0->s3->tmp.peer_sigalgslen);

}
