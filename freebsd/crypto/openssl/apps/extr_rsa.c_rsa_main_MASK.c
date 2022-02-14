
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;
typedef int OPTION_CHOICE ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int const*) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 () ;
 unsigned long FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (unsigned long) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 () ;
 int FUNC_13 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_14 (char*) ;





 int VAR_8 ;
 int FUNC_15 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int const**,int *,int *) ;
 int FUNC_21 (int *,int *,int ) ;
 int FUNC_22 (char*,char*,char**,char**) ;
 int FUNC_23 (int) ;
 int * VAR_10 ;
 int * FUNC_24 (char*,int,int) ;
 int FUNC_25 (int *,int *,int,int ,char*) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (int *,int *) ;
 int FUNC_29 (int *,int *) ;
 int FUNC_30 (int *,int *) ;
 int * FUNC_31 (char*,int,int,char*,int *,char*) ;
 int * FUNC_32 (char*,int,int,char*,int *,char*) ;
 char* FUNC_33 () ;
 int FUNC_34 (int ,int const**) ;
 int FUNC_35 (char*,int ,int*) ;
 int FUNC_36 (int ) ;
 char* FUNC_37 (int,char**,int ) ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 (char*) ;
 int FUNC_42 (int *) ;
 int VAR_11 ;
 int * FUNC_43 (char*,int ) ;

