
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;
typedef int EVP_PKEY_CTX ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_12 (int *,int *,int ,int *) ;
 int FUNC_13 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_14 (char*) ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_17 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_18 (char*,char*,char**,char**) ;
 int FUNC_19 (int) ;
 int * VAR_4 ;
 int * FUNC_20 (char*,int,int) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (int *,int *) ;
 int * FUNC_23 (char*,int,int,char*,int *,char*) ;
 int * FUNC_24 (char*,int,int,char*,int *,char*) ;
 char* FUNC_25 () ;
 int FUNC_26 (int ,int const**) ;
 int FUNC_27 (char*,int ,int*) ;
 int FUNC_28 (int ) ;
 char* FUNC_29 (int,char**,int ) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int VAR_5 ;
 int FUNC_33 (int *) ;
 int * FUNC_34 (char*,int ) ;

int FUNC_35(int VAR_6, char **VAR_7)
{
    BIO *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    ENGINE *VAR_10 = ((void*)0);
    EVP_PKEY *VAR_11 = ((void*)0);
    const EVP_CIPHER *VAR_12 = ((void*)0);
    char *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
    char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19;
    OPTION_CHOICE VAR_20;
    int VAR_21 = VAR_1, VAR_22 = VAR_1;
    int VAR_23 = 0, VAR_24 = 0, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0, VAR_28 = 1;
    int VAR_29 = 0, VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;

    VAR_19 = FUNC_29(VAR_6, VAR_7, VAR_5);
    while ((VAR_20 = FUNC_30()) != 144) {
        switch (VAR_20) {
        case 144:
        case 143:
 opthelp:
            FUNC_2(VAR_4, "%s: Use -help for summary.\n", VAR_19);
            goto end;
        case 142:
            FUNC_28(VAR_5);
            VAR_28 = 0;
            goto end;
        case 140:
            if (!FUNC_27(FUNC_25(), VAR_2, &VAR_21))
                goto opthelp;
            break;
        case 136:
            if (!FUNC_27(FUNC_25(), VAR_3, &VAR_22))
                goto opthelp;
            break;
        case 135:
            VAR_17 = FUNC_25();
            break;
        case 134:
            VAR_18 = FUNC_25();
            break;
        case 145:
            VAR_10 = FUNC_34(FUNC_25(), 0);
            break;
        case 141:
            VAR_13 = FUNC_25();
            break;
        case 137:
            VAR_14 = FUNC_25();
            break;
        case 133:
            VAR_23 = VAR_24 = VAR_25 = 1;
            break;
        case 132:
            VAR_24 = 1;
            break;
        case 129:
            VAR_25 = VAR_26 = 1;
            break;
        case 130:
            VAR_26 = 1;
            break;
        case 138:
            VAR_27 = 1;
            break;
        case 128:
            VAR_30 = 1;
            break;
        case 146:
            VAR_31 = 1;
            break;
        case 131:
            VAR_32 = 1;
            break;
        case 139:
            if (!FUNC_26(FUNC_32(), &VAR_12))
                goto opthelp;
        }
    }
    VAR_6 = FUNC_31();
    if (VAR_6 != 0)
        goto opthelp;

    VAR_29 = !VAR_27 && !VAR_24 ? 1 : 0;
    if (VAR_26 && !VAR_25)
        VAR_29 = 1;

    if (!FUNC_18(VAR_17, VAR_18, &VAR_15, &VAR_16)) {
        FUNC_2(VAR_4, "Error getting passwords\n");
        goto end;
    }

    VAR_9 = FUNC_20(VAR_14, VAR_22, VAR_29);
    if (VAR_9 == ((void*)0))
        goto end;

    if (VAR_23)
        VAR_11 = FUNC_24(VAR_13, VAR_21, 1, VAR_15, VAR_10, "Public Key");
    else
        VAR_11 = FUNC_23(VAR_13, VAR_21, 1, VAR_15, VAR_10, "key");
    if (VAR_11 == ((void*)0))
        goto end;

    if (VAR_31 || VAR_32) {
        int VAR_33;
        EVP_PKEY_CTX *VAR_34;

        VAR_34 = FUNC_8(VAR_11, VAR_10);
        if (VAR_34 == ((void*)0)) {
            FUNC_5(VAR_4);
            goto end;
        }

        if (VAR_31)
            VAR_33 = FUNC_9(VAR_34);
        else
            VAR_33 = FUNC_13(VAR_34);

        if (VAR_33 == 1) {
            FUNC_2(VAR_9, "Key is valid\n");
        } else {




            unsigned long VAR_35;

            FUNC_2(VAR_9, "Key is invalid\n");

            while ((VAR_35 = FUNC_4()) != 0) {
                FUNC_2(VAR_9, "Detailed error: %s\n",
                           FUNC_6(VAR_35));
                FUNC_3();
            }
        }
        FUNC_7(VAR_34);
    }

    if (!VAR_27) {
        if (VAR_22 == VAR_1) {
            if (VAR_24) {
                if (!FUNC_15(VAR_9, VAR_11))
                    goto end;
            } else {
                FUNC_19(VAR_29);
                if (VAR_30) {
                    if (!FUNC_17(VAR_9, VAR_11, VAR_12,
                                                              ((void*)0), 0, ((void*)0),
                                                              VAR_16))
                        goto end;
                } else {
                    if (!FUNC_16(VAR_9, VAR_11, VAR_12,
                                                  ((void*)0), 0, ((void*)0), VAR_16))
                        goto end;
                }
            }
        } else if (VAR_22 == VAR_0) {
            if (VAR_24) {
                if (!FUNC_21(VAR_9, VAR_11))
                    goto end;
            } else {
                FUNC_19(VAR_29);
                if (!FUNC_22(VAR_9, VAR_11))
                    goto end;
            }
        } else {
            FUNC_2(VAR_4, "Bad format specified for key\n");
            goto end;
        }
    }

    if (VAR_26) {
        if (VAR_25) {
            if (FUNC_12(VAR_9, VAR_11, 0, ((void*)0)) <= 0)
                goto end;
        } else {
            FUNC_19(VAR_29);
            if (FUNC_11(VAR_9, VAR_11, 0, ((void*)0)) <= 0)
                goto end;
        }
    }

    VAR_28 = 0;

 end:
    if (VAR_28 != 0)
        FUNC_5(VAR_4);
    FUNC_10(VAR_11);
    FUNC_33(VAR_10);
    FUNC_1(VAR_9);
    FUNC_0(VAR_8);
    FUNC_14(VAR_15);
    FUNC_14(VAR_16);

    return VAR_28;
}
