
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct ath_hal {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

uint16_t
FUNC_1(struct ath_hal *VAR_2, uint16_t VAR_3,
    uint16_t VAR_4[])
{
    int VAR_5;
    uint16_t VAR_6 = 0;

    for (VAR_5 = 1; VAR_5 <= VAR_1; VAR_5++) {
        if ((VAR_3 >> (VAR_1 - VAR_5)) & 1) {
            if (VAR_6 >= VAR_0) {
                FUNC_0(0);
                break;
            }
            VAR_4[VAR_6] = (uint16_t)(VAR_1 - VAR_5);
            VAR_6++;
        }
    }
    return VAR_6;
}
