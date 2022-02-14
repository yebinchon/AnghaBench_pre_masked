
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
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int **) ;
 scalar_t__ FUNC_11 (int *,int **) ;
 int FUNC_12 (int *,int *,int ,int *) ;
 int FUNC_13 (int *,int *,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (char*) ;





 int VAR_6 ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_17 (char*,int *,char**,int *) ;
 int FUNC_18 (int) ;
 int VAR_7 ;
 int * FUNC_19 (char*,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int **,char*,int *,int) ;
 int FUNC_22 (int **,char*,int *) ;
 char* FUNC_23 () ;
 int FUNC_24 (int ,int const**) ;
 int FUNC_25 (char*,int ,int*) ;
 int FUNC_26 (int ) ;
 char* FUNC_27 (int,char**,int ) ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 (int *,char*) ;
 int FUNC_32 (int *) ;
 int * FUNC_33 (char*,int ) ;

int FUNC_34(int VAR_10, char **VAR_11)
{
    BIO *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    ENGINE *VAR_14 = ((void*)0);
    EVP_PKEY *VAR_15 = ((void*)0);
    EVP_PKEY_CTX *VAR_16 = ((void*)0);
    char *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20;
    const EVP_CIPHER *VAR_21 = ((void*)0);
    OPTION_CHOICE VAR_22;
    int VAR_23 = VAR_5, VAR_24 = 0, VAR_25 = 1, VAR_26, VAR_27 = 0;
    int VAR_28 = 0;

    VAR_20 = FUNC_27(VAR_10, VAR_11, VAR_9);
    while ((VAR_22 = FUNC_28()) != 137) {
        switch (VAR_22) {
        case 137:
        case 136:
 opthelp:
            FUNC_2(VAR_7, "%s: Use -help for summary.\n", VAR_20);
            goto end;
        case 134:
            VAR_25 = 0;
            FUNC_26(VAR_9);
            goto end;
        case 132:
            if (!FUNC_25(FUNC_23(), VAR_6, &VAR_23))
                goto opthelp;
            break;
        case 133:
            VAR_17 = FUNC_23();
            break;
        case 130:
            VAR_18 = FUNC_23();
            break;
        case 138:
            VAR_14 = FUNC_33(FUNC_23(), 0);
            break;
        case 131:
            if (VAR_27 == 1)
                goto opthelp;
            if (!FUNC_22(&VAR_16, FUNC_23(), VAR_14))
                goto end;
            break;
        case 140:
            if (!FUNC_21(&VAR_16, FUNC_23(), VAR_14, VAR_27))
                goto end;
            break;
        case 129:
            if (VAR_16 == ((void*)0)) {
                FUNC_2(VAR_7, "%s: No keytype specified.\n", VAR_20);
                goto opthelp;
            }
            if (FUNC_31(VAR_16, FUNC_23()) <= 0) {
                FUNC_2(VAR_7,
                           "%s: Error setting %s parameter:\n",
                           VAR_20, FUNC_23());
                FUNC_4(VAR_7);
                goto end;
            }
            break;
        case 135:
            if (VAR_16 != ((void*)0))
                goto opthelp;
            VAR_27 = 1;
            break;
        case 128:
            VAR_24 = 1;
            break;
        case 139:
            if (!FUNC_24(FUNC_30(), &VAR_21)
                || VAR_27 == 1)
                goto opthelp;
            if (FUNC_5(VAR_21) == VAR_1 ||
                FUNC_5(VAR_21) == VAR_0 ||
                FUNC_5(VAR_21) == VAR_3 ||
                FUNC_5(VAR_21) == VAR_2) {
                FUNC_2(VAR_7, "%s: cipher mode not supported\n", VAR_20);
                goto end;
            }
        }
    }
    VAR_10 = FUNC_29();
    if (VAR_10 != 0)
        goto opthelp;

    VAR_28 = VAR_27 ? 0 : 1;

    if (VAR_16 == ((void*)0))
        goto opthelp;

    if (!FUNC_17(VAR_18, ((void*)0), &VAR_19, ((void*)0))) {
        FUNC_3(VAR_7, "Error getting password\n");
        goto end;
    }

    VAR_13 = FUNC_19(VAR_17, VAR_23, VAR_28);
    if (VAR_13 == ((void*)0))
        goto end;

    FUNC_8(VAR_16, VAR_8);
    FUNC_7(VAR_16, VAR_7);

    if (VAR_27) {
        if (FUNC_11(VAR_16, &VAR_15) <= 0) {
            FUNC_3(VAR_7, "Error generating parameters\n");
            FUNC_4(VAR_7);
            goto end;
        }
    } else {
        if (FUNC_10(VAR_16, &VAR_15) <= 0) {
            FUNC_3(VAR_7, "Error generating key\n");
            FUNC_4(VAR_7);
            goto end;
        }
    }

    if (VAR_27) {
        VAR_26 = FUNC_15(VAR_13, VAR_15);
    } else if (VAR_23 == VAR_5) {
        FUNC_18(VAR_28);
        VAR_26 = FUNC_16(VAR_13, VAR_15, VAR_21, ((void*)0), 0, ((void*)0), VAR_19);
    } else if (VAR_23 == VAR_4) {
        FUNC_18(VAR_28);
        VAR_26 = FUNC_20(VAR_13, VAR_15);
    } else {
        FUNC_2(VAR_7, "Bad format specified for key\n");
        goto end;
    }

    if (VAR_26 <= 0) {
        FUNC_3(VAR_7, "Error writing key\n");
        FUNC_4(VAR_7);
    }

    if (VAR_24) {
        if (VAR_27)
            VAR_26 = FUNC_12(VAR_13, VAR_15, 0, ((void*)0));
        else
            VAR_26 = FUNC_13(VAR_13, VAR_15, 0, ((void*)0));

        if (VAR_26 <= 0) {
            FUNC_3(VAR_7, "Error printing key\n");
            FUNC_4(VAR_7);
        }
    }

    VAR_25 = 0;

 end:
    FUNC_9(VAR_15);
    FUNC_6(VAR_16);
    FUNC_1(VAR_13);
    FUNC_0(VAR_12);
    FUNC_32(VAR_14);
    FUNC_14(VAR_19);
    return VAR_25;
}
