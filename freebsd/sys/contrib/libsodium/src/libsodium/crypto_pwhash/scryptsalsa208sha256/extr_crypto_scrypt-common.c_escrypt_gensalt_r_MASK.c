
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef unsigned int uint64_t ;
typedef int uint32_t ;


 size_t FUNC_0 (size_t) ;
 scalar_t__* FUNC_1 (scalar_t__*,size_t,scalar_t__ const*,size_t) ;
 scalar_t__* FUNC_2 (scalar_t__*,size_t,int,int) ;
 int * VAR_0 ;

uint8_t *
FUNC_3(uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3, const uint8_t *VAR_4,
                  size_t VAR_5, uint8_t *VAR_6, size_t VAR_7)
{
    uint8_t *VAR_8;
    size_t VAR_9 =
        (sizeof "$7$" - 1U) + (1U ) + (5U ) + (5U );
    size_t VAR_10 = FUNC_0(VAR_5);
    size_t VAR_11;

    VAR_11 = VAR_9 + VAR_10 + 1;
    if (VAR_11 > VAR_7 || VAR_11 < VAR_10 || VAR_10 < VAR_5) {
        return ((void*)0);
    }
    if (VAR_1 > 63 || ((uint64_t) VAR_2 * (uint64_t) VAR_3 >= (1U << 30))) {
        return ((void*)0);
    }
    VAR_8 = VAR_6;
    *VAR_8++ = '$';
    *VAR_8++ = '7';
    *VAR_8++ = '$';

    *VAR_8++ = VAR_0[VAR_1];

    VAR_8 = FUNC_2(VAR_8, VAR_7 - (VAR_8 - VAR_6), VAR_2, 30);
    if (!VAR_8) {
        return ((void*)0);
    }
    VAR_8 = FUNC_2(VAR_8, VAR_7 - (VAR_8 - VAR_6), VAR_3, 30);
    if (!VAR_8) {
        return ((void*)0);
    }
    VAR_8 = FUNC_1(VAR_8, VAR_7 - (VAR_8 - VAR_6), VAR_4, VAR_5);
    if (!VAR_8 || VAR_8 >= VAR_6 + VAR_7) {
        return ((void*)0);
    }
    *VAR_8 = 0;

    return VAR_6;
}
