
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char const VAR_0 ;

int
FUNC_0(const void *VAR_1, const void *VAR_2, size_t VAR_3)
{
        const unsigned char *VAR_4 = VAR_1, *VAR_5 = VAR_2;
        size_t VAR_6;
        int VAR_7 = 0, VAR_8 = 0;

        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {

                int VAR_9 = (VAR_4[VAR_6] - VAR_5[VAR_6]) >> VAR_0;


                int VAR_10 = (VAR_5[VAR_6] - VAR_4[VAR_6]) >> VAR_0;


                int VAR_11 = VAR_9 - VAR_10;


                VAR_7 |= VAR_11 & ~VAR_8;


                VAR_8 |= VAR_9 | VAR_10;
        }

        return (VAR_7);
}
