
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1)
{
    char *VAR_2;

    if (FUNC_2(VAR_1, ".") == 0 ||
 FUNC_2(VAR_1, "$accept") == 0 ||
 FUNC_2(VAR_1, "$end") == 0)
 return (1);

    if (VAR_1[0] == '$' && VAR_1[1] == '$' && FUNC_1(FUNC_0(VAR_1[2])))
    {
 VAR_2 = VAR_1 + 3;
 while (FUNC_1(FUNC_0(*VAR_2)))
     ++VAR_2;
 if (*VAR_2 == VAR_0)
     return (1);
    }

    return (0);
}
