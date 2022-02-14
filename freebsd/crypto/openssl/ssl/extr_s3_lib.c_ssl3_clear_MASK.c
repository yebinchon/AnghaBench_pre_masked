
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pkey; int * peer_cert_sigalgs; int * peer_sigalgs; int pmslen; int pms; int * ciphers_raw; int peer_ca_names; int * ctype; } ;
struct TYPE_12__ {int * alpn_proposed; int * alpn_selected; int peer_tmp; TYPE_1__ tmp; } ;
struct TYPE_10__ {scalar_t__ npn_len; int * npn; } ;
struct TYPE_11__ {TYPE_2__ ext; int version; TYPE_8__* s3; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;

int FUNC_8(SSL *VAR_2)
{
    FUNC_5(VAR_2);
    FUNC_2(VAR_2->s3->tmp.ctype);
    FUNC_4(VAR_2->s3->tmp.peer_ca_names, VAR_1);
    FUNC_2(VAR_2->s3->tmp.ciphers_raw);
    FUNC_1(VAR_2->s3->tmp.pms, VAR_2->s3->tmp.pmslen);
    FUNC_2(VAR_2->s3->tmp.peer_sigalgs);
    FUNC_2(VAR_2->s3->tmp.peer_cert_sigalgs);


    FUNC_0(VAR_2->s3->tmp.pkey);
    FUNC_0(VAR_2->s3->peer_tmp);


    FUNC_6(VAR_2);

    FUNC_2(VAR_2->s3->alpn_selected);
    FUNC_2(VAR_2->s3->alpn_proposed);


    FUNC_3(VAR_2->s3, 0, sizeof(*VAR_2->s3));

    if (!FUNC_7(VAR_2))
        return 0;

    VAR_2->version = VAR_0;


    FUNC_2(VAR_2->ext.npn);
    VAR_2->ext.npn = ((void*)0);
    VAR_2->ext.npn_len = 0;


    return 1;
}
