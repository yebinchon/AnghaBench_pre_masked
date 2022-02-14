
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int resources ;


 int FUNC_0 (int const,char const* const,void*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int const) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (void*,int ,size_t const) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (void*,char const* const) ;
 size_t FUNC_8 (char const* const) ;

int FUNC_9(int VAR_0, const char** VAR_1)
{
    const char* const VAR_2 = VAR_1[0];

    if (VAR_0<2) {
        FUNC_6("wrong arguments\n");
        FUNC_6("usage:\n");
        FUNC_6("%s FILE(s)\n", VAR_2);
        return 1;
    }

    int const VAR_3 = 7;
    resources const VAR_4 = FUNC_1(VAR_3);
    void* VAR_5 = ((void*)0);
    size_t VAR_6 = 0;

    int VAR_7;
    for (VAR_7 = 1; VAR_7 < VAR_0; VAR_7++) {
        const char* const VAR_8 = VAR_1[VAR_7];
        size_t const VAR_9 = FUNC_8(VAR_8);
        size_t const VAR_10 = VAR_9 + 5;
        if (VAR_6 <= VAR_10) {
            VAR_6 = VAR_10 + 16;
            FUNC_2(VAR_5);
            VAR_5 = FUNC_4(VAR_6);
        }
        FUNC_5(VAR_5, 0, VAR_10);
        FUNC_7(VAR_5, VAR_8);
        FUNC_7(VAR_5, ".zst");
        FUNC_0(VAR_4, VAR_8, VAR_5);
    }

    FUNC_3(VAR_4);
    FUNC_2(VAR_5);

    FUNC_6("compressed %i files \n", VAR_0-1);

    return 0;
}
