
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum Hash { ____Placeholder_Hash } Hash ;
typedef int OPTION_CHOICE ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*) ;







 char* FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 char* FUNC_10 (int,char**,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 char** FUNC_13 () ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_14 (char*,char*) ;
 int VAR_9 ;

int FUNC_15(int VAR_10, char **VAR_11)
{
    const char *VAR_12, *VAR_13;
    char *VAR_14, *VAR_15;
    int VAR_16 = 0;
    OPTION_CHOICE VAR_17;
    enum Hash VAR_18 = VAR_1;

    VAR_13 = FUNC_10(VAR_10, VAR_11, VAR_7);
    while ((VAR_17 = FUNC_11()) != 133) {
        switch (VAR_17) {
        case 133:
        case 132:
            FUNC_0(VAR_4, "%s: Use -help for summary.\n", VAR_13);
            goto end;
        case 131:
            FUNC_9(VAR_7);
            goto end;
        case 134:
            VAR_18 = VAR_0;
            break;
        case 129:
            VAR_18 = VAR_2;
            break;
        case 130:
            VAR_8 = 0;
            break;
        case 128:
            VAR_9 = 1;
            break;
        }
    }
    VAR_10 = FUNC_12();
    VAR_11 = FUNC_13();

    VAR_5 = FUNC_2();
    VAR_6 = FUNC_1(VAR_5);

    if (*VAR_11 != ((void*)0)) {
        while (*VAR_11 != ((void*)0))
            VAR_16 += FUNC_7(*VAR_11++, VAR_18);
    } else if ((VAR_12 = FUNC_8(FUNC_6())) != ((void*)0)) {
        char VAR_19[2] = { VAR_3, '\0' };
        VAR_15 = FUNC_4(VAR_12);
        for (VAR_14 = FUNC_14(VAR_15, VAR_19); VAR_14 != ((void*)0); VAR_14 = FUNC_14(((void*)0), VAR_19))
            VAR_16 += FUNC_7(VAR_14, VAR_18);
        FUNC_3(VAR_15);
    } else {
        VAR_16 += FUNC_7(FUNC_5(), VAR_18);
    }

 end:
    return VAR_16;
}
