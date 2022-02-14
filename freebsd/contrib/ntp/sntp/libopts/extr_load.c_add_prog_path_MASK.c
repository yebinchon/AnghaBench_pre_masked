
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;


 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (int ,char const*,char*) ;
 int * FUNC_4 (char const*,int const) ;
 int FUNC_5 (char*,char const*) ;
 unsigned int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,int const) ;

__attribute__((used)) static bool
FUNC_8(char * VAR_0, int VAR_1, char const * VAR_2, char const * VAR_3)
{
    char const * VAR_4;
    char const * VAR_5;
    int VAR_6 = 2;

    switch (VAR_2[2]) {
    case 129:
        VAR_6 = 3;
    case 128:
        break;
    default:
        return 0;
    }






    if (FUNC_4(VAR_3, 129) != ((void*)0))
        VAR_4 = VAR_3;
    else {
        VAR_4 = FUNC_3(FUNC_1("PATH"), VAR_3, "rx");

        if (VAR_4 == ((void*)0))
            return 0;
    }

    VAR_5 = FUNC_7(VAR_4, 129);





    if (VAR_5 == ((void*)0))
        return 0;

    VAR_2 += VAR_6;





    if ((unsigned)(VAR_5 - VAR_4) + 1 + FUNC_6(VAR_2) >= (unsigned)VAR_1)
        return 0;

    FUNC_2(VAR_0, VAR_4, (size_t)((VAR_5 - VAR_4)+1));
    FUNC_5(VAR_0 + (VAR_5 - VAR_4) + 1, VAR_2);





    if (VAR_4 != VAR_3)
        FUNC_0(VAR_4);
    return 1;
}
