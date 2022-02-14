
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int point_conversion_form_t ;
typedef int OPTION_CHOICE ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int VAR_0 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (char*) ;






 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_14 (int *,int *,int *,char*) ;
 int * FUNC_15 (int *,int *,int *,int *) ;
 int FUNC_16 (int *,int const*) ;
 int FUNC_17 (int *,int *,int const*,int *,int ,int *,char*) ;
 int FUNC_18 (int *,int *) ;
 int VAR_7 ;
 int FUNC_19 (char*,char*,char**,char**) ;
 int FUNC_20 (int) ;
 int VAR_8 ;
 int * FUNC_21 (char*,char,int) ;
 int * FUNC_22 (char*,int,int) ;
 int VAR_9 ;
 int * FUNC_23 (int *,int *) ;
 int * FUNC_24 (int *,int *) ;
 int VAR_10 ;
 int FUNC_25 (int *,int const*) ;
 int FUNC_26 (int *,int *) ;
 int FUNC_27 (int *,int *) ;
 int * FUNC_28 (char*,int,int,char*,int *,char*) ;
 int * FUNC_29 (char*,int,int,char*,int *,char*) ;
 char* FUNC_30 () ;
 int FUNC_31 (int ,int const**) ;
 int FUNC_32 (char*,int ,int*) ;
 int FUNC_33 (int ) ;
 char* FUNC_34 (int,char**,int ) ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 (char*,int ,int*) ;
 int FUNC_38 () ;
 int VAR_11 ;
 int FUNC_39 (char*) ;
 int FUNC_40 (int *) ;
 int * FUNC_41 (char*,int ) ;

