
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ZSTD_CDict ;


 int FUNC_0 (int * const) ;
 int FUNC_1 (char const*,char* const,int * const) ;
 int * FUNC_2 (char const* const,int const) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char* const) ;
 int FUNC_6 (char*,int) ;
 int VAR_0 ;

int FUNC_7(int VAR_1, const char** VAR_2)
{
    const char* const VAR_3 = VAR_2[0];
    int const VAR_4 = 3;

    if (VAR_1<3) {
        FUNC_4(VAR_0, "wrong arguments\n");
        FUNC_4(VAR_0, "usage:\n");
        FUNC_4(VAR_0, "%s [FILES] dictionary\n", VAR_3);
        return 1;
    }


    const char* const VAR_5 = VAR_2[VAR_1-1];
    ZSTD_CDict* const VAR_6 = FUNC_2(VAR_5, VAR_4);

    int VAR_7;
    for (VAR_7=1; VAR_7<VAR_1-1; VAR_7++) {
        const char* VAR_8 = VAR_2[VAR_7];
        char* const VAR_9 = FUNC_3(VAR_8);
        FUNC_1(VAR_8, VAR_9, VAR_6);
        FUNC_5(VAR_9);
    }

    FUNC_0(VAR_6);
    FUNC_6("All %u files compressed. \n", VAR_1-2);
    return 0;
}
