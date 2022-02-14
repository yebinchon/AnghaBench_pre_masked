
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HELPLIST_CHOICE ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 char* FUNC_11 (int,char**,int ) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;

int FUNC_14(int VAR_8, char **VAR_9)
{
    char *VAR_10;
    HELPLIST_CHOICE VAR_11;
    int VAR_12 = 0, VAR_13 = 0;

    VAR_10 = FUNC_11(VAR_8, VAR_9, VAR_7);
    while ((VAR_11 = FUNC_12()) != 135) {
        switch (VAR_11) {
        case 135:
        case 134:
opthelp:
            FUNC_0(VAR_3, "%s: Use -help for summary.\n", VAR_10);
            return 1;
        case 133:
            FUNC_10(VAR_7);
            break;
        case 131:
            VAR_12 = 1;
            break;
        case 139:
            FUNC_8(VAR_1, VAR_12);
            break;
        case 137:
            FUNC_8(VAR_2, VAR_12);
            break;
        case 138:
            FUNC_2(VAR_6, VAR_4);
            break;
        case 140:
            FUNC_8(VAR_0, VAR_12);
            break;
        case 141:
            FUNC_1(VAR_5, VAR_4);
            break;
        case 129:
            FUNC_6();
            break;
        case 128:
            FUNC_7();
            break;
        case 136:
            FUNC_3();
            break;
        case 132:
            FUNC_4();
            break;
        case 130:
            FUNC_5(FUNC_9());
            break;
        }
        VAR_13 = 1;
    }
    if (FUNC_13() != 0) {
        FUNC_0(VAR_3, "Extra arguments given.\n");
        goto opthelp;
    }

    if (!VAR_13)
        goto opthelp;

    return 0;
}
