
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0 (const char *VAR_1)
{
    volatile uintptr_t VAR_2 = (uintptr_t) (const void *) VAR_1;


    uint32_t VAR_3 = (uint32_t) ((VAR_2 >> 4) & (((1 << 24) - 1)));

    VAR_3 = (VAR_3 ^ 61) ^ (VAR_3 >> 16);
    VAR_3 = VAR_3 + (VAR_3 << 3);
    VAR_3 = VAR_3 ^ (VAR_3 >> 4);
    VAR_3 = VAR_3 * 0x3a8f05c5;
    VAR_3 = VAR_3 ^ (VAR_3 >> 15);
    VAR_3 &= VAR_0 - 1;

    return VAR_3;
}
