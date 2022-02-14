
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;
typedef int ENGINE ;
typedef int DSA ;
typedef int DH ;
typedef int BN_GENCB ;
typedef int BIO ;
typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int,int *) ;
 int FUNC_11 (int *,int const**,int const**,int const**) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int * FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int,int *,int ,int *,int *,int *) ;
 int * FUNC_19 () ;
 int FUNC_20 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_21 (unsigned char*) ;
 int VAR_10 ;
 int * FUNC_22 (int *,int *,int *,int *) ;
 int * FUNC_23 (int *,int *,int *,int *) ;
 int FUNC_24 (int *,int *) ;
 int FUNC_25 (int *,int *) ;
 unsigned char* FUNC_26 (int,char*) ;
 int * VAR_11 ;
 int * FUNC_27 (char*,char,int) ;
 int * FUNC_28 (int *,int *) ;
 int * FUNC_29 (int *,int *) ;
 int * FUNC_30 (int *,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_31 (int *,int *) ;
 int FUNC_32 (int *,int *) ;
 char* FUNC_33 () ;
 int FUNC_34 (char*,int ,int*) ;
 int FUNC_35 (int ) ;
 char* FUNC_36 (int,char**,int ) ;
 int FUNC_37 (char*,int*) ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 (int) ;
 char** FUNC_41 () ;
 int FUNC_42 (int *,int const*,char*,int,unsigned char*) ;
 int FUNC_43 (int *) ;
 int * FUNC_44 (char*,int ) ;

int FUNC_45(int VAR_14, char **VAR_15)
{
    BIO *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    DH *VAR_18 = ((void*)0);
    char *VAR_19 = ((void*)0), *VAR_20 = ((void*)0), *VAR_21;
    ENGINE *VAR_22 = ((void*)0);

    int VAR_23 = 0;

    int VAR_24, VAR_25 = 0, VAR_26 = 0, VAR_27 = 1, VAR_28 = 0, VAR_29 = 0;
    int VAR_30 = VAR_9, VAR_31 = VAR_9, VAR_32 = 0, VAR_33 = 0;
    OPTION_CHOICE VAR_34;

    VAR_21 = FUNC_36(VAR_14, VAR_15, VAR_13);
    while ((VAR_34 = FUNC_38()) != 137) {
        switch (VAR_34) {
        case 137:
        case 136:
 opthelp:
            FUNC_2(VAR_11, "%s: Use -help for summary.\n", VAR_21);
            goto end;
        case 135:
            FUNC_35(VAR_13);
            VAR_27 = 0;
            goto end;
        case 133:
            if (!FUNC_34(FUNC_33(), VAR_10, &VAR_30))
                goto opthelp;
            break;
        case 130:
            if (!FUNC_34(FUNC_33(), VAR_10, &VAR_31))
                goto opthelp;
            break;
        case 134:
            VAR_19 = FUNC_33();
            break;
        case 131:
            VAR_20 = FUNC_33();
            break;
        case 138:
            VAR_22 = FUNC_44(FUNC_33(), 0);
            break;
        case 140:
            VAR_32 = 1;
            break;
        case 128:
            VAR_25 = 1;
            break;
        case 139:

            VAR_23 = 1;

            break;
        case 141:
            VAR_26 = 1;
            break;
        case 143:
            VAR_29 = 2;
            break;
        case 142:
            VAR_29 = 5;
            break;
        case 132:
            VAR_33 = 1;
            break;
        case 129:
            if (!FUNC_40(VAR_34))
                goto end;
            break;
        }
    }
    VAR_14 = FUNC_39();
    VAR_15 = FUNC_41();

    if (VAR_15[0] != ((void*)0) && (!FUNC_37(VAR_15[0], &VAR_28) || VAR_28 <= 0))
        goto end;

    if (VAR_29 && !VAR_28)
        VAR_28 = VAR_0;


    if (VAR_23 && VAR_29) {
        FUNC_2(VAR_11,
                   "generator may not be chosen for DSA parameters\n");
        goto end;
    }


    VAR_17 = FUNC_27(VAR_20, 'w', VAR_31);
    if (VAR_17 == ((void*)0))
        goto end;


    if (VAR_28 && !VAR_29)
        VAR_29 = 2;

    if (VAR_28) {

        BN_GENCB *VAR_35;
        VAR_35 = FUNC_5();
        if (VAR_35 == ((void*)0)) {
            FUNC_20(VAR_11);
            goto end;
        }

        FUNC_6(VAR_35, VAR_12, VAR_11);


        if (VAR_23) {
            DSA *VAR_36 = FUNC_19();

            FUNC_2(VAR_11,
                       "Generating DSA parameters, %d bit long prime\n", VAR_28);
            if (VAR_36 == ((void*)0)
                || !FUNC_18(VAR_36, VAR_28, ((void*)0), 0, ((void*)0), ((void*)0),
                                               VAR_35)) {
                FUNC_17(VAR_36);
                FUNC_4(VAR_35);
                FUNC_20(VAR_11);
                goto end;
            }

            VAR_18 = FUNC_16(VAR_36);
            FUNC_17(VAR_36);
            if (VAR_18 == ((void*)0)) {
                FUNC_4(VAR_35);
                FUNC_20(VAR_11);
                goto end;
            }
        } else

        {
            VAR_18 = FUNC_13();
            FUNC_2(VAR_11,
                       "Generating DH parameters, %d bit long safe prime, generator %d\n",
                       VAR_28, VAR_29);
            FUNC_2(VAR_11, "This is going to take a long time\n");
            if (VAR_18 == ((void*)0) || !FUNC_10(VAR_18, VAR_28, VAR_29, VAR_35)) {
                FUNC_4(VAR_35);
                FUNC_20(VAR_11);
                goto end;
            }
        }

        FUNC_4(VAR_35);
    } else {

        VAR_16 = FUNC_27(VAR_19, 'r', VAR_30);
        if (VAR_16 == ((void*)0))
            goto end;


        if (VAR_23) {
            DSA *VAR_37;

            if (VAR_30 == VAR_8)
                VAR_37 = FUNC_30(VAR_16, ((void*)0));
            else
                VAR_37 = FUNC_23(VAR_16, ((void*)0), ((void*)0), ((void*)0));

            if (VAR_37 == ((void*)0)) {
                FUNC_2(VAR_11, "unable to load DSA parameters\n");
                FUNC_20(VAR_11);
                goto end;
            }

            VAR_18 = FUNC_16(VAR_37);
            FUNC_17(VAR_37);
            if (VAR_18 == ((void*)0)) {
                FUNC_20(VAR_11);
                goto end;
            }
        } else

        {
            if (VAR_30 == VAR_8) {




                VAR_18 = FUNC_28(VAR_16, ((void*)0));

                if (VAR_18 == ((void*)0) && FUNC_3(VAR_16) == 0)
                    VAR_18 = FUNC_29(VAR_16, ((void*)0));
            } else {

                VAR_18 = FUNC_22(VAR_16, ((void*)0), ((void*)0), ((void*)0));
            }

            if (VAR_18 == ((void*)0)) {
                FUNC_2(VAR_11, "unable to load DH parameters\n");
                FUNC_20(VAR_11);
                goto end;
            }
        }


    }

    if (VAR_25) {
        FUNC_15(VAR_17, VAR_18);
    }

    if (VAR_32) {
        if (!FUNC_8(VAR_18, &VAR_24)) {
            FUNC_20(VAR_11);
            goto end;
        }
        if (VAR_24 & VAR_3)
            FUNC_2(VAR_11, "WARNING: p value is not prime\n");
        if (VAR_24 & VAR_4)
            FUNC_2(VAR_11, "WARNING: p value is not a safe prime\n");
        if (VAR_24 & VAR_5)
            FUNC_2(VAR_11, "WARNING: q value is not a prime\n");
        if (VAR_24 & VAR_2)
            FUNC_2(VAR_11, "WARNING: q value is invalid\n");
        if (VAR_24 & VAR_1)
            FUNC_2(VAR_11, "WARNING: j value is invalid\n");
        if (VAR_24 & VAR_7)
            FUNC_2(VAR_11,
                       "WARNING: unable to check the generator value\n");
        if (VAR_24 & VAR_6)
            FUNC_2(VAR_11, "WARNING: the g value is not a generator\n");
        if (VAR_24 == 0)
            FUNC_2(VAR_11, "DH parameters appear to be ok.\n");
        if (VAR_28 != 0 && VAR_24 != 0) {




            FUNC_2(VAR_11, "ERROR: Invalid parameters generated\n");
            goto end;
        }
    }
    if (VAR_26) {
        unsigned char *VAR_38;
        int VAR_39, VAR_40;
        const BIGNUM *VAR_41, *VAR_42;

        VAR_39 = FUNC_14(VAR_18);
        VAR_40 = FUNC_7(VAR_18);
        FUNC_11(VAR_18, &VAR_41, ((void*)0), &VAR_42);
        VAR_38 = FUNC_26(VAR_39, "print a BN");

        FUNC_2(VAR_17, "static DH *get_dh%d(void)\n{\n", VAR_40);
        FUNC_42(VAR_17, VAR_41, "dhp", VAR_40, VAR_38);
        FUNC_42(VAR_17, VAR_42, "dhg", VAR_40, VAR_38);
        FUNC_2(VAR_17, "    DH *dh = DH_new();\n"
                        "    BIGNUM *p, *g;\n"
                        "\n"
                        "    if (dh == NULL)\n"
                        "        return NULL;\n");
        FUNC_2(VAR_17, "    p = BN_bin2bn(dhp_%d, sizeof(dhp_%d), NULL);\n",
                   VAR_40, VAR_40);
        FUNC_2(VAR_17, "    g = BN_bin2bn(dhg_%d, sizeof(dhg_%d), NULL);\n",
                   VAR_40, VAR_40);
        FUNC_2(VAR_17, "    if (p == NULL || g == NULL\n"
                        "            || !DH_set0_pqg(dh, p, NULL, g)) {\n"
                        "        DH_free(dh);\n"
                        "        BN_free(p);\n"
                        "        BN_free(g);\n"
                        "        return NULL;\n"
                        "    }\n");
        if (FUNC_12(VAR_18) > 0)
            FUNC_2(VAR_17,
                        "    if (!DH_set_length(dh, %ld)) {\n"
                        "        DH_free(dh);\n"
                        "        return NULL;\n"
                        "    }\n", FUNC_12(VAR_18));
        FUNC_2(VAR_17, "    return dh;\n}\n");
        FUNC_21(VAR_38);
    }

    if (!VAR_33) {
        const BIGNUM *VAR_43;
        FUNC_11(VAR_18, ((void*)0), &VAR_43, ((void*)0));
        if (VAR_31 == VAR_8) {
            if (VAR_43 != ((void*)0))
                VAR_24 = FUNC_32(VAR_17, VAR_18);
            else
                VAR_24 = FUNC_31(VAR_17, VAR_18);
        } else if (VAR_43 != ((void*)0)) {
            VAR_24 = FUNC_25(VAR_17, VAR_18);
        } else {
            VAR_24 = FUNC_24(VAR_17, VAR_18);
        }
        if (!VAR_24) {
            FUNC_2(VAR_11, "unable to write DH parameters\n");
            FUNC_20(VAR_11);
            goto end;
        }
    }
    VAR_27 = 0;
 end:
    FUNC_0(VAR_16);
    FUNC_1(VAR_17);
    FUNC_9(VAR_18);
    FUNC_43(VAR_22);
    return VAR_27;
}
