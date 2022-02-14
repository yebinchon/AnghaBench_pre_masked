
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; struct TYPE_6__* psk_identity_hint; int custext; int chain_store; int verify_store; struct TYPE_6__* ctype; struct TYPE_6__* client_sigalgs; struct TYPE_6__* conf_sigalgs; int dh_tmp; int references; } ;
typedef TYPE_1__ CERT ;


 int FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(CERT *VAR_0)
{
    int VAR_1;

    if (VAR_0 == ((void*)0))
        return;
    FUNC_0(&VAR_0->references, &VAR_1, VAR_0->lock);
    FUNC_5("CERT", VAR_0);
    if (VAR_1 > 0)
        return;
    FUNC_4(VAR_1 < 0);


    FUNC_2(VAR_0->dh_tmp);


    FUNC_8(VAR_0);
    FUNC_3(VAR_0->conf_sigalgs);
    FUNC_3(VAR_0->client_sigalgs);
    FUNC_3(VAR_0->ctype);
    FUNC_6(VAR_0->verify_store);
    FUNC_6(VAR_0->chain_store);
    FUNC_7(&VAR_0->custext);

    FUNC_3(VAR_0->psk_identity_hint);

    FUNC_1(VAR_0->lock);
    FUNC_3(VAR_0);
}
