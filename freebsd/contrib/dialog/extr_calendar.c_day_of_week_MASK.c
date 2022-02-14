
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, int VAR_2, int VAR_3)
{
    static int VAR_4[] =
    {
 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4
    };
    VAR_1 -= (VAR_2 < 3);
    return (6 + (VAR_1 + (VAR_1 / 4) - (VAR_1 / 100) + (VAR_1 / 400) + VAR_4[VAR_2 - 1] + VAR_3)) % VAR_0;
}
