
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;



__attribute__((used)) static int
FUNC_0(unsigned long long VAR_0, const size_t VAR_1,
           uint32_t *const VAR_2, uint32_t *const VAR_3, uint32_t *const VAR_4)
{
    unsigned long long VAR_5;
    unsigned long long VAR_6;

    if (VAR_0 < 32768) {
        VAR_0 = 32768;
    }
    *VAR_4 = 8;
    if (VAR_0 < VAR_1 / 32) {
        *VAR_3 = 1;
        VAR_5 = VAR_0 / (*VAR_4 * 4);
        for (*VAR_2 = 1; *VAR_2 < 63; *VAR_2 += 1) {
            if ((uint64_t)(1) << *VAR_2 > VAR_5 / 2) {
                break;
            }
        }
    } else {
        VAR_5 = VAR_1 / ((size_t) *VAR_4 * 128);
        for (*VAR_2 = 1; *VAR_2 < 63; *VAR_2 += 1) {
            if ((uint64_t)(1) << *VAR_2 > VAR_5 / 2) {
                break;
            }
        }
        VAR_6 = (VAR_0 / 4) / ((uint64_t)(1) << *VAR_2);

        if (VAR_6 > 0x3fffffff) {
            VAR_6 = 0x3fffffff;
        }

        *VAR_3 = (uint32_t)(VAR_6) / *VAR_4;
    }
    return 0;
}
