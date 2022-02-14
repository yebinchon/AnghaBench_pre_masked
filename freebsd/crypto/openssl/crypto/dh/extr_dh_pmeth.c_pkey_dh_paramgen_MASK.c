
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rfc5114_param; scalar_t__ param_nid; int generator; int prime_len; scalar_t__ use_dsa; } ;
struct TYPE_6__ {scalar_t__ pkey_gencb; TYPE_2__* data; } ;
typedef TYPE_1__ EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int DSA ;
typedef TYPE_2__ DH_PKEY_CTX ;
typedef int DH ;
typedef int BN_GENCB ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int *) ;
 int * FUNC_4 () ;
 int * FUNC_5 () ;
 int * FUNC_6 () ;
 int * FUNC_7 () ;
 int * FUNC_8 (scalar_t__) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int *,int *) ;
 int * FUNC_13 (TYPE_2__*,int *) ;
 int FUNC_14 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_15(EVP_PKEY_CTX *VAR_2, EVP_PKEY *VAR_3)
{
    DH *VAR_4 = ((void*)0);
    DH_PKEY_CTX *VAR_5 = VAR_2->data;
    BN_GENCB *VAR_6;
    int VAR_7;
    if (VAR_5->rfc5114_param) {
        switch (VAR_5->rfc5114_param) {
        case 1:
            VAR_4 = FUNC_4();
            break;

        case 2:
            VAR_4 = FUNC_5();
            break;

        case 3:
            VAR_4 = FUNC_6();
            break;

        default:
            return -2;
        }
        FUNC_11(VAR_3, VAR_1, VAR_4);
        return 1;
    }

    if (VAR_5->param_nid != 0) {
        if ((VAR_4 = FUNC_8(VAR_5->param_nid)) == ((void*)0))
            return 0;
        FUNC_11(VAR_3, VAR_0, VAR_4);
        return 1;
    }

    if (VAR_2->pkey_gencb) {
        VAR_6 = FUNC_1();
        if (VAR_6 == ((void*)0))
            return 0;
        FUNC_14(VAR_6, VAR_2);
    } else
        VAR_6 = ((void*)0);

    if (VAR_5->use_dsa) {
        DSA *VAR_8;
        VAR_8 = FUNC_13(VAR_5, VAR_6);
        FUNC_0(VAR_6);
        if (VAR_8 == ((void*)0))
            return 0;
        VAR_4 = FUNC_9(VAR_8);
        FUNC_10(VAR_8);
        if (!VAR_4)
            return 0;
        FUNC_11(VAR_3, VAR_1, VAR_4);
        return 1;
    }

    VAR_4 = FUNC_7();
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_6);
        return 0;
    }
    VAR_7 = FUNC_3(VAR_4,
                                    VAR_5->prime_len, VAR_5->generator, VAR_6);
    FUNC_0(VAR_6);
    if (VAR_7)
        FUNC_12(VAR_3, VAR_4);
    else
        FUNC_2(VAR_4);
    return VAR_7;
}
