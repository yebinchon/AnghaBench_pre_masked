
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(Char *VAR_0)
{
    static Char *VAR_1[] = {
 135, 134, 132, 129,
 128, 133, 131, 130, 0
    };
    Char **VAR_2;

    for (VAR_2 = VAR_1; *VAR_2; ++VAR_2)
 if (FUNC_0(VAR_0, *VAR_2))
     return 1;
    return 0;
}
