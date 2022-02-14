
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char VAR_0 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char const*) ;
 unsigned int FUNC_3 (char const*) ;

__attribute__((used)) static bool
FUNC_4(char * VAR_1, int VAR_2, char const * VAR_3)
{
    char * VAR_4 = VAR_1;

    for (;;) {
        int VAR_5 = (int)*++VAR_3;
        if (! FUNC_0(VAR_5))
            break;
        *(VAR_4++) = (char)VAR_5;
    }

    if (VAR_4 == VAR_1)
        return 0;

    *VAR_4 = VAR_0;

    VAR_4 = FUNC_1(VAR_1);




    if (VAR_4 == ((void*)0))
        return 0;

    if (FUNC_3(VAR_4) + 1 + FUNC_3(VAR_3) >= (unsigned)VAR_2)
        return 0;

    FUNC_2(VAR_1, "%s%s", VAR_4, VAR_3);
    return 1;
}
