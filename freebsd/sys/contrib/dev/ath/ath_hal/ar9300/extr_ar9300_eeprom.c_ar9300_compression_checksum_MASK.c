
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
typedef int u_int16_t ;



u_int16_t
FUNC_0(u_int8_t *VAR_0, int VAR_1)
{
    int VAR_2;
    int VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        VAR_3 += VAR_0[VAR_2];
        VAR_3 &= 0xffff;
    }

    return VAR_3;
}