int FUNC_44(int VAR_12, char **VAR_13)
{
    ENGINE *VAR_14 = ((void*)0);
    BIO *VAR_15 = ((void*)0);
    RSA *VAR_16 = ((void*)0);
    const EVP_CIPHER *VAR_17 = ((void*)0);
    char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20;
    char *VAR_21 = ((void*)0), *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0);
    int VAR_25, VAR_26 = 0;
    int VAR_27 = VAR_5, VAR_28 = VAR_5, VAR_29 = 0, VAR_30 = 0;
    int VAR_31 = 0, VAR_32 = 0, VAR_33 = 0, VAR_34 = 0, VAR_35 = 1;

    int VAR_36 = 2;

    OPTION_CHOICE VAR_37;

    VAR_20 = FUNC_37(VAR_12, VAR_13, VAR_11);
    while ((VAR_37 = FUNC_38()) != 146) {
        switch (VAR_37) {
        case 146:
        case 145:
 opthelp:
            FUNC_1(VAR_10, "%s: Use -help for summary.\n", VAR_20);
            goto end;
        case 144:
            FUNC_36(VAR_11);
            VAR_35 = 0;
            goto end;
        case 142:
            if (!FUNC_35(FUNC_33(), VAR_8, &VAR_27))
                goto opthelp;
            break;
        case 143:
            VAR_18 = FUNC_33();
            break;
        case 138:
            if (!FUNC_35(FUNC_33(), VAR_8, &VAR_28))
                goto opthelp;
            break;
        case 139:
            VAR_19 = FUNC_33();
            break;
        case 137:
            VAR_23 = FUNC_33();
            break;
        case 136:
            VAR_24 = FUNC_33();
            break;
        case 147:
            VAR_14 = FUNC_43(FUNC_33(), 0);
            break;
        case 135:
            VAR_33 = 1;
            break;
        case 134:
            VAR_34 = 1;
            break;
        case 130:
            VAR_33 = 2;
            break;
        case 129:
            VAR_34 = 2;
            break;
        case 132:
        case 131:
        case 133:

            VAR_36 = (VAR_37 - 133);

            break;
        case 140:
            VAR_31 = 1;
            break;
        case 128:
            VAR_29 = 1;
            break;
        case 141:
            VAR_32 = 1;
            break;
        case 149:
            VAR_30 = 1;
            break;
        case 148:
            if (!FUNC_34(FUNC_40(), &VAR_17))
                goto opthelp;
            break;
        }
    }
    VAR_12 = FUNC_39();
    if (VAR_12 != 0)
        goto opthelp;

    VAR_26 = (VAR_29 && !VAR_33) || (!VAR_34 && !VAR_31) ? 1 : 0;

    if (!FUNC_22(VAR_23, VAR_24, &VAR_21, &VAR_22)) {
        FUNC_1(VAR_10, "Error getting passwords\n");
        goto end;
    }
    if (VAR_30 && VAR_33) {
        FUNC_1(VAR_10, "Only private keys can be checked\n");
        goto end;
    }

    {
        EVP_PKEY *VAR_38;

        if (VAR_33) {
            int VAR_39 = -1;
            if (VAR_33 == 2) {
                if (VAR_27 == VAR_5)
                    VAR_39 = VAR_6;
                else if (VAR_27 == VAR_2)
                    VAR_39 = VAR_3;
            } else {
                VAR_39 = VAR_27;
            }

            VAR_38 = FUNC_32(VAR_18, VAR_39, 1, VAR_21, VAR_14, "Public Key");
        } else {
            VAR_38 = FUNC_31(VAR_18, VAR_27, 1, VAR_21, VAR_14, "Private Key");
        }

        if (VAR_38 != ((void*)0))
            VAR_16 = FUNC_11(VAR_38);
        FUNC_10(VAR_38);
    }

    if (VAR_16 == ((void*)0)) {
        FUNC_8(VAR_10);
        goto end;
    }

    VAR_15 = FUNC_24(VAR_19, VAR_28, VAR_26);
    if (VAR_15 == ((void*)0))
        goto end;

    if (VAR_29) {
        FUNC_23(VAR_33 || VAR_26);
        if (!FUNC_21(VAR_15, VAR_16, 0)) {
            FUNC_41(VAR_19);
            FUNC_8(VAR_10);
            goto end;
        }
    }

    if (VAR_32) {
        const BIGNUM *VAR_40;
        FUNC_20(VAR_16, &VAR_40, ((void*)0), ((void*)0));
        FUNC_1(VAR_15, "Modulus=");
        FUNC_2(VAR_15, VAR_40);
        FUNC_1(VAR_15, "\n");
    }

    if (VAR_30) {
        int VAR_41 = FUNC_18(VAR_16, ((void*)0));

        if (VAR_41 == 1) {
            FUNC_1(VAR_15, "RSA key ok\n");
        } else if (VAR_41 == 0) {
            unsigned long VAR_42;

            while ((VAR_42 = FUNC_7()) != 0 &&
                   FUNC_4(VAR_42) == VAR_0 &&
                   FUNC_3(VAR_42) == VAR_9 &&
                   FUNC_5(VAR_42) != VAR_1) {
                FUNC_1(VAR_15, "RSA key error: %s\n",
                           FUNC_9(VAR_42));
                FUNC_6();
            }
        } else if (VAR_41 == -1) {
            FUNC_8(VAR_10);
            goto end;
        }
    }

    if (VAR_31) {
        VAR_35 = 0;
        goto end;
    }
    FUNC_1(VAR_10, "writing RSA key\n");
    if (VAR_28 == VAR_2) {
        if (VAR_34 || VAR_33) {
            if (VAR_34 == 2)
                VAR_25 = FUNC_29(VAR_15, VAR_16);
            else
                VAR_25 = FUNC_30(VAR_15, VAR_16);
        } else {
            FUNC_23(VAR_26);
            VAR_25 = FUNC_28(VAR_15, VAR_16);
        }
    } else if (VAR_28 == VAR_5) {
        if (VAR_34 || VAR_33) {
            if (VAR_34 == 2)
                VAR_25 = FUNC_16(VAR_15, VAR_16);
            else
                VAR_25 = FUNC_17(VAR_15, VAR_16);
        } else {
            FUNC_23(VAR_26);
            VAR_25 = FUNC_15(VAR_15, VAR_16,
                                            VAR_17, ((void*)0), 0, ((void*)0), VAR_22);
        }

    } else if (VAR_28 == VAR_4 || VAR_28 == VAR_7) {
        EVP_PKEY *VAR_43;
        VAR_43 = FUNC_12();
        if (VAR_43 == ((void*)0))
            goto end;

        FUNC_13(VAR_43, VAR_16);
        if (VAR_28 == VAR_7) {
            if (VAR_33) {
                FUNC_1(VAR_10, "PVK form impossible with public key input\n");
                FUNC_10(VAR_43);
                goto end;
            }
            FUNC_23(VAR_26);





            VAR_25 = FUNC_25(VAR_15, VAR_43, VAR_36, 0, VAR_22);

        } else if (VAR_33 || VAR_34) {
            VAR_25 = FUNC_27(VAR_15, VAR_43);
        } else {
            FUNC_23(VAR_26);
            VAR_25 = FUNC_26(VAR_15, VAR_43);
        }
        FUNC_10(VAR_43);

    } else {
        FUNC_1(VAR_10, "bad output format specified for outfile\n");
        goto end;
    }
    if (VAR_25 <= 0) {
        FUNC_1(VAR_10, "unable to write key\n");
        FUNC_8(VAR_10);
    } else {
        VAR_35 = 0;
    }
 end:
    FUNC_42(VAR_14);
    FUNC_0(VAR_15);
    FUNC_19(VAR_16);
    FUNC_14(VAR_21);
    FUNC_14(VAR_22);
    return VAR_35;
}
