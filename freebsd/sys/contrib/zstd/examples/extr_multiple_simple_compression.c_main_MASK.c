
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resources ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int const,char const* const,char*) ;
 int FUNC_2 (int,char const**,char**,size_t*) ;
 int FUNC_3 (int const,char*) ;
 int FUNC_4 (char*,char const* const,size_t const) ;
 int FUNC_5 (char*,...) ;
 size_t FUNC_6 (char const* const) ;

int FUNC_7(int VAR_0, const char** VAR_1)
{
    const char* const VAR_2 = VAR_1[0];

    if (VAR_0<2) {
        FUNC_5("wrong arguments\n");
        FUNC_5("usage:\n");
        FUNC_5("%s FILE(s)\n", VAR_2);
        return 1;
    }


    char* VAR_3;
    size_t VAR_4;
    resources const VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_3, &VAR_4);


    int VAR_6;
    for (VAR_6 = 1; VAR_6 < VAR_0; VAR_6++) {
        const char* const VAR_7 = VAR_1[VAR_6];
        size_t const VAR_8 = FUNC_6(VAR_7);
        FUNC_0(VAR_8 + 5 <= VAR_4, "File name too long!");
        FUNC_4(VAR_3, VAR_7, VAR_8);
        FUNC_4(VAR_3+VAR_8, ".zst", 5);
        FUNC_1(VAR_5, VAR_7, VAR_3);
    }


    FUNC_3(VAR_5,VAR_3);

    FUNC_5("compressed %i files \n", VAR_0-1);

    return 0;
}
