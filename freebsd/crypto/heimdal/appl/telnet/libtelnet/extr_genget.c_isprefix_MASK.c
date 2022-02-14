
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

int
FUNC_1(char *VAR_0, char *VAR_1)
{
    char *VAR_2;
    char VAR_3, VAR_4;

    if (*VAR_0 == '\0')
 return(-1);
    VAR_2 = VAR_0;
    VAR_3 = *VAR_0;
    VAR_4 = *VAR_1;
    while (FUNC_0((unsigned char)VAR_3) == FUNC_0((unsigned char)VAR_4)) {
 if (VAR_3 == '\0')
     break;
 VAR_3 = *++VAR_0;
 VAR_4 = *++VAR_1;
    }
    return(*VAR_0 ? 0 : (*VAR_1 ? (VAR_0 - VAR_2) : (VAR_2 - VAR_0)));
}
