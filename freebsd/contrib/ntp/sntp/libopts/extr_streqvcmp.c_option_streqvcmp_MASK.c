
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 int* VAR_1 ;

int
FUNC_0(char const * VAR_2, char const * VAR_3)
{
    for (;;) {
        unsigned char VAR_4 = (unsigned char) *VAR_2++;
        unsigned char VAR_5 = (unsigned char) *VAR_3++;
        int VAR_6;
        if (VAR_4 == VAR_5) {
            if (VAR_4 == VAR_0)
                return 0;
            continue;
        }

        VAR_6 = VAR_1[ VAR_4 ] - VAR_1[ VAR_5 ];

        if (VAR_6 != 0)
            return VAR_6;

        if (VAR_4 == VAR_0)
            return 0;
    }
}
