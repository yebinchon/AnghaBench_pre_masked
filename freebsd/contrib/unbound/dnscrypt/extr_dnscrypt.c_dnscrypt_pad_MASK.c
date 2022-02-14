
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t const uint32_t ;
typedef int rnd ;


 size_t VAR_0 ;
 size_t const VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int FUNC_1 (unsigned char*,unsigned long long,scalar_t__ const*,scalar_t__ const*) ;
 int FUNC_2 (scalar_t__*,int ,size_t) ;

size_t
FUNC_3(uint8_t *VAR_3, const size_t VAR_4, const size_t VAR_5,
             const uint8_t *VAR_6, const uint8_t *VAR_7)
{
    uint8_t *VAR_8 = VAR_3 + VAR_4;
    size_t VAR_9;
    uint32_t VAR_10;


    if (VAR_5 < VAR_4 + VAR_1)
        return VAR_4;

    FUNC_0(VAR_6[VAR_2] == VAR_6[0]);

    FUNC_1((unsigned char *)&VAR_10, (unsigned long long)sizeof(VAR_10), VAR_6,
                  VAR_7);
    VAR_9 =
        VAR_4 + VAR_1 + VAR_10 % (VAR_5 - VAR_4 -
                                            VAR_1 + 1);
    VAR_9 += VAR_0 - VAR_9 % VAR_0;
    if (VAR_9 > VAR_5)
        VAR_9 = VAR_5;

    FUNC_2(VAR_8, 0, VAR_9 - VAR_4);
    *VAR_8 = 0x80;

    return VAR_9;
}
