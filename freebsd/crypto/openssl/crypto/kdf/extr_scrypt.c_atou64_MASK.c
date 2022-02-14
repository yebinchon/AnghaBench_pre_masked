
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static int FUNC_0(const char *VAR_0, uint64_t *VAR_1)
{
    uint64_t VAR_2 = 0;

    while (*VAR_0) {
        unsigned int VAR_3;
        uint64_t VAR_4;

        if ((*VAR_0 < '0') || (*VAR_0 > '9')) {
            return 0;
        }
        VAR_3 = (unsigned int)(*VAR_0 - '0');
        VAR_4 = (VAR_2 * 10) + VAR_3;
        if ((VAR_4 < VAR_3) || ((VAR_4 - VAR_3) / 10 != VAR_2)) {

            return 0;
        }
        VAR_2 = VAR_4;
        VAR_0++;
    }
    *VAR_1 = VAR_2;
    return 1;
}
