
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

int
FUNC_1(size_t *VAR_1, unsigned char *VAR_2,
           size_t VAR_3, size_t VAR_4, size_t VAR_5)
{
    unsigned char *VAR_6;
    size_t VAR_7;
    size_t VAR_8;
    size_t VAR_9;
    volatile unsigned char VAR_10;
    unsigned char VAR_11;

    if (VAR_4 <= 0U) {
        return -1;
    }
    VAR_8 = VAR_4 - 1U;
    if ((VAR_4 & (VAR_4 - 1U)) == 0U) {
        VAR_8 -= VAR_3 & (VAR_4 - 1U);
    } else {
        VAR_8 -= VAR_3 % VAR_4;
    }
    if ((size_t) VAR_0 - VAR_3 <= VAR_8) {
        FUNC_0();
    }
    VAR_9 = VAR_3 + VAR_8;
    if (VAR_9 >= VAR_5) {
        return -1;
    }
    VAR_6 = &VAR_2[VAR_9];
    if (VAR_1 != ((void*)0)) {
        *VAR_1 = VAR_9 + 1U;
    }
    VAR_10 = 0U;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        VAR_11 = (unsigned char) (((VAR_7 ^ VAR_8) - 1U) >> 8);
        VAR_6[-VAR_7] = (VAR_6[-VAR_7] & VAR_10) | (0x80 & VAR_11);
        VAR_10 |= VAR_11;
    }
    return 0;
}
