
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 char* FUNC_1 (char const*,char*) ;

__attribute__((used)) static char const *
FUNC_2(char const * VAR_0)
{
    switch (*VAR_0) {
    default:
        VAR_0 = ((void*)0);
        break;

    case '!':
        VAR_0 = FUNC_1(VAR_0, "-->");
        if (VAR_0 != ((void*)0))
            VAR_0 += 3;
        break;

    case '?':
        VAR_0 = FUNC_0(VAR_0, '>');
        if (VAR_0 != ((void*)0))
            VAR_0++;
        break;
    }
    return VAR_0;
}
