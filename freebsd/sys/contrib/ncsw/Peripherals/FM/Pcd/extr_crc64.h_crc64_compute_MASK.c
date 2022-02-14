
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {size_t* table; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static __inline__ uint64_t FUNC_0(void const *VAR_2,
                                         uint32_t VAR_3,
                                         uint64_t VAR_4)
{
    uint32_t VAR_5;
    uint64_t VAR_6 = VAR_4;
    uint8_t *VAR_7 = (uint8_t *) VAR_2;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        VAR_6 =
            VAR_1
            table[(VAR_6 ^ *VAR_7++) & VAR_0] ^ (VAR_6 >> 8);

    return VAR_6;
}
