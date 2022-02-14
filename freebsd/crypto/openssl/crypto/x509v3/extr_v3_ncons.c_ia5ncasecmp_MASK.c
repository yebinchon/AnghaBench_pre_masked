
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
    for (; VAR_2 > 0; VAR_2--, VAR_0++, VAR_1++) {
        if (*VAR_0 != *VAR_1) {
            unsigned char VAR_3 = (unsigned char)*VAR_0, VAR_4 = (unsigned char)*VAR_1;


            if (VAR_3 >= 0x41 && VAR_3 <= 0x5A )
                VAR_3 += 0x20;
            if (VAR_4 >= 0x41 && VAR_4 <= 0x5A )
                VAR_4 += 0x20;

            if (VAR_3 == VAR_4)
                continue;

            if (VAR_3 < VAR_4)
                return -1;


            return 1;
        } else if (*VAR_0 == 0) {

            return 0;
        }
    }

    return 0;
}
