
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned long volatile*,unsigned long,unsigned long) ;

int
FUNC_1(int VAR_0,
                       volatile unsigned long *VAR_1)
{
    unsigned long VAR_2;
    VAR_0 = (1 << VAR_0);
    do {
        VAR_2 = *VAR_1;
    } while (FUNC_0(VAR_1, VAR_2, VAR_2 | VAR_0) == 0);

    return (VAR_2 & VAR_0);
}
