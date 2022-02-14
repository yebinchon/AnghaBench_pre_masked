
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;
struct TYPE_4__ {int info; } ;
struct TYPE_3__ {TYPE_2__* user; int login; int vb; } ;
typedef int SSL ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,struct timeval*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int,int ) ;
 int * FUNC_7 (int,int ) ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (scalar_t__,char*,...) ;
 int * FUNC_10 (int *,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int,int) ;
 int FUNC_14 (int ,char const*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,scalar_t__) ;
 scalar_t__ FUNC_17 (int *,struct timeval*) ;
 scalar_t__ FUNC_18 (int *) ;
 int FUNC_19 (scalar_t__) ;
 scalar_t__ FUNC_20 (int,int *) ;
 int FUNC_21 (int *) ;
 int VAR_7 ;
 int FUNC_22 (char*,int) ;
 int VAR_8 ;
 void* FUNC_23 (int ,int ) ;
 int FUNC_24 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 scalar_t__ FUNC_29 (int *) ;
 int FUNC_30 (int *,int) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 scalar_t__ FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 scalar_t__ FUNC_35 (int *) ;
 scalar_t__ FUNC_36 (int *) ;
 int FUNC_37 (int *,int ) ;
 int * FUNC_38 (int ) ;
 int FUNC_39 (int *,char*,int) ;
 int FUNC_40 (int *,char*,int,size_t*) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *) ;
 int FUNC_43 (int *,int *,int *) ;
 int FUNC_44 (int *,int ) ;
 int FUNC_45 (int *,scalar_t__) ;
 int FUNC_46 (int *,int ) ;
 int FUNC_47 (int *,unsigned char*,int ) ;
 int FUNC_48 (int *,int) ;
 int FUNC_49 (int *,scalar_t__) ;
 int FUNC_50 (int *,int ) ;
 int FUNC_51 (int *,int,int *) ;
 int VAR_20 ;
 int FUNC_52 (int *) ;
 scalar_t__ FUNC_53 (int *) ;
 scalar_t__ FUNC_54 (int *) ;
 int FUNC_55 (int *,char*,unsigned int) ;
 char* FUNC_56 (int,char*) ;
 int FUNC_57 (char*,char*,int) ;
 int FUNC_58 (int) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_59 () ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_60 (char*,char*,int) ;
 scalar_t__ VAR_30 ;
 int FUNC_61 () ;
 scalar_t__ FUNC_62 () ;
 int FUNC_63 (int *) ;
 int VAR_31 ;
 int FUNC_64 (int,int *) ;
 int FUNC_65 (int *) ;
 int FUNC_66 (scalar_t__,int ) ;
 int FUNC_67 (char*,...) ;
 int FUNC_68 (char*,int) ;
 int FUNC_69 (char*,unsigned int) ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int FUNC_70 (int,void*,int *,int *,struct timeval*) ;
 scalar_t__ VAR_40 ;
 TYPE_1__ VAR_41 ;
 int FUNC_71 (char const*) ;
 int VAR_42 ;
 int FUNC_72 (int *) ;

