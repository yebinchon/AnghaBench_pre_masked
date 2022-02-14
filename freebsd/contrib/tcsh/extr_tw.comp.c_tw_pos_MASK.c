
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(Char *VAR_0, int VAR_1)
{
    Char *VAR_2;

    if (VAR_0[0] == '*' && VAR_0[1] == '\0')
 return 1;

    for (VAR_2 = VAR_0; *VAR_2 && *VAR_2 != '-'; VAR_2++)
 continue;

    if (*VAR_2 == '\0')
 return VAR_1 == FUNC_0(VAR_0);

    if (VAR_0 == VAR_2)
 return VAR_1 <= FUNC_0(&VAR_0[1]);
    *VAR_2++ = '\0';

    if (*VAR_2 == '\0')
 return FUNC_0(VAR_0) <= VAR_1;
    else
 return (FUNC_0(VAR_0) <= VAR_1) && (VAR_1 <= FUNC_0(VAR_2));
}
