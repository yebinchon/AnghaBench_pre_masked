
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int **) ;
 int ** FUNC_2 (scalar_t__,int) ;

Char **
FUNC_3(Char **VAR_0)
{
    Char **VAR_1, **VAR_2;

    if (VAR_0 == ((void*)0))
 return ((void*)0);

    VAR_2 = VAR_1 = FUNC_2(FUNC_1(VAR_0) + 1, sizeof(Char **));

    while (*VAR_0)
 *VAR_1++ = FUNC_0(*VAR_0++);
    return (VAR_2);
}
