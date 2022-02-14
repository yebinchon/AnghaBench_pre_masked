
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OPTION_CHOICE ;


 char* FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 char* FUNC_2 () ;
 char* FUNC_3 () ;


 char* FUNC_4 () ;
 char* FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 char* FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (int,char**,int ) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*,char const**) ;
 int VAR_9 ;

int FUNC_15(int VAR_10, char **VAR_11)
{
    int VAR_12 = 1, VAR_13 = 0, VAR_14 = 0;
    int VAR_15 = 0, VAR_16 = 0, VAR_17 = 0, VAR_18 = 0, VAR_19 = 0, VAR_20 = 0;
    int VAR_21 = 0;
    char *VAR_22;
    OPTION_CHOICE VAR_23;

    VAR_22 = FUNC_10(VAR_10, VAR_11, VAR_9);
    while ((VAR_23 = FUNC_11()) != 135) {
        switch (VAR_23) {
        case 135:
        case 134:
opthelp:
            FUNC_1(VAR_8, "%s: Use -help for summary.\n", VAR_22);
            goto end;
        case 132:
            FUNC_9(VAR_9);
            VAR_12 = 0;
            goto end;
        case 138:
            VAR_13 = VAR_17 = 1;
            break;
        case 137:
            VAR_13 = VAR_20 = 1;
            break;
        case 136:
            VAR_13 = VAR_21 = 1;
            break;
        case 133:
            VAR_13 = VAR_15 = 1;
            break;
        case 131:
            VAR_13 = VAR_18 = 1;
            break;
        case 130:
            VAR_13 = VAR_19 = 1;
            break;
        case 129:
            VAR_13 = VAR_14 = 1;
            break;
        case 128:
            VAR_13 = VAR_16 = 1;
            break;
        case 139:
            VAR_14 = VAR_18 = VAR_15 = VAR_16 = VAR_17 = VAR_19 = VAR_20 = VAR_21
                = 1;
            break;
        }
    }
    if (FUNC_12() != 0) {
        FUNC_1(VAR_8, "Extra parameters given.\n");
        goto opthelp;
    }
    if (!VAR_13)
        VAR_16 = 1;

    if (VAR_16) {
        if (FUNC_7() == VAR_6)
            FUNC_13("%s\n", FUNC_6(VAR_5));
        else
            FUNC_13("%s (Library: %s)\n",
                   VAR_7, FUNC_6(VAR_5));
    }
    if (VAR_17)
        FUNC_13("%s\n", FUNC_6(VAR_0));
    if (VAR_19)
        FUNC_13("%s\n", FUNC_6(VAR_4));
    if (VAR_18) {
        FUNC_13("options:  ");
        FUNC_13("%s ", FUNC_2());

        FUNC_13("%s ", FUNC_5());


        FUNC_13("%s ", FUNC_8());


        FUNC_13("%s ", FUNC_3());


        FUNC_13("%s ", FUNC_4());


        FUNC_13("%s ", FUNC_0());

        FUNC_13("\n");
    }
    if (VAR_15)
        FUNC_13("%s\n", FUNC_6(VAR_1));
    if (VAR_20)
        FUNC_13("%s\n", FUNC_6(VAR_2));
    if (VAR_21)
        FUNC_13("%s\n", FUNC_6(VAR_3));
    if (VAR_14) {
        FUNC_13("Seeding source:");
        FUNC_13("\n");
    }
    VAR_12 = 0;
 end:
    return VAR_12;
}
