
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (char const*,char*) ;

__attribute__((used)) static char const *
FUNC_3(char const * VAR_3, size_t VAR_4, char const * VAR_5, size_t * VAR_6)
{
    char VAR_7[72] = "</";
    char * VAR_8 = VAR_7 + 2;

    do {
        *(VAR_8++) = *(VAR_3++);
    } while (--VAR_4 > 0);
    *(VAR_8++) = '>';
    *VAR_8 = VAR_0;

    {
        char const * VAR_9 = FUNC_2(VAR_5, VAR_7);

        if (VAR_9 != ((void*)0)) {
            char const * VAR_10 = (VAR_2 != VAR_1)
                ? FUNC_0(VAR_5, VAR_9)
                : VAR_9;
            *VAR_6 = (size_t)(VAR_10 - VAR_5);
            VAR_9 = FUNC_1(VAR_9 + (VAR_8 - VAR_7));
        }
        return VAR_9;
    }
}
