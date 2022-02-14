
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (unsigned char) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0)
{
    size_t VAR_1;
    char *VAR_2, *VAR_3;
    const char *VAR_4;

    if (VAR_0 == ((void*)0))
 return ((void*)0);

    for (VAR_4 = VAR_0; *VAR_4; VAR_4++)
 if (!FUNC_2((unsigned char)*VAR_4))
     break;

    if (*VAR_4)
 return FUNC_1(VAR_0);

    VAR_1 = FUNC_3(VAR_0);
    VAR_3 = VAR_2 = FUNC_0(VAR_1 * 3 + 1);
    while (*VAR_0) {
 *VAR_2++ = '-';
 *VAR_2++ = *VAR_0++;
 *VAR_2++ = ' ';
    }
    *VAR_2 = '\0';
    return VAR_3;
}