int FUNC_42(int VAR_12, char **VAR_13)
{
    BIO *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    ENGINE *VAR_16 = ((void*)0);
    EC_KEY *VAR_17 = ((void*)0);
    const EC_GROUP *VAR_18;
    const EVP_CIPHER *VAR_19 = ((void*)0);
    point_conversion_form_t VAR_20 = VAR_7;
    char *VAR_21 = ((void*)0), *VAR_22 = ((void*)0), *VAR_23;
    char *VAR_24 = ((void*)0), *VAR_25 = ((void*)0), *VAR_26 = ((void*)0), *VAR_27 = ((void*)0);
    OPTION_CHOICE VAR_28;
    int VAR_29 = VAR_4, VAR_30 = 0, VAR_31 = 0;
    int VAR_32 = VAR_3, VAR_33 = VAR_3, VAR_34 = 0, VAR_35 = 0;
    int VAR_36 = 0, VAR_37 = 0, VAR_38 = 0, VAR_39, VAR_40 = 1, VAR_41 = 0;
    int VAR_42 = 0, VAR_43 = 0;

    VAR_23 = FUNC_34(VAR_12, VAR_13, VAR_10);
    while ((VAR_28 = FUNC_35()) != 143) {
        switch (VAR_28) {
        case 143:
        case 142:
 opthelp:
            FUNC_2(VAR_8, "%s: Use -help for summary.\n", VAR_23);
            goto end;
        case 141:
            FUNC_33(VAR_10);
            VAR_40 = 0;
            goto end;
        case 139:
            if (!FUNC_32(FUNC_30(), VAR_5, &VAR_32))
                goto opthelp;
            break;
        case 140:
            VAR_21 = FUNC_30();
            break;
        case 135:
            if (!FUNC_32(FUNC_30(), VAR_6, &VAR_33))
                goto opthelp;
            break;
        case 136:
            VAR_22 = FUNC_30();
            break;
        case 138:
            VAR_35 = 1;
            break;
        case 128:
            VAR_34 = 1;
            break;
        case 133:
            VAR_38 = 1;
            break;
        case 130:
            VAR_36 = 1;
            break;
        case 129:
            VAR_37 = 1;
            break;
        case 132:
            VAR_26 = FUNC_30();
            break;
        case 131:
            VAR_27 = FUNC_30();
            break;
        case 144:
            VAR_16 = FUNC_41(FUNC_30(), 0);
            break;
        case 146:
            if (!FUNC_31(FUNC_38(), &VAR_19))
                goto opthelp;
            break;
        case 145:
            if (!FUNC_37(FUNC_30(), VAR_9, &VAR_39))
                goto opthelp;
            VAR_30 = 1;
            VAR_20 = VAR_39;
            break;
        case 134:
            if (!FUNC_37(FUNC_30(), VAR_11, &VAR_39))
                goto opthelp;
            VAR_31 = 1;
            VAR_29 = VAR_39;
            break;
        case 137:
            VAR_42 = 1;
            break;
        case 147:
            VAR_43 = 1;
            break;
        }
    }
    VAR_12 = FUNC_36();
    if (VAR_12 != 0)
        goto opthelp;

    VAR_41 = VAR_38 || VAR_36 || VAR_37 ? 0 : 1;
    if (VAR_34 && !VAR_36)
        VAR_41 = 1;

    if (!FUNC_19(VAR_26, VAR_27, &VAR_24, &VAR_25)) {
        FUNC_2(VAR_8, "Error getting passwords\n");
        goto end;
    }

    if (VAR_32 != VAR_2) {
        VAR_14 = FUNC_21(VAR_21, 'r', VAR_32);
        if (VAR_14 == ((void*)0))
            goto end;
    }

    FUNC_2(VAR_8, "read EC key\n");
    if (VAR_32 == VAR_1) {
        if (VAR_36)
            VAR_17 = FUNC_24(VAR_14, ((void*)0));
        else
            VAR_17 = FUNC_23(VAR_14, ((void*)0));
    } else if (VAR_32 == VAR_2) {
        EVP_PKEY *VAR_44;
        if (VAR_36)
            VAR_44 = FUNC_29(VAR_21, VAR_32, 1, VAR_24, VAR_16, "Public Key");
        else
            VAR_44 = FUNC_28(VAR_21, VAR_32, 1, VAR_24, VAR_16, "Private Key");
        if (VAR_44 != ((void*)0)) {
            VAR_17 = FUNC_12(VAR_44);
            FUNC_11(VAR_44);
        }
    } else {
        if (VAR_36)
            VAR_17 = FUNC_15(VAR_14, ((void*)0), ((void*)0), ((void*)0));
        else
            VAR_17 = FUNC_14(VAR_14, ((void*)0), ((void*)0), VAR_24);
    }
    if (VAR_17 == ((void*)0)) {
        FUNC_2(VAR_8, "unable to load Key\n");
        FUNC_10(VAR_8);
        goto end;
    }

    VAR_15 = FUNC_22(VAR_22, VAR_33, VAR_41);
    if (VAR_15 == ((void*)0))
        goto end;

    VAR_18 = FUNC_5(VAR_17);

    if (VAR_30)
        FUNC_8(VAR_17, VAR_20);

    if (VAR_31)
        FUNC_7(VAR_17, VAR_29);

    if (VAR_42)
        FUNC_9(VAR_17, VAR_0);

    if (VAR_34) {
        FUNC_20(VAR_36 || VAR_41);
        if (!FUNC_6(VAR_15, VAR_17, 0)) {
            FUNC_39(VAR_22);
            FUNC_10(VAR_8);
            goto end;
        }
    }

    if (VAR_43) {
        if (FUNC_3(VAR_17) == 1) {
            FUNC_2(VAR_8, "EC Key valid.\n");
        } else {
            FUNC_2(VAR_8, "EC Key Invalid!\n");
            FUNC_10(VAR_8);
        }
    }

    if (VAR_35) {
        VAR_40 = 0;
        goto end;
    }

    FUNC_2(VAR_8, "writing EC key\n");
    if (VAR_33 == VAR_1) {
        if (VAR_38) {
            VAR_39 = FUNC_25(VAR_15, VAR_18);
        } else if (VAR_36 || VAR_37) {
            VAR_39 = FUNC_27(VAR_15, VAR_17);
        } else {
            FUNC_20(VAR_41);
            VAR_39 = FUNC_26(VAR_15, VAR_17);
        }
    } else {
        if (VAR_38) {
            VAR_39 = FUNC_16(VAR_15, VAR_18);
        } else if (VAR_36 || VAR_37) {
            VAR_39 = FUNC_18(VAR_15, VAR_17);
        } else {
            FUNC_20(VAR_41);
            VAR_39 = FUNC_17(VAR_15, VAR_17, VAR_19,
                                           ((void*)0), 0, ((void*)0), VAR_25);
        }
    }

    if (!VAR_39) {
        FUNC_2(VAR_8, "unable to write private key\n");
        FUNC_10(VAR_8);
    } else {
        VAR_40 = 0;
    }
 end:
    FUNC_0(VAR_14);
    FUNC_1(VAR_15);
    FUNC_4(VAR_17);
    FUNC_40(VAR_16);
    FUNC_13(VAR_24);
    FUNC_13(VAR_25);
    return VAR_40;
}
