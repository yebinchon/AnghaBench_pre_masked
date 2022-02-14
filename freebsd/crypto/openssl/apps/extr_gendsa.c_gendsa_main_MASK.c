
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int DSA ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int const**,int *,int *) ;
 int FUNC_7 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (int *,int *,int *,int *) ;
 int FUNC_10 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_11 (int *,char*,int *,char**) ;
 int FUNC_12 (int) ;
 int VAR_2 ;
 int * FUNC_13 (char*,char,int ) ;
 int * FUNC_14 (char*,int ,int) ;
 int VAR_3 ;
 char* FUNC_15 () ;
 int FUNC_16 (int ,int const**) ;
 int FUNC_17 (int ) ;
 char* FUNC_18 (int,char**,int ) ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 (int) ;
 char** FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int *) ;
 int * FUNC_25 (char*,int ) ;

int FUNC_26(int VAR_4, char **VAR_5)
{
    ENGINE *VAR_6 = ((void*)0);
    BIO *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    DSA *VAR_9 = ((void*)0);
    const EVP_CIPHER *VAR_10 = ((void*)0);
    char *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15;
    OPTION_CHOICE VAR_16;
    int VAR_17 = 1, VAR_18 = 0;
    const BIGNUM *VAR_19 = ((void*)0);

    VAR_15 = FUNC_18(VAR_4, VAR_5, VAR_3);
    while ((VAR_16 = FUNC_19()) != 133) {
        switch (VAR_16) {
        case 133:
        case 132:
 opthelp:
            FUNC_2(VAR_2, "%s: Use -help for summary.\n", VAR_15);
            goto end;
        case 131:
            VAR_17 = 0;
            FUNC_17(VAR_3);
            goto end;
        case 130:
            VAR_12 = FUNC_15();
            break;
        case 129:
            VAR_13 = FUNC_15();
            break;
        case 134:
            VAR_6 = FUNC_25(FUNC_15(), 0);
            break;
        case 128:
            if (!FUNC_21(VAR_16))
                goto end;
            break;
        case 135:
            if (!FUNC_16(FUNC_23(), &VAR_10))
                goto end;
            break;
        }
    }
    VAR_4 = FUNC_20();
    VAR_5 = FUNC_22();
    VAR_18 = 1;

    if (VAR_4 != 1)
        goto opthelp;
    VAR_11 = *VAR_5;

    if (!FUNC_11(((void*)0), VAR_13, ((void*)0), &VAR_14)) {
        FUNC_2(VAR_2, "Error getting password\n");
        goto end;
    }

    VAR_8 = FUNC_13(VAR_11, 'r', VAR_0);
    if (VAR_8 == ((void*)0))
        goto end2;

    if ((VAR_9 = FUNC_9(VAR_8, ((void*)0), ((void*)0), ((void*)0))) == ((void*)0)) {
        FUNC_2(VAR_2, "unable to load DSA parameter file\n");
        goto end;
    }
    FUNC_0(VAR_8);
    VAR_8 = ((void*)0);

    VAR_7 = FUNC_14(VAR_12, VAR_0, VAR_18);
    if (VAR_7 == ((void*)0))
        goto end2;

    FUNC_6(VAR_9, &VAR_19, ((void*)0), ((void*)0));

    if (FUNC_3(VAR_19) > VAR_1)
        FUNC_2(VAR_2,
                   "Warning: It is not recommended to use more than %d bit for DSA keys.\n"
                   "         Your key size is %d! Larger key size may behave not as expected.\n",
                   VAR_1, FUNC_3(VAR_19));

    FUNC_2(VAR_2, "Generating DSA key, %d bits\n", FUNC_3(VAR_19));
    if (!FUNC_5(VAR_9))
        goto end;

    FUNC_12(VAR_18);
    if (!FUNC_10(VAR_7, VAR_9, VAR_10, ((void*)0), 0, ((void*)0), VAR_14))
        goto end;
    VAR_17 = 0;
 end:
    if (VAR_17 != 0)
        FUNC_7(VAR_2);
 end2:
    FUNC_0(VAR_8);
    FUNC_1(VAR_7);
    FUNC_4(VAR_9);
    FUNC_24(VAR_6);
    FUNC_8(VAR_14);
    return VAR_17;
}
