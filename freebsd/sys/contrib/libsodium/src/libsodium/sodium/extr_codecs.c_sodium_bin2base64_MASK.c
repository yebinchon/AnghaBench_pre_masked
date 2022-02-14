
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int const) ;
 int FUNC_4 () ;

char *
FUNC_5(char * const VAR_2, const size_t VAR_3,
                  const unsigned char * const VAR_4, const size_t VAR_5,
                  const int VAR_6)
{
    size_t VAR_7 = (size_t) 0;
    size_t VAR_8;
    size_t VAR_9 = (size_t) 0;
    size_t VAR_10 = (size_t) 0;
    size_t VAR_11;
    size_t VAR_12;
    unsigned int VAR_13 = 0U;

    FUNC_3(VAR_6);
    VAR_11 = VAR_5 / 3;
    VAR_12 = VAR_5 - 3 * VAR_11;
    VAR_8 = VAR_11 * 4;
    if (VAR_12 != 0) {
        if ((((unsigned int) VAR_6) & VAR_0) == 0U) {
            VAR_8 += 4;
        } else {
            VAR_8 += 2 + (VAR_12 >> 1);
        }
    }
    if (VAR_3 <= VAR_8) {
        FUNC_4();
    }
    if ((((unsigned int) VAR_6) & VAR_1) != 0U) {
        while (VAR_10 < VAR_5) {
            VAR_13 = (VAR_13 << 8) + VAR_4[VAR_10++];
            VAR_7 += 8;
            while (VAR_7 >= 6) {
                VAR_7 -= 6;
                VAR_2[VAR_9++] = (char) FUNC_2((VAR_13 >> VAR_7) & 0x3F);
            }
        }
        if (VAR_7 > 0) {
            VAR_2[VAR_9++] = (char) FUNC_2((VAR_13 << (6 - VAR_7)) & 0x3F);
        }
    } else {
        while (VAR_10 < VAR_5) {
            VAR_13 = (VAR_13 << 8) + VAR_4[VAR_10++];
            VAR_7 += 8;
            while (VAR_7 >= 6) {
                VAR_7 -= 6;
                VAR_2[VAR_9++] = (char) FUNC_1((VAR_13 >> VAR_7) & 0x3F);
            }
        }
        if (VAR_7 > 0) {
            VAR_2[VAR_9++] = (char) FUNC_1((VAR_13 << (6 - VAR_7)) & 0x3F);
        }
    }
    FUNC_0(VAR_9 <= VAR_8);
    while (VAR_9 < VAR_8) {
        VAR_2[VAR_9++] = '=';
    }
    do {
        VAR_2[VAR_9++] = 0U;
    } while (VAR_9 < VAR_3);

    return VAR_2;
}
