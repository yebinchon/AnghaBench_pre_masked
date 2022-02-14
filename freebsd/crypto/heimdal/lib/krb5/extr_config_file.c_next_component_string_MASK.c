
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 size_t FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(char * VAR_0, const char * VAR_1, char **VAR_2)
{
    char * VAR_3;

    if (VAR_0 == ((void*)0))
        VAR_0 = *VAR_2;

    if (*VAR_0 == '\0')
        return ((void*)0);

    VAR_3 = VAR_0;
    while (*VAR_3 == '"') {
        char * VAR_4 = FUNC_0(VAR_3 + 1, '"');

        if (VAR_4)
            VAR_3 = ++VAR_4;
        else
            VAR_3 += FUNC_2(VAR_3);
    }

    if (*VAR_3 != '\0') {
        size_t VAR_5;

        VAR_5 = FUNC_1(VAR_3, VAR_1);
        VAR_3 = VAR_3 + VAR_5;
    }

    if (*VAR_3 != '\0') {
        *VAR_3 = '\0';
        *VAR_2 = VAR_3 + 1;
        if (*VAR_0 == '"' && *(VAR_3 - 1) == '"' && VAR_0 + 1 < VAR_3) {
            VAR_0++; *(VAR_3 - 1) = '\0';
        }
        return VAR_0;
    }

    *VAR_2 = VAR_3;
    if (*VAR_0 == '"' && *(VAR_3 - 1) == '"' && VAR_0 + 1 < VAR_3) {
        VAR_0++; *(VAR_3 - 1) = '\0';
    }
    return VAR_0;
}
