
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1(char **VAR_0, char *VAR_1)
{
    char *VAR_2 = *VAR_0;
    char *VAR_3 = VAR_1;

    for (; *VAR_2 && FUNC_0(*VAR_2); VAR_2++)
 continue;

    for (; *VAR_2 && *VAR_2 != ':'; *VAR_3++ = *VAR_2++)
 continue;

    if (*VAR_2 == ':')
 VAR_2++;
    else
 VAR_3--;

    for (VAR_3--; VAR_3 >= VAR_1 && *VAR_3 && FUNC_0(*VAR_3); VAR_3--)
 continue;

    *++VAR_3 = '\0';

    *VAR_0 = VAR_2;
    return VAR_1;
}
