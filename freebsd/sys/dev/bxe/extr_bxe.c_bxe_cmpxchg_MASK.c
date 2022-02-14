
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int volatile*,int,int) ;

int
FUNC_1(volatile int *VAR_0,
            int VAR_1,
            int VAR_2)
{
    int VAR_3;
    do {
        VAR_3 = *VAR_0;
    } while (FUNC_0(VAR_0, VAR_1, VAR_2) == 0);
    return (VAR_3);
}
