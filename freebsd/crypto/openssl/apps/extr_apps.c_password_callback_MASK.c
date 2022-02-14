
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UI ;
struct TYPE_4__ {char* prompt_info; } ;
typedef TYPE_1__ PW_CB_DATA ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,char*,int,char*,int ,int) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,char*,int,char*,int ,int,char*) ;
 char* FUNC_8 (int *,char*,char const*) ;
 scalar_t__ FUNC_9 (int *,int ,int,int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 char* FUNC_13 (int,char*) ;
 int VAR_4 ;
 int FUNC_14 (char*) ;
 int VAR_5 ;

int FUNC_15(char *VAR_6, int VAR_7, int VAR_8, PW_CB_DATA *VAR_9)
{
    int VAR_10 = 0;
    UI *VAR_11 = ((void*)0);
    PW_CB_DATA *VAR_12 = (PW_CB_DATA *)VAR_9;

    VAR_11 = FUNC_11(VAR_5);
    if (VAR_11) {
        int VAR_13 = 0;
        char *VAR_14 = ((void*)0);
        int VAR_15 = 0;
        const char *VAR_16 = ((void*)0);
        char *VAR_17;

        if (VAR_12 != ((void*)0) && VAR_12->prompt_info != ((void*)0))
            VAR_16 = VAR_12->prompt_info;
        VAR_17 = FUNC_8(VAR_11, "pass phrase", VAR_16);
        if (!VAR_17) {
            FUNC_0(VAR_4, "Out of memory\n");
            FUNC_10(VAR_11);
            return 0;
        }

        VAR_15 |= VAR_3;
        FUNC_9(VAR_11, VAR_2, 1, 0, 0);


        (void)FUNC_6(VAR_11, VAR_12);

        VAR_13 = FUNC_5(VAR_11, VAR_17, VAR_15, VAR_6,
                                 VAR_0, VAR_7 - 1);

        if (VAR_13 >= 0 && VAR_8) {
            VAR_14 = FUNC_13(VAR_7, "password buffer");
            VAR_13 = FUNC_7(VAR_11, VAR_17, VAR_15, VAR_14,
                                      VAR_0, VAR_7 - 1, VAR_6);
        }
        if (VAR_13 >= 0)
            do {
                VAR_13 = FUNC_12(VAR_11);
            } while (VAR_13 < 0 && FUNC_9(VAR_11, VAR_1, 0, 0, 0));

        FUNC_3(VAR_14, (unsigned int)VAR_7);

        if (VAR_13 >= 0)
            VAR_10 = FUNC_14(VAR_6);
        if (VAR_13 == -1) {
            FUNC_0(VAR_4, "User interface error\n");
            FUNC_1(VAR_4);
            FUNC_2(VAR_6, (unsigned int)VAR_7);
            VAR_10 = 0;
        }
        if (VAR_13 == -2) {
            FUNC_0(VAR_4, "aborted!\n");
            FUNC_2(VAR_6, (unsigned int)VAR_7);
            VAR_10 = 0;
        }
        FUNC_10(VAR_11);
        FUNC_4(VAR_17);
    }
    return VAR_10;
}
