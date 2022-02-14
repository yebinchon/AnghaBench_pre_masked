
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const Char ;



__attribute__((used)) static int
FUNC_0(Char **VAR_0, const char *VAR_1)
{
    for (; VAR_0 && *VAR_0; VAR_0++) {
 size_t VAR_2;
 for (VAR_2 = 0; (*VAR_0)[VAR_2] && (*VAR_0)[VAR_2] == VAR_1[VAR_2]; VAR_2++)
     continue;
 if ((*VAR_0)[VAR_2] == '\0' && VAR_1[VAR_2] == '\0')
     return 1;
    }
    return 0;
}
