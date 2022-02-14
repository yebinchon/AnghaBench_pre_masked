
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_5__* parameter; int * algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
struct TYPE_7__ {int type; } ;
typedef int TS_REQ ;
typedef int TS_MSG_IMPRINT ;
typedef int EVP_MD ;
typedef int BIO ;
typedef int ASN1_OBJECT ;
typedef int ASN1_INTEGER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_5__* FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const*) ;
 int * FUNC_6 (char*) ;
 int VAR_0 ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 () ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (int *,unsigned char*,int) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 () ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int) ;
 int VAR_1 ;
 int FUNC_20 (TYPE_1__*) ;
 TYPE_1__* FUNC_21 () ;
 int VAR_2 ;
 int FUNC_22 (int *,char const*,int const*,unsigned char**) ;
 int * FUNC_23 (int ) ;
 int * FUNC_24 (char const*) ;

__attribute__((used)) static TS_REQ *FUNC_25(BIO *VAR_3, const char *VAR_4, const EVP_MD *VAR_5,
                            const char *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9 = 0;
    TS_REQ *VAR_10 = ((void*)0);
    int VAR_11;
    TS_MSG_IMPRINT *VAR_12 = ((void*)0);
    X509_ALGOR *VAR_13 = ((void*)0);
    unsigned char *VAR_14 = ((void*)0);
    ASN1_OBJECT *VAR_15 = ((void*)0);
    ASN1_INTEGER *VAR_16 = ((void*)0);

    if (VAR_5 == ((void*)0) && (VAR_5 = FUNC_6("sha1")) == ((void*)0))
        goto err;
    if ((VAR_10 = FUNC_14()) == ((void*)0))
        goto err;
    if (!FUNC_19(VAR_10, 1))
        goto err;
    if ((VAR_12 = FUNC_10()) == ((void*)0))
        goto err;
    if ((VAR_13 = FUNC_21()) == ((void*)0))
        goto err;
    if ((VAR_13->algorithm = FUNC_7(FUNC_5(VAR_5))) == ((void*)0))
        goto err;
    if ((VAR_13->parameter = FUNC_2()) == ((void*)0))
        goto err;
    VAR_13->parameter->type = VAR_1;
    if (!FUNC_11(VAR_12, VAR_13))
        goto err;
    if ((VAR_11 = FUNC_22(VAR_3, VAR_4, VAR_5, &VAR_14)) == 0)
        goto err;
    if (!FUNC_12(VAR_12, VAR_14, VAR_11))
        goto err;
    if (!FUNC_16(VAR_10, VAR_12))
        goto err;
    if (VAR_6 && (VAR_15 = FUNC_24(VAR_6)) == ((void*)0))
        goto err;
    if (VAR_15 && !FUNC_18(VAR_10, VAR_15))
        goto err;


    if (!VAR_7 && (VAR_16 = FUNC_23(VAR_0)) == ((void*)0))
        goto err;
    if (VAR_16 && !FUNC_17(VAR_10, VAR_16))
        goto err;
    if (!FUNC_15(VAR_10, VAR_8))
        goto err;

    VAR_9 = 1;
 err:
    if (!VAR_9) {
        FUNC_13(VAR_10);
        VAR_10 = ((void*)0);
        FUNC_3(VAR_2, "could not create query\n");
        FUNC_4(VAR_2);
    }
    FUNC_9(VAR_12);
    FUNC_20(VAR_13);
    FUNC_8(VAR_14);
    FUNC_1(VAR_15);
    FUNC_0(VAR_16);
    return VAR_10;
}
