
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buf ;
struct TYPE_2__ {int depth; } ;
typedef int SSL_METHOD ;
typedef int SSL_CTX ;
typedef int SSL ;
typedef int OPTION_CHOICE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,int,int ,char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int const*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,char*,int) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_19 () ;
 int VAR_10 ;
 int FUNC_20 (int *,char*,char*,int,int) ;
 int * FUNC_21 (int *,char*,int *) ;
 int FUNC_22 (int ) ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_23 (int,int ) ;
 char* FUNC_24 (char*) ;
 char* FUNC_25 () ;
 int FUNC_26 (int ) ;
 char* FUNC_27 (int,char**,int ) ;
 int FUNC_28 (char*,int*) ;
 int FUNC_29 () ;
 int FUNC_30 () ;
 int FUNC_31 (char*,...) ;
 int VAR_13 ;
 int FUNC_32 (int *,char*,char*) ;
 int FUNC_33 (char*) ;
 int VAR_14 ;
 size_t FUNC_34 (char*) ;
 scalar_t__ FUNC_35 (int *) ;
 double FUNC_36 (int ) ;
 TYPE_1__ VAR_15 ;

int FUNC_37(int VAR_16, char **VAR_17)
{
    char VAR_18[1024 * 8];
    SSL *VAR_19 = ((void*)0);
    SSL_CTX *VAR_20 = ((void*)0);
    const SSL_METHOD *VAR_21 = ((void*)0);
    char *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);
    char *VAR_26 = ((void*)0);
    char *VAR_27 = VAR_2, *VAR_28 = ((void*)0), *VAR_29 = ((void*)0), *VAR_30;
    double VAR_31 = 0.0;
    int VAR_32 = 0, VAR_33 = 0;
    int VAR_34 = VAR_0, VAR_35 = 0, VAR_36 = 3, VAR_37 = 1, VAR_38, VAR_39 = 0;
    long VAR_40 = 0, VAR_41 = 0;
    OPTION_CHOICE VAR_42;
    int VAR_43 = 0, VAR_44, VAR_45;
    size_t VAR_46;

    VAR_21 = FUNC_19();

    VAR_30 = FUNC_27(VAR_16, VAR_17, VAR_13);
    while ((VAR_42 = FUNC_29()) != 140) {
        switch (VAR_42) {
        case 140:
        case 139:
 opthelp:
            FUNC_1(VAR_10, "%s: Use -help for summary.\n", VAR_30);
            goto end;
        case 138:
            FUNC_26(VAR_13);
            VAR_37 = 0;
            goto end;
        case 141:
            VAR_27 = FUNC_25();
            break;
        case 132:
            VAR_36 = 2;
            break;
        case 135:
            VAR_36 = 1;
            break;
        case 129:
            if (!FUNC_28(FUNC_25(), &VAR_15.depth))
                goto opthelp;
            FUNC_1(VAR_10, "%s: verify depth is %d\n",
                       VAR_30, VAR_15.depth);
            break;
        case 144:
            VAR_28 = FUNC_25();
            break;
        case 136:
            if (!FUNC_33(FUNC_25()))
                goto end;
            break;
        case 137:
            VAR_29 = FUNC_25();
            break;
        case 145:
            VAR_22 = FUNC_25();
            break;
        case 146:
            VAR_23 = FUNC_25();
            break;
        case 133:
            VAR_32 = 1;
            break;
        case 134:
            VAR_33 = 1;
            break;
        case 143:
            VAR_24 = FUNC_25();
            break;
        case 142:
            VAR_25 = FUNC_25();
            break;
        case 147:
            VAR_39 = 1;
            break;
        case 130:
            if (!FUNC_28(FUNC_25(), &VAR_34))
                goto opthelp;
            break;
        case 128:
            VAR_26 = FUNC_25();
            VAR_46 = FUNC_34(VAR_26) + VAR_12;
            if (VAR_46 > sizeof(VAR_18)) {
                FUNC_1(VAR_10, "%s: -www option is too long\n", VAR_30);
                goto end;
            }
            break;
        case 131:
            VAR_43 = VAR_1;
            break;
        }
    }
    VAR_16 = FUNC_30();
    if (VAR_16 != 0)
        goto opthelp;

    if (VAR_24 == ((void*)0))
        VAR_24 = FUNC_24("SSL_CIPHER");

    if ((VAR_20 = FUNC_5(VAR_21)) == ((void*)0))
        goto end;

    FUNC_9(VAR_20, VAR_3);
    FUNC_11(VAR_20, 1);
    if (FUNC_8(VAR_20, VAR_43) == 0)
        goto end;

    if (VAR_39)
        FUNC_10(VAR_20, VAR_4);
    if (VAR_24 != ((void*)0) && !FUNC_6(VAR_20, VAR_24))
        goto end;
    if (VAR_25 != ((void*)0) && !FUNC_7(VAR_20, VAR_25))
        goto end;
    if (!FUNC_32(VAR_20, VAR_28, VAR_29))
        goto end;

    if (!FUNC_20(VAR_20, VAR_23, VAR_22, VAR_33, VAR_32)) {
        FUNC_3(VAR_10);
        goto end;
    }
    if (!(VAR_36 & 1))
        goto next;
    FUNC_31("Collecting connection statistics for %d seconds\n", VAR_34);



    VAR_40 = 0;
    VAR_41 = (long)FUNC_35(((void*)0)) + VAR_34;
    FUNC_36(VAR_7);
    for (;;) {
        if (VAR_41 < (long)FUNC_35(((void*)0)))
            break;

        if ((VAR_19 = FUNC_21(((void*)0), VAR_27, VAR_20)) == ((void*)0))
            goto end;

        if (VAR_26 != ((void*)0)) {
            VAR_45 = FUNC_2(VAR_18, sizeof(VAR_18), VAR_11,
                                   VAR_26);
            if (VAR_45 <= 0 || FUNC_18(VAR_19, VAR_18, VAR_45) <= 0)
                goto end;
            while ((VAR_38 = FUNC_14(VAR_19, VAR_18, sizeof(VAR_18))) > 0)
                VAR_40 += VAR_38;
        }
        FUNC_16(VAR_19, VAR_6 | VAR_5);
        FUNC_0(FUNC_13(VAR_19));

        VAR_35 += 1;
        if (FUNC_15(VAR_19)) {
            VAR_44 = 'r';
        } else {
            VAR_44 = FUNC_17(VAR_19);
            if (VAR_44 == VAR_9)
                VAR_44 = 't';
            else if (VAR_44 == VAR_1)
                VAR_44 = '3';
            else
                VAR_44 = '*';
        }
        FUNC_23(VAR_44, VAR_14);
        FUNC_22(VAR_14);

        FUNC_12(VAR_19);
        VAR_19 = ((void*)0);
    }
    VAR_31 += FUNC_36(VAR_8);

    VAR_38 = (int)((long)FUNC_35(((void*)0)) - VAR_41 + VAR_34);
    FUNC_31
        ("\n\n%d connections in %.2fs; %.2f connections/user sec, bytes read %ld\n",
         VAR_35, VAR_31, ((double)VAR_35 / VAR_31), VAR_40);
    FUNC_31
        ("%d connections in %ld real seconds, %ld bytes read per connection\n",
         VAR_35, (long)FUNC_35(((void*)0)) - VAR_41 + VAR_34, VAR_40 / VAR_35);





 next:
    if (!(VAR_36 & 2))
        goto end;
    FUNC_31("\n\nNow timing with session id reuse.\n");


    if ((VAR_19 = FUNC_21(((void*)0), VAR_27, VAR_20)) == ((void*)0)) {
        FUNC_1(VAR_10, "Unable to get connection\n");
        goto end;
    }

    if (VAR_26 != ((void*)0)) {
        VAR_45 = FUNC_2(VAR_18, sizeof(VAR_18), VAR_11, VAR_26);
        if (VAR_45 <= 0 || FUNC_18(VAR_19, VAR_18, VAR_45) <= 0)
            goto end;
        while ((VAR_38 = FUNC_14(VAR_19, VAR_18, sizeof(VAR_18))) > 0)
            continue;
    }
    FUNC_16(VAR_19, VAR_6 | VAR_5);
    FUNC_0(FUNC_13(VAR_19));

    VAR_35 = 0;
    VAR_31 = 0.0;

    VAR_41 = (long)FUNC_35(((void*)0)) + VAR_34;

    FUNC_31("starting\n");
    VAR_40 = 0;
    FUNC_36(VAR_7);

    for (;;) {
        if (VAR_41 < (long)FUNC_35(((void*)0)))
            break;

        if ((FUNC_21(VAR_19, VAR_27, VAR_20)) == ((void*)0))
            goto end;

        if (VAR_26 != ((void*)0)) {
            VAR_45 = FUNC_2(VAR_18, sizeof(VAR_18), VAR_11,
                                   VAR_26);
            if (VAR_45 <= 0 || FUNC_18(VAR_19, VAR_18, VAR_45) <= 0)
                goto end;
            while ((VAR_38 = FUNC_14(VAR_19, VAR_18, sizeof(VAR_18))) > 0)
                VAR_40 += VAR_38;
        }
        FUNC_16(VAR_19, VAR_6 | VAR_5);
        FUNC_0(FUNC_13(VAR_19));

        VAR_35 += 1;
        if (FUNC_15(VAR_19)) {
            VAR_44 = 'r';
        } else {
            VAR_44 = FUNC_17(VAR_19);
            if (VAR_44 == VAR_9)
                VAR_44 = 't';
            else if (VAR_44 == VAR_1)
                VAR_44 = '3';
            else
                VAR_44 = '*';
        }
        FUNC_23(VAR_44, VAR_14);
        FUNC_22(VAR_14);
    }
    VAR_31 += FUNC_36(VAR_8);

    FUNC_31
        ("\n\n%d connections in %.2fs; %.2f connections/user sec, bytes read %ld\n",
         VAR_35, VAR_31, ((double)VAR_35 / VAR_31), VAR_40);
    FUNC_31
        ("%d connections in %ld real seconds, %ld bytes read per connection\n",
         VAR_35, (long)FUNC_35(((void*)0)) - VAR_41 + VAR_34, VAR_40 / VAR_35);

    VAR_37 = 0;

 end:
    FUNC_12(VAR_19);
    FUNC_4(VAR_20);
    return VAR_37;
}
