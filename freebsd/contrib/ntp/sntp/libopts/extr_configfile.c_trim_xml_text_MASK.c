
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int z ;
typedef scalar_t__ tOptionLoadMode ;
typedef int fmt ;


 char* FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;
 char VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char const*,char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static char *
FUNC_6(char * VAR_2, char const * VAR_3, tOptionLoadMode VAR_4)
{
    static char const VAR_5[] = "</%s>";
    size_t VAR_6 = FUNC_4(VAR_3) + sizeof(VAR_5) - 2 ;
    char * VAR_7;

    {
        char VAR_8[64], *VAR_9 = VAR_8;
        if (VAR_6 >= sizeof(VAR_8))
            VAR_9 = FUNC_0(VAR_6, "scan name");

        VAR_6 = (size_t)FUNC_3(VAR_9, VAR_5, VAR_3);
        *VAR_2 = ' ';
        VAR_7 = FUNC_5(VAR_2, VAR_9);
        if (VAR_9 != VAR_8) FUNC_1(VAR_9);
    }

    if (VAR_7 == ((void*)0))
        return VAR_7;

    {
        char * VAR_10 = VAR_7 + VAR_6;

        if (VAR_4 != VAR_1)
            VAR_7 = FUNC_2(VAR_2, VAR_7);

        *VAR_7 = VAR_0;
        return VAR_10;
    }
}
