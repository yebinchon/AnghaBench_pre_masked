
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (char*,size_t const,char*,int const,int const) ;

void
FUNC_2(char VAR_1[80U], const uint8_t * const VAR_2)
{
    const size_t VAR_3 = 80U;
    size_t VAR_4 = (size_t) 0U;
    size_t VAR_5 = (size_t) 0U;

    for (;;) {
        FUNC_0(VAR_3 > VAR_4);
        FUNC_1(&VAR_1[VAR_4],
                        VAR_3 - VAR_4, "%02X%02X",
                        VAR_2[VAR_5], VAR_2[VAR_5 + 1U]);
        VAR_5 += 2U;
        if (VAR_5 >= VAR_0) {
            break;
        }
        VAR_1[VAR_4 + 4U] = ':';
        VAR_4 += 5U;
    }
}
