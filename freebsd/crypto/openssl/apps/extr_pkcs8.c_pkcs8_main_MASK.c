
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pass ;
typedef int X509_SIG ;
typedef int X509_ALGOR ;
typedef int PKCS8_PRIV_KEY_INFO ;
typedef int OPTION_CHOICE ;
typedef int EVP_PKEY ;
typedef int EVP_CIPHER ;
typedef int ENGINE ;
typedef int BIO ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int,int *,int *,int ) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,int,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;



 int VAR_5 ;
 int * FUNC_12 (int *,int *,int *,int *) ;
 int * FUNC_13 (int *,int *,int *,int *) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *,int *,int *,int ,int *,char*) ;
 int FUNC_17 (int *,int *,int *,int *,int ,int *,char*) ;
 int VAR_6 ;
 int * FUNC_18 (int const*,int,int *,int ,int *,int) ;
 int * FUNC_19 (int const*,int *,int ,int *,long,long,long) ;
 int * FUNC_20 (int,int,int *,int ) ;
 int FUNC_21 (int *) ;
 int * FUNC_22 (int *,char*,int ) ;
 int * FUNC_23 (char*,int ,int *,int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (char*,char*,char**,char**) ;
 int FUNC_27 (int) ;
 int VAR_7 ;
 int * FUNC_28 (char*,char,int) ;
 int * FUNC_29 (char*,int,int) ;
 int * FUNC_30 (int *,int *) ;
 int * FUNC_31 (int *,int *) ;
 int FUNC_32 (int *,int *) ;
 int FUNC_33 (int *,int *) ;
 int FUNC_34 (int *,int *) ;
 int * FUNC_35 (char*,int,int,char*,int *,char*) ;
 char* FUNC_36 () ;
 int FUNC_37 (char*,int const**) ;
 int FUNC_38 (char*,int ,int*) ;
 int FUNC_39 (int ) ;
 char* FUNC_40 (int,char**,int ) ;
 int FUNC_41 (char*,int*) ;
 int FUNC_42 (char*,long*) ;
 int FUNC_43 () ;
 int FUNC_44 () ;
 int FUNC_45 (int) ;
 int VAR_8 ;
 int FUNC_46 (int *) ;
 int * FUNC_47 (char*,int ) ;
 int FUNC_48 (char*) ;

int FUNC_49(int VAR_9, char **VAR_10)
{
    BIO *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
    ENGINE *VAR_13 = ((void*)0);
    EVP_PKEY *VAR_14 = ((void*)0);
    PKCS8_PRIV_KEY_INFO *VAR_15 = ((void*)0);
    X509_SIG *VAR_16 = ((void*)0);
    const EVP_CIPHER *VAR_17 = ((void*)0);
    char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);
    char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0), *VAR_22;

    char VAR_23[VAR_0];

    char *VAR_24 = ((void*)0), *VAR_25 = ((void*)0), *VAR_26 = ((void*)0);
    OPTION_CHOICE VAR_27;
    int VAR_28 = 0, VAR_29 = 1, VAR_30 = VAR_6;
    int VAR_31 = VAR_3, VAR_32 = VAR_3, VAR_33 = 0, VAR_34 = -1;
    int VAR_35 = 0, VAR_36 = 0;

    long VAR_37 = 0, VAR_38 = 0, VAR_39 = 0;


    VAR_22 = FUNC_40(VAR_9, VAR_10, VAR_8);
    while ((VAR_27 = FUNC_43()) != 149) {
        switch (VAR_27) {
        case 149:
        case 148:
 opthelp:
            FUNC_2(VAR_7, "%s: Use -help for summary.\n", VAR_22);
            goto end;
        case 147:
            FUNC_39(VAR_8);
            VAR_29 = 0;
            goto end;
        case 145:
            if (!FUNC_38(FUNC_36(), VAR_5, &VAR_31))
                goto opthelp;
            break;
        case 146:
            VAR_18 = FUNC_36();
            break;
        case 140:
            if (!FUNC_38(FUNC_36(), VAR_5, &VAR_32))
                goto opthelp;
            break;
        case 141:
            VAR_19 = FUNC_36();
            break;
        case 132:
            VAR_33 = 1;
            break;
        case 142:
            VAR_30 = 1;
            break;
        case 143:
            VAR_28 = 1;
            break;
        case 137:
            if (!FUNC_45(VAR_27))
                goto end;
            break;
        case 131:
            VAR_36 = 1;
            break;
        case 129:
            if (!FUNC_37(FUNC_36(), &VAR_17))
                goto opthelp;
            break;
        case 130:
            VAR_34 = FUNC_10(FUNC_36());
            if (VAR_34 == VAR_4) {
                FUNC_2(VAR_7,
                           "%s: Unknown PBE algorithm %s\n", VAR_22, FUNC_36());
                goto opthelp;
            }
            break;
        case 128:
            VAR_34 = FUNC_10(FUNC_36());
            if (!FUNC_4(VAR_1, VAR_34, ((void*)0), ((void*)0), 0)) {
                FUNC_2(VAR_7,
                           "%s: Unknown PRF algorithm %s\n", VAR_22, FUNC_36());
                goto opthelp;
            }
            if (VAR_17 == ((void*)0))
                VAR_17 = FUNC_8();
            break;
        case 144:
            if (!FUNC_41(FUNC_36(), &VAR_30))
                goto opthelp;
            break;
        case 139:
            VAR_20 = FUNC_36();
            break;
        case 138:
            VAR_21 = FUNC_36();
            break;
        case 150:
            VAR_13 = FUNC_47(FUNC_36(), 0);
            break;

        case 136:
            VAR_37 = 16384;
            VAR_38 = 8;
            VAR_39 = 1;
            if (VAR_17 == ((void*)0))
                VAR_17 = FUNC_8();
            break;
        case 135:
            if (!FUNC_42(FUNC_36(), &VAR_37) || VAR_37 <= 0)
                goto opthelp;
            break;
        case 133:
            if (!FUNC_42(FUNC_36(), &VAR_38) || VAR_38 <= 0)
                goto opthelp;
            break;
        case 134:
            if (!FUNC_42(FUNC_36(), &VAR_39) || VAR_39 <= 0)
                goto opthelp;
            break;

        }
    }
    VAR_9 = FUNC_44();
    if (VAR_9 != 0)
        goto opthelp;

    VAR_35 = 1;

    if (!FUNC_26(VAR_20, VAR_21, &VAR_24, &VAR_25)) {
        FUNC_2(VAR_7, "Error getting passwords\n");
        goto end;
    }

    if ((VAR_34 == -1) && VAR_17 == ((void*)0))
        VAR_17 = FUNC_8();

    VAR_11 = FUNC_28(VAR_18, 'r', VAR_31);
    if (VAR_11 == ((void*)0))
        goto end;
    VAR_12 = FUNC_29(VAR_19, VAR_32, VAR_35);
    if (VAR_12 == ((void*)0))
        goto end;

    if (VAR_33) {
        VAR_14 = FUNC_35(VAR_18, VAR_31, 1, VAR_24, VAR_13, "key");
        if (VAR_14 == ((void*)0))
            goto end;
        if ((VAR_15 = FUNC_6(VAR_14)) == ((void*)0)) {
            FUNC_2(VAR_7, "Error converting key\n");
            FUNC_3(VAR_7);
            goto end;
        }
        if (VAR_28) {
            FUNC_27(VAR_35);
            if (VAR_32 == VAR_3) {
                FUNC_15(VAR_12, VAR_15);
            } else if (VAR_32 == VAR_2) {
                FUNC_32(VAR_12, VAR_15);
            } else {
                FUNC_2(VAR_7, "Bad format specified for key\n");
                goto end;
            }
        } else {
            X509_ALGOR *VAR_40;
            if (VAR_17) {

                if (VAR_37 && VAR_38 && VAR_39)
                    VAR_40 = FUNC_19(VAR_17, ((void*)0), 0, ((void*)0),
                                                VAR_37, VAR_38, VAR_39);
                else

                    VAR_40 = FUNC_18(VAR_17, VAR_30, ((void*)0), 0, ((void*)0),
                                            VAR_34);
            } else {
                VAR_40 = FUNC_20(VAR_34, VAR_30, ((void*)0), 0);
            }
            if (VAR_40 == ((void*)0)) {
                FUNC_2(VAR_7, "Error setting PBE algorithm\n");
                FUNC_3(VAR_7);
                goto end;
            }
            if (VAR_25 != ((void*)0)) {
                VAR_26 = VAR_25;
            } else if (1) {


                VAR_26 = VAR_23;
                if (FUNC_9
                    (VAR_23, sizeof(VAR_23), "Enter Encryption Password:", 1)) {
                    FUNC_24(VAR_40);
                    goto end;
                }
            } else {

                FUNC_2(VAR_7, "Password required\n");
                goto end;
            }
            VAR_16 = FUNC_23(VAR_26, FUNC_48(VAR_26), VAR_15, VAR_40);
            if (VAR_16 == ((void*)0)) {
                FUNC_24(VAR_40);
                FUNC_2(VAR_7, "Error encrypting key\n");
                FUNC_3(VAR_7);
                goto end;
            }
            FUNC_27(VAR_35);
            if (VAR_32 == VAR_3)
                FUNC_14(VAR_12, VAR_16);
            else if (VAR_32 == VAR_2)
                FUNC_33(VAR_12, VAR_16);
            else {
                FUNC_2(VAR_7, "Bad format specified for key\n");
                goto end;
            }
        }

        VAR_29 = 0;
        goto end;
    }

    if (VAR_28) {
        if (VAR_31 == VAR_3) {
            VAR_15 = FUNC_13(VAR_11, ((void*)0), ((void*)0), ((void*)0));
        } else if (VAR_31 == VAR_2) {
            VAR_15 = FUNC_30(VAR_11, ((void*)0));
        } else {
            FUNC_2(VAR_7, "Bad format specified for key\n");
            goto end;
        }
    } else {
        if (VAR_31 == VAR_3) {
            VAR_16 = FUNC_12(VAR_11, ((void*)0), ((void*)0), ((void*)0));
        } else if (VAR_31 == VAR_2) {
            VAR_16 = FUNC_31(VAR_11, ((void*)0));
        } else {
            FUNC_2(VAR_7, "Bad format specified for key\n");
            goto end;
        }

        if (VAR_16 == ((void*)0)) {
            FUNC_2(VAR_7, "Error reading key\n");
            FUNC_3(VAR_7);
            goto end;
        }
        if (VAR_24 != ((void*)0)) {
            VAR_26 = VAR_24;
        } else if (1) {

            VAR_26 = VAR_23;
            if (FUNC_9(VAR_23, sizeof(VAR_23), "Enter Password:", 0)) {
                FUNC_2(VAR_7, "Can't read Password\n");
                goto end;
            }
        } else {

            FUNC_2(VAR_7, "Password required\n");
            goto end;
        }
        VAR_15 = FUNC_22(VAR_16, VAR_26, FUNC_48(VAR_26));
    }

    if (VAR_15 == ((void*)0)) {
        FUNC_2(VAR_7, "Error decrypting key\n");
        FUNC_3(VAR_7);
        goto end;
    }

    if ((VAR_14 = FUNC_5(VAR_15)) == ((void*)0)) {
        FUNC_2(VAR_7, "Error converting key\n");
        FUNC_3(VAR_7);
        goto end;
    }

    FUNC_27(VAR_35);
    if (VAR_32 == VAR_3) {
        if (VAR_36)
            FUNC_17(VAR_12, VAR_14, ((void*)0), ((void*)0), 0,
                                                 ((void*)0), VAR_25);
        else
            FUNC_16(VAR_12, VAR_14, ((void*)0), ((void*)0), 0, ((void*)0), VAR_25);
    } else if (VAR_32 == VAR_2) {
        FUNC_34(VAR_12, VAR_14);
    } else {
        FUNC_2(VAR_7, "Bad format specified for key\n");
        goto end;
    }
    VAR_29 = 0;

 end:
    FUNC_25(VAR_16);
    FUNC_21(VAR_15);
    FUNC_7(VAR_14);
    FUNC_46(VAR_13);
    FUNC_1(VAR_12);
    FUNC_0(VAR_11);
    FUNC_11(VAR_24);
    FUNC_11(VAR_25);

    return VAR_29;
}
