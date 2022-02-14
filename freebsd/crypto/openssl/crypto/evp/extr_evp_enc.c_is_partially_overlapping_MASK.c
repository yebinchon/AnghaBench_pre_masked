
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PTRDIFF_T ;



int FUNC_0(const void *VAR_0, const void *VAR_1, int VAR_2)
{
    PTRDIFF_T VAR_3 = (PTRDIFF_T)VAR_0-(PTRDIFF_T)VAR_1;





    int VAR_4 = (VAR_2 > 0) & (VAR_3 != 0) & ((VAR_3 < (PTRDIFF_T)VAR_2) |
                                                (VAR_3 > (0 - (PTRDIFF_T)VAR_2)));

    return VAR_4;
}
