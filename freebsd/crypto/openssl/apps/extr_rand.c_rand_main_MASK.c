
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int OPTION_CHOICE ;
typedef int ENGINE ;
typedef int BIO ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,unsigned char*,int) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (unsigned char*,int) ;
 int VAR_3 ;
 int * FUNC_10 (char*,char,int) ;
 char* FUNC_11 () ;
 int FUNC_12 (int ) ;
 char* FUNC_13 (int,char**,int ) ;
 int FUNC_14 (char*,int*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;
 char** FUNC_18 () ;
 int VAR_4 ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (char*,int ) ;

int FUNC_21(int VAR_5, char **VAR_6)
{
    ENGINE *VAR_7 = ((void*)0);
    BIO *VAR_8 = ((void*)0);
    char *VAR_9 = ((void*)0), *VAR_10;
    OPTION_CHOICE VAR_11;
    int VAR_12 = VAR_1, VAR_13, VAR_14 = -1, VAR_15, VAR_16 = 1;

    VAR_10 = FUNC_13(VAR_5, VAR_6, VAR_4);
    while ((VAR_11 = FUNC_15()) != 133) {
        switch (VAR_11) {
        case 133:
        case 132:
 opthelp:
            FUNC_4(&VAR_3, "%s: Use -help for summary.\n", VAR_10);
            goto end;
        case 131:
            FUNC_12(VAR_4);
            VAR_16 = 0;
            goto end;
        case 129:
            VAR_9 = FUNC_11();
            break;
        case 134:
            VAR_7 = FUNC_20(FUNC_11(), 0);
            break;
        case 128:
            if (!FUNC_17(VAR_11))
                goto end;
            break;
        case 135:
            VAR_12 = VAR_0;
            break;
        case 130:
            VAR_12 = VAR_2;
            break;
        }
    }
    VAR_5 = FUNC_16();
    VAR_6 = FUNC_18();
    if (VAR_5 == 1) {
        if (!FUNC_14(VAR_6[0], &VAR_14) || VAR_14 <= 0)
            goto end;
    } else if (VAR_5 > 0) {
        FUNC_4(&VAR_3, "Extra arguments given.\n");
        goto opthelp;
    }

    VAR_8 = FUNC_10(VAR_9, 'w', VAR_12);
    if (VAR_8 == ((void*)0))
        goto end;

    if (VAR_12 == VAR_0) {
        BIO *VAR_17 = FUNC_3(FUNC_0());
        if (VAR_17 == ((void*)0))
            goto end;
        VAR_8 = FUNC_5(VAR_17, VAR_8);
    }

    while (VAR_14 > 0) {
        unsigned char VAR_18[4096];
        int VAR_19;

        VAR_19 = VAR_14;
        if (VAR_19 > (int)sizeof(VAR_18))
            VAR_19 = sizeof(VAR_18);
        VAR_15 = FUNC_9(VAR_18, VAR_19);
        if (VAR_15 <= 0)
            goto end;
        if (VAR_12 != VAR_2) {
            if (FUNC_7(VAR_8, VAR_18, VAR_19) != VAR_19)
                goto end;
        } else {
            for (VAR_13 = 0; VAR_13 < VAR_19; VAR_13++)
                if (FUNC_4(VAR_8, "%02x", VAR_18[VAR_13]) != 2)
                    goto end;
        }
        VAR_14 -= VAR_19;
    }
    if (VAR_12 == VAR_2)
        FUNC_6(VAR_8, "\n");
    if (FUNC_1(VAR_8) <= 0)
        goto end;

    VAR_16 = 0;

 end:
    if (VAR_16 != 0)
        FUNC_8(VAR_3);
    FUNC_19(VAR_7);
    FUNC_2(VAR_8);
    return VAR_16;
}
