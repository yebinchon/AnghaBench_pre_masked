
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int hash ;
struct TYPE_17__ {int * algorithm; } ;
typedef TYPE_2__ X509_ALGOR ;
typedef int X509 ;
struct TYPE_19__ {TYPE_12__* issuer_serial; int hash; TYPE_2__* hash_alg; } ;
struct TYPE_16__ {int * dirn; } ;
struct TYPE_18__ {TYPE_1__ d; int type; } ;
struct TYPE_15__ {int * serial; int issuer; } ;
typedef TYPE_3__ GENERAL_NAME ;
typedef int EVP_MD ;
typedef TYPE_4__ ESS_CERT_ID_V2 ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned char*,unsigned int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_4__* FUNC_4 () ;
 TYPE_12__* FUNC_5 () ;
 int VAR_1 ;
 int const* FUNC_6 () ;
 int FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_2__* FUNC_11 () ;
 int FUNC_12 (TYPE_2__*,int const*) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (int *,int const*,unsigned char*,unsigned int*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (unsigned char*,int ,int) ;
 int FUNC_18 (int ,TYPE_3__*) ;

__attribute__((used)) static ESS_CERT_ID_V2 *FUNC_19(const EVP_MD *VAR_4,
                                               X509 *VAR_5, int VAR_6)
{
    ESS_CERT_ID_V2 *VAR_7 = ((void*)0);
    GENERAL_NAME *VAR_8 = ((void*)0);
    unsigned char VAR_9[VAR_1];
    unsigned int VAR_10 = sizeof(VAR_9);
    X509_ALGOR *VAR_11 = ((void*)0);

    FUNC_17(VAR_9, 0, sizeof(VAR_9));

    if ((VAR_7 = FUNC_4()) == ((void*)0))
        goto err;

    if (VAR_4 != FUNC_6()) {
        VAR_11 = FUNC_11();
        if (VAR_11 == ((void*)0))
            goto err;
        FUNC_12(VAR_11, VAR_4);
        if (VAR_11->algorithm == ((void*)0))
            goto err;
        VAR_7->hash_alg = VAR_11;
        VAR_11 = ((void*)0);
    } else {
        VAR_7->hash_alg = ((void*)0);
    }

    if (!FUNC_14(VAR_5, VAR_4, VAR_9, &VAR_10))
        goto err;

    if (!FUNC_2(VAR_7->hash, VAR_9, VAR_10))
        goto err;

    if (VAR_6) {
        if ((VAR_7->issuer_serial = FUNC_5()) == ((void*)0))
            goto err;
        if ((VAR_8 = FUNC_8()) == ((void*)0))
            goto err;
        VAR_8->type = VAR_2;
        if ((VAR_8->d.dirn = FUNC_13(FUNC_15(VAR_5))) == ((void*)0))
            goto err;
        if (!FUNC_18(VAR_7->issuer_serial->issuer, VAR_8))
            goto err;
        VAR_8 = ((void*)0);
        FUNC_1(VAR_7->issuer_serial->serial);
        VAR_7->issuer_serial->serial =
                FUNC_0(FUNC_16(VAR_5));
        if (VAR_7->issuer_serial->serial == ((void*)0))
            goto err;
    }

    return VAR_7;
 err:
    FUNC_10(VAR_11);
    FUNC_7(VAR_8);
    FUNC_3(VAR_7);
    FUNC_9(VAR_3, VAR_0);
    return ((void*)0);
}
