
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FICL_UNS ;



int FUNC_0(FICL_UNS VAR_0)
{
    int VAR_1 = 1;
    FICL_UNS VAR_2 = 2;

    for (; ((VAR_2 <= VAR_0) && (VAR_2 != 0)); VAR_1++, VAR_2 <<= 1)
    {
        if (VAR_0 == VAR_2)
            return VAR_1;
    }

    return 0;
}
