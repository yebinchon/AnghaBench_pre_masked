
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;



__attribute__((used)) static size_t
FUNC_0(time_t VAR_0)
{
    uint32_t VAR_1 = (uint32_t) VAR_0;
    size_t VAR_2 = 0;

    while (VAR_1 > 0) {
        VAR_2++;
        VAR_1 /= 10;
    }
    return VAR_2;
}
