
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;
typedef int BIGNUM ;


 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int **,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int,int *,int *,int *) ;
 int FUNC_6 (int **,char*) ;
 scalar_t__ FUNC_7 (int *,int,int *,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 char* FUNC_14 (int,char**,int ) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 char** FUNC_17 () ;
 int VAR_2 ;

int FUNC_18(int VAR_3, char **VAR_4)
{
    BIGNUM *VAR_5 = ((void*)0);
    int VAR_6 = 0, VAR_7 = 20, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 1;
    char *VAR_12;
    OPTION_CHOICE VAR_13;

    VAR_12 = FUNC_14(VAR_3, VAR_4, VAR_2);
    while ((VAR_13 = FUNC_15()) != 133) {
        switch (VAR_13) {
        case 133:
        case 132:
opthelp:
            FUNC_0(VAR_0, "%s: Use -help for summary.\n", VAR_12);
            goto end;
        case 130:
            FUNC_13(VAR_2);
            VAR_11 = 0;
            goto end;
        case 129:
            VAR_6 = 1;
            break;
        case 131:
            VAR_8 = 1;
            break;
        case 135:
            VAR_9 = FUNC_11(FUNC_12());
            break;
        case 128:
            VAR_10 = 1;
            break;
        case 134:
            VAR_7 = FUNC_11(FUNC_12());
            break;
        }
    }
    VAR_3 = FUNC_16();
    VAR_4 = FUNC_17();

    if (VAR_8) {
        if (VAR_3 != 0) {
            FUNC_0(VAR_0, "Extra arguments given.\n");
            goto opthelp;
        }
    } else if (VAR_3 == 0) {
        FUNC_0(VAR_0, "%s: No prime specified\n", VAR_12);
        goto opthelp;
    }

    if (VAR_8) {
        char *VAR_14;

        if (!VAR_9) {
            FUNC_0(VAR_0, "Specify the number of bits.\n");
            goto end;
        }
        VAR_5 = FUNC_8();
        if (VAR_5 == ((void*)0)) {
            FUNC_0(VAR_0, "Out of memory.\n");
            goto end;
        }
        if (!FUNC_5(VAR_5, VAR_9, VAR_10, ((void*)0), ((void*)0), ((void*)0))) {
            FUNC_0(VAR_0, "Failed to generate prime.\n");
            goto end;
        }
        VAR_14 = VAR_6 ? FUNC_2(VAR_5) : FUNC_1(VAR_5);
        if (VAR_14 == ((void*)0)) {
            FUNC_0(VAR_0, "Out of memory.\n");
            goto end;
        }
        FUNC_0(VAR_1, "%s\n", VAR_14);
        FUNC_10(VAR_14);
    } else {
        for ( ; *VAR_4; VAR_4++) {
            int VAR_15;

            if (VAR_6)
                VAR_15 = FUNC_6(&VAR_5, VAR_4[0]);
            else
                VAR_15 = FUNC_3(&VAR_5, VAR_4[0]);

            if (!VAR_15) {
                FUNC_0(VAR_0, "Failed to process value (%s)\n", VAR_4[0]);
                goto end;
            }

            FUNC_9(VAR_1, VAR_5);
            FUNC_0(VAR_1, " (%s) %s prime\n",
                       VAR_4[0],
                       FUNC_7(VAR_5, VAR_7, ((void*)0), ((void*)0))
                           ? "is" : "is not");
        }
    }

    VAR_11 = 0;
 end:
    FUNC_4(VAR_5);
    return VAR_11;
}
