
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0)
{
    char VAR_1, VAR_2, VAR_3;
    int VAR_4;
    int VAR_5;

    VAR_2 = *VAR_0;
    if (VAR_2 == 0)

 return 0;

    if (VAR_2 == '(')
 VAR_3 = ')';
    else if (VAR_2 == '{')
 VAR_3 = '}';
    else

 return 1;

    VAR_4 = 1;
    for (VAR_5 = 1; (VAR_1 = VAR_0[VAR_5++]) != 0;) {
 if (VAR_1 == VAR_2)
     VAR_4++;
 else if (VAR_1 == VAR_3 && --VAR_4 == 0)
     return VAR_5;
    }


    return 0;
}
