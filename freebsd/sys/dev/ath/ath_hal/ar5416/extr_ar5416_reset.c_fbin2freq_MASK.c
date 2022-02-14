
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ HAL_BOOL ;


 int VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_0(uint8_t VAR_1, HAL_BOOL VAR_2)
{




    if (VAR_1 == VAR_0) {
        return VAR_1;
    }

    return (uint16_t)((VAR_2) ? (2300 + VAR_1) : (4800 + 5 * VAR_1));
}
