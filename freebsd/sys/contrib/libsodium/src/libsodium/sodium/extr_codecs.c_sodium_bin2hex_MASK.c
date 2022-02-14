
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;

char *
FUNC_1(char *const VAR_1, const size_t VAR_2,
               const unsigned char *const VAR_3, const size_t VAR_4)
{
    size_t VAR_5 = (size_t) 0U;
    unsigned int VAR_6;
    int VAR_7;
    int VAR_8;

    if (VAR_4 >= VAR_0 / 2 || VAR_2 <= VAR_4 * 2U) {
        FUNC_0();
    }
    while (VAR_5 < VAR_4) {
        VAR_8 = VAR_3[VAR_5] & 0xf;
        VAR_7 = VAR_3[VAR_5] >> 4;
        VAR_6 = (unsigned char) (87U + VAR_8 + (((VAR_8 - 10U) >> 8) & ~38U)) << 8 |
            (unsigned char) (87U + VAR_7 + (((VAR_7 - 10U) >> 8) & ~38U));
        VAR_1[VAR_5 * 2U] = (char) VAR_6;
        VAR_6 >>= 8;
        VAR_1[VAR_5 * 2U + 1U] = (char) VAR_6;
        VAR_5++;
    }
    VAR_1[VAR_5 * 2U] = 0U;

    return VAR_1;
}
