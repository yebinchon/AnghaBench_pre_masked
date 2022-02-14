
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509_ALGOR ;
struct TYPE_12__ {int * hashed_msg; int * hash_algo; } ;
struct TYPE_11__ {int * nonce; TYPE_3__* msg_imprint; int * policy_id; } ;
struct TYPE_10__ {int flags; int * nonce; int imprint_len; int * imprint; int * md_alg; int * policy; } ;
typedef TYPE_1__ TS_VERIFY_CTX ;
typedef TYPE_2__ TS_REQ ;
typedef TYPE_3__ TS_MSG_IMPRINT ;
typedef int ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

TS_VERIFY_CTX *FUNC_11(TS_REQ *VAR_5, TS_VERIFY_CTX *VAR_6)
{
    TS_VERIFY_CTX *VAR_7 = VAR_6;
    ASN1_OBJECT *VAR_8;
    TS_MSG_IMPRINT *VAR_9;
    X509_ALGOR *VAR_10;
    ASN1_OCTET_STRING *VAR_11;
    const ASN1_INTEGER *VAR_12;

    FUNC_4(VAR_5 != ((void*)0));
    if (VAR_7)
        FUNC_6(VAR_7);
    else if ((VAR_7 = FUNC_8()) == ((void*)0))
        return ((void*)0);

    VAR_7->flags = VAR_0 & ~(VAR_4 | VAR_3);

    if ((VAR_8 = VAR_5->policy_id) != ((void*)0)) {
        if ((VAR_7->policy = FUNC_3(VAR_8)) == ((void*)0))
            goto err;
    } else
        VAR_7->flags &= ~VAR_2;

    VAR_9 = VAR_5->msg_imprint;
    VAR_10 = VAR_9->hash_algo;
    if ((VAR_7->md_alg = FUNC_9(VAR_10)) == ((void*)0))
        goto err;
    VAR_11 = VAR_9->hashed_msg;
    VAR_7->imprint_len = FUNC_2(VAR_11);
    if ((VAR_7->imprint = FUNC_5(VAR_7->imprint_len)) == ((void*)0))
        goto err;
    FUNC_10(VAR_7->imprint, FUNC_1(VAR_11), VAR_7->imprint_len);

    if ((VAR_12 = VAR_5->nonce) != ((void*)0)) {
        if ((VAR_7->nonce = FUNC_0(VAR_12)) == ((void*)0))
            goto err;
    } else
        VAR_7->flags &= ~VAR_1;

    return VAR_7;
 err:
    if (VAR_6)
        FUNC_6(VAR_6);
    else
        FUNC_7(VAR_7);
    return ((void*)0);
}
