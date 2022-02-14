
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_VERIFY_PARAM ;
typedef int OPTION_CHOICE ;
typedef int EVP_MD ;
typedef int CONF ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int *,char**,int *) ;
 int VAR_0 ;
 char const* VAR_1 ;
 int * FUNC_8 (char const*) ;
 void* FUNC_9 () ;
 int FUNC_10 (int ) ;
 char** VAR_2 ;
 char* FUNC_11 (int,char**,int ) ;
 int FUNC_12 (int ,int const**) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (int,int *) ;
 int FUNC_18 (char*,char*,int const*,char*,int,int,char*,char*,int) ;
 int FUNC_19 (int *,char const*,char const*,char*,char*,char*,int const*,char*,char*,char*,char*,int,char*,int,int) ;
 int VAR_3 ;
 int FUNC_20 (char*,char*,char*,char*,int,char*,char const*,char const*,int *) ;

int FUNC_21(int VAR_4, char **VAR_5)
{
    CONF *VAR_6 = ((void*)0);
    const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9;
    const char *VAR_10 = VAR_1, *VAR_11 = ((void*)0);
    const char *VAR_12 = ((void*)0);
    char **VAR_13;
    char *VAR_14 = ((void*)0);
    char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    char *VAR_18 = ((void*)0), *VAR_19 = ((void*)0), *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
    char *VAR_22 = ((void*)0), *VAR_23 = ((void*)0), *VAR_24 = ((void*)0), *VAR_25 = ((void*)0);
    const EVP_MD *VAR_26 = ((void*)0);
    OPTION_CHOICE VAR_27, VAR_28 = 148;
    int VAR_29 = 1, VAR_30 = 0, VAR_31 = 0, VAR_32 = 0;
    int VAR_33 = 0;
    X509_VERIFY_PARAM *VAR_34 = ((void*)0);

    int VAR_35 = 0;

    int VAR_36 = 0;

    if ((VAR_34 = FUNC_5()) == ((void*)0))
        goto end;

    VAR_9 = FUNC_11(VAR_4, VAR_5, VAR_3);
    while ((VAR_27 = FUNC_13()) != 149) {
        switch (VAR_27) {
        case 149:
        case 148:
 opthelp:
            FUNC_0(VAR_0, "%s: Use -help for summary.\n", VAR_9);
            goto end;
        case 147:
            FUNC_10(VAR_3);
            for (VAR_13 = VAR_2; *VAR_13; ++VAR_13)
                FUNC_0(VAR_0, "%s\n", *VAR_13);
            VAR_29 = 0;
            goto end;
        case 153:
            VAR_10 = FUNC_9();
            break;
        case 136:
            VAR_12 = FUNC_9();
            break;
        case 140:
        case 138:
        case 129:
            if (VAR_28 != 148)
                goto opthelp;
            VAR_28 = VAR_27;
            break;
        case 152:
            VAR_15 = FUNC_9();
            break;
        case 151:
            VAR_16 = FUNC_9();
            break;
        case 137:
            if (!FUNC_15(VAR_27))
                goto end;
            break;
        case 131:
            VAR_17 = FUNC_9();
            break;
        case 143:
            VAR_30 = 1;
            break;
        case 155:
            VAR_31 = 1;
            break;
        case 146:
            VAR_18 = FUNC_9();
            break;
        case 133:
            VAR_35 = 1;
            break;
        case 142:
            VAR_19 = FUNC_9();
            break;
        case 132:
            VAR_36 = 1;
            break;
        case 134:
            VAR_32 = 1;
            break;
        case 139:
            VAR_20 = FUNC_9();
            break;
        case 141:
            VAR_21 = FUNC_9();
            break;
        case 145:
            VAR_22 = FUNC_9();
            break;
        case 135:
            VAR_23 = FUNC_9();
            break;
        case 154:
            VAR_24 = FUNC_9();
            break;
        case 156:
            VAR_25 = FUNC_9();
            break;
        case 157:
            VAR_7 = FUNC_9();
            break;
        case 130:
            VAR_8 = FUNC_9();
            break;
        case 150:
            VAR_11 = FUNC_9();
            break;
        case 144:
            if (!FUNC_12(FUNC_16(), &VAR_26))
                goto opthelp;
            break;
        case 128:
            if (!FUNC_17(VAR_27, VAR_34))
                goto end;
            VAR_33++;
            break;
        }
    }
    if (VAR_28 == 148 || FUNC_14() != 0)
        goto opthelp;

    if (VAR_28 == 138 && VAR_21 &&
        !FUNC_7(VAR_21, ((void*)0), &VAR_14, ((void*)0))) {
        FUNC_0(VAR_0, "Error getting password.\n");
        goto end;
    }

    VAR_6 = FUNC_8(VAR_10);
    if (VAR_10 != VAR_1 && !FUNC_6(VAR_6))
        goto end;


    if (VAR_28 == 140) {
        if (VAR_33)
            goto opthelp;
        if ((VAR_15 != ((void*)0)) && (VAR_16 != ((void*)0)))
            goto opthelp;
        VAR_29 = !FUNC_18(VAR_15, VAR_16, VAR_26, VAR_17, VAR_30, VAR_31,
                             VAR_18, VAR_19, VAR_32);
    } else if (VAR_28 == 138) {
        if (VAR_33)
            goto opthelp;
        if ((VAR_18 != ((void*)0)) && (VAR_20 != ((void*)0)))
            goto opthelp;
        if (VAR_18 == ((void*)0)) {
            if ((VAR_6 == ((void*)0)) || (VAR_35 != 0))
                goto opthelp;
        }
        VAR_29 = !FUNC_19(VAR_6, VAR_12, VAR_11, VAR_20,
                             VAR_14, VAR_22, VAR_26, VAR_23, VAR_24, VAR_17,
                             VAR_18, VAR_35, VAR_19, VAR_36, VAR_32);

    } else if (VAR_28 == 129) {
        if ((VAR_18 == ((void*)0)) || !FUNC_1(VAR_20, VAR_15, VAR_16))
            goto opthelp;
        VAR_29 = !FUNC_20(VAR_15, VAR_16, VAR_20, VAR_18, VAR_35,
                              VAR_25, VAR_7, VAR_8,
                              VAR_33 ? VAR_34 : ((void*)0));
    } else {
        goto opthelp;
    }

 end:
    FUNC_4(VAR_34);
    FUNC_2(VAR_6);
    FUNC_3(VAR_14);
    return VAR_29;
}
