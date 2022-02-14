
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* spkac; } ;
struct TYPE_12__ {int challenge; } ;
typedef int OPTION_CHOICE ;
typedef TYPE_2__ NETSCAPE_SPKI ;
typedef int EVP_PKEY ;
typedef int ENGINE ;
typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (int *,char const*,char const*) ;
 TYPE_2__* FUNC_8 (char*,int) ;
 char* FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int * FUNC_11 (TYPE_2__*) ;
 TYPE_2__* FUNC_12 () ;
 int FUNC_13 (int *,TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int *) ;
 int FUNC_15 (TYPE_2__*,int *,int ) ;
 int FUNC_16 (TYPE_2__*,int *) ;
 int FUNC_17 (char*) ;




 int VAR_2 ;
 int FUNC_18 (int *,int *) ;
 int * FUNC_19 (char*) ;
 int FUNC_20 (char*,int *,char**,int *) ;
 int VAR_3 ;
 int * FUNC_21 (char*,char,int ) ;
 int * FUNC_22 (char*,int,int,char*,int *,char*) ;
 void* FUNC_23 () ;
 int FUNC_24 (void*,int ,int*) ;
 int FUNC_25 (int ) ;
 char* FUNC_26 (int,char**,int ) ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 (int *) ;
 int * FUNC_30 (void*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_31 (char*,char*) ;
 scalar_t__ FUNC_32 (char*) ;

int FUNC_33(int VAR_5, char **VAR_6)
{
    BIO *VAR_7 = ((void*)0);
    CONF *VAR_8 = ((void*)0);
    ENGINE *VAR_9 = ((void*)0);
    EVP_PKEY *VAR_10 = ((void*)0);
    NETSCAPE_SPKI *VAR_11 = ((void*)0);
    char *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
    char *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    char *VAR_18 = ((void*)0), *VAR_19;
    const char *VAR_20 = "SPKAC", *VAR_21 = "default";
    int VAR_22, VAR_23 = 1, VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
    int VAR_27 = VAR_0;
    OPTION_CHOICE VAR_28;

    VAR_19 = FUNC_26(VAR_5, VAR_6, VAR_4);
    while ((VAR_28 = FUNC_27()) != 140) {
        switch (VAR_28) {
        case 140:
        case 139:
 opthelp:
            FUNC_2(VAR_3, "%s: Use -help for summary.\n", VAR_19);
            goto end;
        case 138:
            FUNC_25(VAR_4);
            VAR_23 = 0;
            goto end;
        case 137:
            VAR_14 = FUNC_23();
            break;
        case 133:
            VAR_15 = FUNC_23();
            break;
        case 134:
            VAR_25 = 1;
            break;
        case 131:
            VAR_26 = 1;
            break;
        case 128:
            VAR_24 = 1;
            break;
        case 132:
            VAR_16 = FUNC_23();
            break;
        case 136:
            VAR_13 = FUNC_23();
            break;
        case 135:
            if (!FUNC_24(FUNC_23(), VAR_2, &VAR_27))
                goto opthelp;
            break;
        case 142:
            VAR_12 = FUNC_23();
            break;
        case 130:
            VAR_20 = FUNC_23();
            break;
        case 129:
            VAR_21 = FUNC_23();
            break;
        case 141:
            VAR_9 = FUNC_30(FUNC_23(), 0);
            break;
        }
    }
    VAR_5 = FUNC_28();
    if (VAR_5 != 0)
        goto opthelp;

    if (!FUNC_20(VAR_16, ((void*)0), &VAR_17, ((void*)0))) {
        FUNC_2(VAR_3, "Error getting password\n");
        goto end;
    }

    if (VAR_13 != ((void*)0)) {
        VAR_10 = FUNC_22(FUNC_31(VAR_13, "-") ? VAR_13 : ((void*)0),
                        VAR_27, 1, VAR_17, VAR_9, "private key");
        if (VAR_10 == ((void*)0))
            goto end;
        VAR_11 = FUNC_12();
        if (VAR_11 == ((void*)0))
            goto end;
        if (VAR_12 != ((void*)0))
            FUNC_0(VAR_11->spkac->challenge,
                            VAR_12, (int)FUNC_32(VAR_12));
        FUNC_14(VAR_11, VAR_10);
        FUNC_15(VAR_11, VAR_10, FUNC_5());
        VAR_18 = FUNC_9(VAR_11);
        if (VAR_18 == ((void*)0))
            goto end;

        VAR_7 = FUNC_21(VAR_15, 'w', VAR_1);
        if (VAR_7 == ((void*)0)) {
            FUNC_17(VAR_18);
            goto end;
        }
        FUNC_2(*VAR_7, "SPKAC=%s\n", VAR_18);
        FUNC_17(VAR_18);
        VAR_23 = 0;
        goto end;
    }

    if ((VAR_8 = FUNC_19(VAR_14)) == ((void*)0))
        goto end;

    VAR_18 = FUNC_7(VAR_8, VAR_21, VAR_20);

    if (VAR_18 == ((void*)0)) {
        FUNC_2(VAR_3, "Can't find SPKAC called \"%s\"\n", VAR_20);
        FUNC_3(VAR_3);
        goto end;
    }

    VAR_11 = FUNC_8(VAR_18, -1);

    if (VAR_11 == ((void*)0)) {
        FUNC_2(VAR_3, "Error loading SPKAC\n");
        FUNC_3(VAR_3);
        goto end;
    }

    VAR_7 = FUNC_21(VAR_15, 'w', VAR_1);
    if (VAR_7 == ((void*)0))
        goto end;

    if (!VAR_25)
        FUNC_13(VAR_7, VAR_11);
    VAR_10 = FUNC_11(VAR_11);
    if (VAR_24) {
        VAR_22 = FUNC_16(VAR_11, VAR_10);
        if (VAR_22 > 0) {
            FUNC_2(VAR_3, "Signature OK\n");
        } else {
            FUNC_2(VAR_3, "Signature Failure\n");
            FUNC_3(VAR_3);
            goto end;
        }
    }
    if (VAR_26)
        FUNC_18(VAR_7, VAR_10);

    VAR_23 = 0;

 end:
    FUNC_6(VAR_8);
    FUNC_10(VAR_11);
    FUNC_1(VAR_7);
    FUNC_4(VAR_10);
    FUNC_29(VAR_9);
    FUNC_17(VAR_17);
    return VAR_23;
}