__attribute__((used)) static int FUNC_73(int VAR_43, int VAR_44, int VAR_45, unsigned char *VAR_46)
{
    char *VAR_47 = ((void*)0);
    fd_set VAR_48;
    int VAR_49 = 1, VAR_50;
    int VAR_51, VAR_52;
    unsigned long VAR_53;
    SSL *VAR_54 = ((void*)0);
    BIO *VAR_55;
    struct timeval VAR_56;

    struct timeval *VAR_57;



    int VAR_58 = (VAR_44 == VAR_8 || VAR_45 == VAR_7);





    VAR_47 = FUNC_56(VAR_26, "server buffer");
    if (VAR_36) {
        if (!FUNC_13(VAR_43, 1))
            FUNC_19(VAR_23);
        else if (!VAR_38)
            FUNC_9(VAR_23, "Turned on non blocking io\n");
    }

    VAR_54 = FUNC_38(VAR_28);
    if (VAR_54 == ((void*)0)) {
        VAR_49 = -1;
        goto err;
    }

    if (VAR_39) {
        FUNC_50(VAR_54, VAR_42);
        FUNC_49(VAR_54, VAR_25);
    }

    if (VAR_46 != ((void*)0)
        && !FUNC_47(VAR_54, VAR_46,
                                       FUNC_71((char *)VAR_46))) {
        FUNC_9(VAR_23, "Error setting session id context\n");
        VAR_49 = -1;
        goto err;
    }

    if (!FUNC_25(VAR_54)) {
        FUNC_9(VAR_23, "Error clearing SSL connection\n");
        VAR_49 = -1;
        goto err;
    }

    if (VAR_58) {

        if (VAR_45 == VAR_7)
            VAR_55 = FUNC_7(VAR_43, VAR_3);
        else

            VAR_55 = FUNC_6(VAR_43, VAR_3);

        if (VAR_30) {
            VAR_56.tv_sec = 0;
            VAR_56.tv_usec = VAR_4;
            FUNC_1(VAR_55, VAR_1, 0, &VAR_56);

            VAR_56.tv_sec = 0;
            VAR_56.tv_usec = VAR_5;
            FUNC_1(VAR_55, VAR_2, 0, &VAR_56);
        }

        if (VAR_40) {
            if (VAR_40 < FUNC_15(VAR_54)) {
                FUNC_9(VAR_23, "MTU too small. Must be at least %ld\n",
                           FUNC_15(VAR_54));
                VAR_49 = -1;
                FUNC_4(VAR_55);
                goto err;
            }
            FUNC_46(VAR_54, VAR_13);
            if (!FUNC_16(VAR_54, VAR_40)) {
                FUNC_9(VAR_23, "Failed to set MTU\n");
                VAR_49 = -1;
                FUNC_4(VAR_55);
                goto err;
            }
        } else

            FUNC_1(VAR_55, VAR_0, 0, ((void*)0));


        if (VAR_45 != VAR_7)


            FUNC_46(VAR_54, VAR_12);
    } else

        VAR_55 = FUNC_8(VAR_43, VAR_3);

    if (VAR_55 == ((void*)0)) {
        FUNC_9(VAR_23, "Unable to create BIO\n");
        FUNC_19(VAR_23);
        goto err;
    }

    if (VAR_37) {
        BIO *VAR_59;

        VAR_59 = FUNC_5(FUNC_2());
        VAR_55 = FUNC_10(VAR_59, VAR_55);
    }

    FUNC_43(VAR_54, VAR_55, VAR_55);
    FUNC_42(VAR_54);


    if (VAR_34) {
        FUNC_11(FUNC_31(VAR_54), VAR_22);
        FUNC_12(FUNC_31(VAR_54), (char *)VAR_25);
    }
    if (VAR_35) {

        if (VAR_35 == 2)
            FUNC_44(VAR_54, VAR_20);
        else

            FUNC_44(VAR_54, VAR_31);
        FUNC_45(VAR_54, VAR_24 ? VAR_24 : VAR_25);
    }

    if (VAR_39) {
        FUNC_50(VAR_54, VAR_42);
        FUNC_49(VAR_54, VAR_25);
    }

    if (VAR_29) {
        int VAR_60 = 1, VAR_61 = VAR_14;
        size_t VAR_62;

        while (VAR_61 != VAR_15) {
            for (;;) {
                VAR_61 = FUNC_40(VAR_54, VAR_47, VAR_26, &VAR_62);
                if (VAR_61 != VAR_14)
                    break;

                switch (FUNC_30(VAR_54, 0)) {
                case 130:
                case 133:
                case 131:

                    continue;
                default:
                    FUNC_9(VAR_23, "Error reading early data\n");
                    FUNC_19(VAR_23);
                    goto err;
                }
            }
            if (VAR_62 > 0) {
                if (VAR_60) {
                    FUNC_9(VAR_25, "Early data received:\n");
                    VAR_60 = 0;
                }
                FUNC_69(VAR_47, (unsigned int)VAR_62);
                (void)FUNC_3(VAR_25);
            }
        }
        if (VAR_60) {
            if (FUNC_29(VAR_54) == VAR_9)
                FUNC_9(VAR_25, "No early data received\n");
            else
                FUNC_9(VAR_25, "Early data was rejected\n");
        } else {
            FUNC_9(VAR_25, "\nEnd of early data\n");
        }
        if (FUNC_36(VAR_54))
            FUNC_65(VAR_54);
    }

    if (FUNC_61() > VAR_43)
        VAR_50 = FUNC_61() + 1;
    else
        VAR_50 = VAR_43 + 1;
    for (;;) {
        int VAR_63;
        int VAR_64;

        VAR_63 = 0;
        VAR_64 = FUNC_33(VAR_54)
                           || (VAR_21 && FUNC_54(VAR_54));

        if (!VAR_64) {
            FUNC_21(&VAR_48);

            FUNC_64(FUNC_61(), &VAR_48);

            FUNC_64(VAR_43, &VAR_48);
            if (FUNC_35(VAR_54) && FUNC_17(VAR_54, &VAR_56))
                VAR_57 = &VAR_56;
            else
                VAR_57 = ((void*)0);

            VAR_52 = FUNC_70(VAR_50, (void *)&VAR_48, ((void*)0), ((void*)0), VAR_57);

            if ((FUNC_35(VAR_54)) && FUNC_18(VAR_54) > 0)
                FUNC_9(VAR_23, "TIMEOUT occurred\n");

            if (VAR_52 <= 0)
                continue;
            if (FUNC_20(FUNC_61(), &VAR_48))
                VAR_63 = 1;

            if (FUNC_20(VAR_43, &VAR_48))
                VAR_64 = 1;
        }
        if (VAR_63) {
            if (VAR_33) {
                int VAR_65, VAR_66;

                VAR_52 = FUNC_68(VAR_47, VAR_26 / 2);
                VAR_66 = 0;

                for (VAR_65 = 0; VAR_65 < VAR_52; VAR_65++)
                    if (VAR_47[VAR_65] == '\n')
                        VAR_66++;
                for (VAR_65 = VAR_52 - 1; VAR_65 >= 0; VAR_65--) {
                    VAR_47[VAR_65 + VAR_66] = VAR_47[VAR_65];
                    if (VAR_47[VAR_65] == '\n') {
                        VAR_66--;
                        VAR_52++;
                        VAR_47[VAR_65 + VAR_66] = '\r';
                    }
                }
                FUNC_58(VAR_66 == 0);
            } else {
                VAR_52 = FUNC_68(VAR_47, VAR_26);
            }

            if (!VAR_38 && !VAR_32) {
                if ((VAR_52 <= 0) || (VAR_47[0] == 'Q')) {
                    FUNC_9(VAR_25, "DONE\n");
                    (void)FUNC_3(VAR_25);
                    FUNC_0(VAR_43);
                    FUNC_59();
                    VAR_49 = -11;
                    goto err;
                }
                if ((VAR_52 <= 0) || (VAR_47[0] == 'q')) {
                    FUNC_9(VAR_25, "DONE\n");
                    (void)FUNC_3(VAR_25);
                    if (FUNC_53(VAR_54) != VAR_6)
                        FUNC_0(VAR_43);



                    goto err;
                }

                if ((VAR_47[0] == 'B') && ((VAR_47[1] == '\n') || (VAR_47[1] == '\r'))) {
                    FUNC_9(VAR_23, "HEARTBEATING\n");
                    FUNC_34(VAR_54);
                    VAR_52 = 0;
                    continue;
                }

                if ((VAR_47[0] == 'r') && ((VAR_47[1] == '\n') || (VAR_47[1] == '\r'))) {
                    FUNC_41(VAR_54);
                    VAR_52 = FUNC_26(VAR_54);
                    FUNC_67("SSL_do_handshake -> %d\n", VAR_52);
                    VAR_52 = 0;
                    continue;
                }
                if ((VAR_47[0] == 'R') && ((VAR_47[1] == '\n') || (VAR_47[1] == '\r'))) {
                    FUNC_51(VAR_54,
                                   VAR_19 | VAR_18,
                                   ((void*)0));
                    FUNC_41(VAR_54);
                    VAR_52 = FUNC_26(VAR_54);
                    FUNC_67("SSL_do_handshake -> %d\n", VAR_52);
                    VAR_52 = 0;
                    continue;
                }
                if ((VAR_47[0] == 'K' || VAR_47[0] == 'k')
                        && ((VAR_47[1] == '\n') || (VAR_47[1] == '\r'))) {
                    FUNC_37(VAR_54, VAR_47[0] == 'K' ?
                                        VAR_11
                                        : VAR_10);
                    VAR_52 = FUNC_26(VAR_54);
                    FUNC_67("SSL_do_handshake -> %d\n", VAR_52);
                    VAR_52 = 0;
                    continue;
                }
                if (VAR_47[0] == 'c' && ((VAR_47[1] == '\n') || (VAR_47[1] == '\r'))) {
                    FUNC_51(VAR_54, VAR_19, ((void*)0));
                    VAR_52 = FUNC_52(VAR_54);
                    if (VAR_52 == 0) {
                        FUNC_67("Failed to initiate request\n");
                        FUNC_19(VAR_23);
                    } else {
                        VAR_52 = FUNC_26(VAR_54);
                        FUNC_67("SSL_do_handshake -> %d\n", VAR_52);
                        VAR_52 = 0;
                    }
                    continue;
                }
                if (VAR_47[0] == 'P') {
                    static const char *VAR_67 = "Lets print some clear text\n";
                    FUNC_14(FUNC_32(VAR_54), VAR_67, FUNC_71(VAR_67));
                }
                if (VAR_47[0] == 'S') {
                    FUNC_66(VAR_25, FUNC_28(VAR_54));
                }
            }



            VAR_53 = VAR_51 = 0;
            for (;;) {
                VAR_51 = FUNC_55(VAR_54, &(VAR_47[VAR_53]), (unsigned int)VAR_52);

                while (FUNC_30(VAR_54, VAR_51) == 129) {
                    FUNC_9(VAR_25, "LOOKUP renego during write\n");
                    FUNC_24(VAR_41.user);
                    VAR_41.user =
                        FUNC_23(VAR_41.vb,
                                               VAR_41.login);
                    if (VAR_41.user)
                        FUNC_9(VAR_25, "LOOKUP done %s\n",
                                   VAR_41.user->info);
                    else
                        FUNC_9(VAR_25, "LOOKUP not successful\n");
                    VAR_51 = FUNC_55(VAR_54, &(VAR_47[VAR_53]), (unsigned int)VAR_52);
                }

                switch (FUNC_30(VAR_54, VAR_51)) {
                case 136:
                    break;
                case 133:
                    FUNC_9(VAR_25, "Write BLOCK (Async)\n");
                    (void)FUNC_3(VAR_25);
                    FUNC_72(VAR_54);
                    break;
                case 130:
                case 131:
                case 129:
                    FUNC_9(VAR_25, "Write BLOCK\n");
                    (void)FUNC_3(VAR_25);
                    break;
                case 132:



                case 134:
                case 135:
                    FUNC_9(VAR_25, "ERROR\n");
                    (void)FUNC_3(VAR_25);
                    FUNC_19(VAR_23);
                    VAR_49 = 1;
                    goto err;

                case 128:
                    FUNC_9(VAR_25, "DONE\n");
                    (void)FUNC_3(VAR_25);
                    VAR_49 = 1;
                    goto err;
                }
                if (VAR_51 > 0) {
                    VAR_53 += VAR_51;
                    VAR_52 -= VAR_51;
                }
                if (VAR_52 <= 0)
                    break;
            }
        }
        if (VAR_64) {





            if ((!VAR_21 || !FUNC_54(VAR_54))
                    && !FUNC_36(VAR_54)) {
                VAR_52 = FUNC_63(VAR_54);

                if (VAR_52 < 0) {
                    VAR_49 = 0;
                    goto err;
                } else if (VAR_52 == 0) {
                    VAR_49 = 1;
                    goto err;
                }
            } else {
 again:
                VAR_52 = FUNC_39(VAR_54, (char *)VAR_47, VAR_26);

                while (FUNC_30(VAR_54, VAR_52) == 129) {
                    FUNC_9(VAR_25, "LOOKUP renego during read\n");
                    FUNC_24(VAR_41.user);
                    VAR_41.user =
                        FUNC_23(VAR_41.vb,
                                               VAR_41.login);
                    if (VAR_41.user)
                        FUNC_9(VAR_25, "LOOKUP done %s\n",
                                   VAR_41.user->info);
                    else
                        FUNC_9(VAR_25, "LOOKUP not successful\n");
                    VAR_52 = FUNC_39(VAR_54, (char *)VAR_47, VAR_26);
                }

                switch (FUNC_30(VAR_54, VAR_52)) {
                case 136:



                    FUNC_69(VAR_47, (unsigned int)VAR_52);
                    (void)FUNC_3(VAR_25);
                    if (FUNC_33(VAR_54))
                        goto again;
                    break;
                case 133:
                    FUNC_9(VAR_25, "Read BLOCK (Async)\n");
                    (void)FUNC_3(VAR_25);
                    FUNC_72(VAR_54);
                    break;
                case 130:
                case 131:
                    FUNC_9(VAR_25, "Read BLOCK\n");
                    (void)FUNC_3(VAR_25);
                    break;
                case 132:



                case 134:
                case 135:
                    FUNC_9(VAR_25, "ERROR\n");
                    (void)FUNC_3(VAR_25);
                    FUNC_19(VAR_23);
                    VAR_49 = 1;
                    goto err;
                case 128:
                    FUNC_9(VAR_25, "DONE\n");
                    (void)FUNC_3(VAR_25);
                    VAR_49 = 1;
                    goto err;
                }
            }
        }
    }
 err:
    if (VAR_54 != ((void*)0)) {
        FUNC_9(VAR_25, "shutting down SSL\n");
        FUNC_48(VAR_54, VAR_17 | VAR_16);
        FUNC_27(VAR_54);
    }
    FUNC_9(VAR_25, "CONNECTION CLOSED\n");
    FUNC_22(VAR_47, VAR_26);
    return VAR_49;
}
