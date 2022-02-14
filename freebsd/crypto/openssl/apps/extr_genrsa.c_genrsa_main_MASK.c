
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pem_password_cb ;
struct TYPE_3__ {char* password; char* prompt_info; } ;
typedef int RSA ;
typedef TYPE_1__ PW_CB_DATA ;
typedef int OPTION_CHOICE ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int BN_GENCB ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int ,int ) ;
 char* FUNC_5 (int const*) ;
 char* FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int *,int const*,int *,int ,int *,TYPE_1__*) ;
 unsigned long VAR_4 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int,int,int *,int *) ;
 int FUNC_15 (int *,int *,int const**,int *) ;
 int * FUNC_16 () ;
 int * FUNC_17 (int *) ;
 int FUNC_18 (int *,char*,int *,char**) ;
 int FUNC_19 (int) ;
 int VAR_5 ;
 int * FUNC_20 (char*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_21 () ;
 int FUNC_22 (int ,int const**) ;
 int FUNC_23 (int ) ;
 char* FUNC_24 (int,char**,int ) ;
 int FUNC_25 (char*,int*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 (int) ;
 char** FUNC_29 () ;
 int FUNC_30 () ;
 scalar_t__ VAR_8 ;
 int FUNC_31 (int *) ;
 int * FUNC_32 (char*,int ) ;

int FUNC_33(int VAR_9, char **VAR_10)
{
    BN_GENCB *VAR_11 = FUNC_3();
    PW_CB_DATA VAR_12;
    ENGINE *VAR_13 = ((void*)0);
    BIGNUM *VAR_14 = FUNC_8();
    BIO *VAR_15 = ((void*)0);
    const BIGNUM *VAR_16;
    RSA *VAR_17 = ((void*)0);
    const EVP_CIPHER *VAR_18 = ((void*)0);
    int VAR_19 = 1, VAR_20 = VAR_0, VAR_21 = 0, VAR_22 = VAR_1;
    unsigned long VAR_23 = VAR_4;
    char *VAR_24 = ((void*)0), *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
    char *VAR_27, *VAR_28, *VAR_29;
    OPTION_CHOICE VAR_30;

    if (VAR_14 == ((void*)0) || VAR_11 == ((void*)0))
        goto end;

    FUNC_4(VAR_11, VAR_6, VAR_5);

    VAR_27 = FUNC_24(VAR_9, VAR_10, VAR_7);
    while ((VAR_30 = FUNC_26()) != 135) {
        switch (VAR_30) {
        case 135:
        case 134:
opthelp:
            FUNC_1(VAR_5, "%s: Use -help for summary.\n", VAR_27);
            goto end;
        case 132:
            VAR_19 = 0;
            FUNC_23(VAR_7);
            goto end;
        case 138:
            VAR_23 = 3;
            break;
        case 133:
            VAR_23 = VAR_4;
            break;
        case 131:
            VAR_24 = FUNC_21();
            break;
        case 136:
            VAR_13 = FUNC_32(FUNC_21(), 0);
            break;
        case 128:
            if (!FUNC_28(VAR_30))
                goto end;
            break;
        case 130:
            VAR_25 = FUNC_21();
            break;
        case 137:
            if (!FUNC_22(FUNC_30(), &VAR_18))
                goto end;
            break;
        case 129:
            if (!FUNC_25(FUNC_21(), &VAR_22))
                goto end;
            break;
        }
    }
    VAR_9 = FUNC_27();
    VAR_10 = FUNC_29();

    if (VAR_9 == 1) {
        if (!FUNC_25(VAR_10[0], &VAR_20) || VAR_20 <= 0)
            goto end;
        if (VAR_20 > VAR_3)
            FUNC_1(VAR_5,
                       "Warning: It is not recommended to use more than %d bit for RSA keys.\n"
                       "         Your key size is %d! Larger key size may behave not as expected.\n",
                       VAR_3, VAR_20);
    } else if (VAR_9 > 0) {
        FUNC_1(VAR_5, "Extra arguments given.\n");
        goto opthelp;
    }

    VAR_21 = 1;
    if (!FUNC_18(((void*)0), VAR_25, ((void*)0), &VAR_26)) {
        FUNC_1(VAR_5, "Error getting password\n");
        goto end;
    }

    VAR_15 = FUNC_20(VAR_24, VAR_2, VAR_21);
    if (VAR_15 == ((void*)0))
        goto end;

    FUNC_1(VAR_5, "Generating RSA private key, %d bit long modulus (%d primes)\n",
               VAR_20, VAR_22);
    VAR_17 = VAR_13 ? FUNC_17(VAR_13) : FUNC_16();
    if (VAR_17 == ((void*)0))
        goto end;

    if (!FUNC_9(VAR_14, VAR_23)
        || !FUNC_14(VAR_17, VAR_20, VAR_22, VAR_14, VAR_11))
        goto end;

    FUNC_15(VAR_17, ((void*)0), &VAR_16, ((void*)0));
    VAR_28 = FUNC_6(VAR_16);
    VAR_29 = FUNC_5(VAR_16);
    if (VAR_28 && VAR_29) {
        FUNC_1(VAR_5, "e is %s (0x%s)\n", VAR_29, VAR_28);
    }
    FUNC_11(VAR_28);
    FUNC_11(VAR_29);
    VAR_12.password = VAR_26;
    VAR_12.prompt_info = VAR_24;
    FUNC_19(VAR_21);
    if (!FUNC_12(VAR_15, VAR_17, VAR_18, ((void*)0), 0,
                                     (pem_password_cb *)VAR_8,
                                     &VAR_12))
        goto end;

    VAR_19 = 0;
 end:
    FUNC_7(VAR_14);
    FUNC_2(VAR_11);
    FUNC_13(VAR_17);
    FUNC_0(VAR_15);
    FUNC_31(VAR_13);
    FUNC_11(VAR_26);
    if (VAR_19 != 0)
        FUNC_10(VAR_5);
    return VAR_19;
}
