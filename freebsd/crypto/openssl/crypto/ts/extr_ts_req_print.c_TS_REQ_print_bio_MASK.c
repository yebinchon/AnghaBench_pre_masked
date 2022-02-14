
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int extensions; scalar_t__ cert_req; int * nonce; int msg_imprint; } ;
typedef TYPE_1__ TS_REQ ;
typedef int BIO ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int ) ;

int FUNC_8(BIO *VAR_0, TS_REQ *VAR_1)
{
    int VAR_2;
    ASN1_OBJECT *VAR_3;

    if (VAR_1 == ((void*)0))
        return 0;

    VAR_2 = FUNC_6(VAR_1);
    FUNC_0(VAR_0, "Version: %d\n", VAR_2);

    FUNC_3(VAR_0, VAR_1->msg_imprint);

    FUNC_0(VAR_0, "Policy OID: ");
    VAR_3 = FUNC_5(VAR_1);
    if (VAR_3 == ((void*)0))
        FUNC_0(VAR_0, "unspecified\n");
    else
        FUNC_4(VAR_0, VAR_3);

    FUNC_0(VAR_0, "Nonce: ");
    if (VAR_1->nonce == ((void*)0))
        FUNC_0(VAR_0, "unspecified");
    else
        FUNC_2(VAR_0, VAR_1->nonce);
    FUNC_1(VAR_0, "\n", 1);

    FUNC_0(VAR_0, "Certificate required: %s\n",
               VAR_1->cert_req ? "yes" : "no");

    FUNC_7(VAR_0, VAR_1->extensions);

    return 1;
}
