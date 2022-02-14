
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(uint32_t VAR_0)
{
        if ((VAR_0 & 0xF) > 1)
                return (-1);

        if (((VAR_0 >> 4) & 0xF) > 2)
                return (-1);

        if (((VAR_0 >> 8) & 0xF) > 2)
                return (-1);

        return (0);
}
