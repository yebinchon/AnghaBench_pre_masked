
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const* const,char*) ;

__attribute__((used)) static
bool
FUNC_1(const char *const *VAR_0, char **VAR_1)
{
    bool VAR_2;

    if (*VAR_0 == ((void*)0) && *VAR_1 == ((void*)0))
        VAR_2 = 1;
    else if (*VAR_0 == ((void*)0) || *VAR_1 == ((void*)0))
        VAR_2 = 0;
    else {
        VAR_2 = 1;
        while (*VAR_1 != ((void*)0)) {
            if (*VAR_0 == ((void*)0) || FUNC_0(*VAR_0, *VAR_1) != 0) {
                VAR_2 = 0;
                break;
            }
            VAR_0++;
            VAR_1++;
        }
    }

    return VAR_2;
}
