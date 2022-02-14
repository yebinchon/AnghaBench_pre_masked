
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int* FUNC_1 (char const*) ;

int
FUNC_2(const char *VAR_0, int VAR_1, int VAR_2)
{
    const int *VAR_3 = FUNC_1(VAR_0);
    int VAR_4 = FUNC_0(VAR_0);

    while (VAR_4 > 0 && (VAR_3[VAR_4] - VAR_3[VAR_2]) > VAR_1)
 --VAR_4;
    return VAR_4;
}
