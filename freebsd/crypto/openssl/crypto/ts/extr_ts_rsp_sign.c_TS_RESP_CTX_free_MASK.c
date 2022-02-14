
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int micros; int millis; int seconds; int mds; int default_policy; int policies; int certs; int signer_key; int signer_cert; } ;
typedef TYPE_1__ TS_RESP_CTX ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int (*) (int )) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int (*) (int )) ;

void FUNC_8(TS_RESP_CTX *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_4(VAR_0->signer_cert);
    FUNC_2(VAR_0->signer_key);
    FUNC_7(VAR_0->certs, FUNC_4);
    FUNC_5(VAR_0->policies, FUNC_1);
    FUNC_1(VAR_0->default_policy);
    FUNC_6(VAR_0->mds);
    FUNC_0(VAR_0->seconds);
    FUNC_0(VAR_0->millis);
    FUNC_0(VAR_0->micros);
    FUNC_3(VAR_0);
}
