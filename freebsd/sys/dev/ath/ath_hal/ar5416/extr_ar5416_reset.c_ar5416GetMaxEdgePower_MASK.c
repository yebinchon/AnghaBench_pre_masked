
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ bChannel; int tPowerFlag; } ;
typedef int HAL_BOOL ;
typedef TYPE_1__ CAL_CTL_EDGES ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

uint16_t
FUNC_3(uint16_t VAR_5, CAL_CTL_EDGES *VAR_6, HAL_BOOL VAR_7)
{
    uint16_t VAR_8 = VAR_1;
    int VAR_9;


    for (VAR_9 = 0; (VAR_9 < VAR_2) && (VAR_6[VAR_9].bChannel != VAR_0) ; VAR_9++) {




        if (VAR_5 == FUNC_2(VAR_6[VAR_9].bChannel, VAR_7)) {
            VAR_8 = FUNC_1(VAR_6[VAR_9].tPowerFlag, VAR_4);
            break;
        } else if ((VAR_9 > 0) && (VAR_5 < FUNC_2(VAR_6[VAR_9].bChannel, VAR_7))) {
            if (FUNC_2(VAR_6[VAR_9 - 1].bChannel, VAR_7) < VAR_5 && (VAR_6[VAR_9 - 1].tPowerFlag & VAR_3) != 0) {
                VAR_8 = FUNC_1(VAR_6[VAR_9 - 1].tPowerFlag, VAR_4);
            }

            break;
        }
    }
    FUNC_0(VAR_8 > 0);
    return VAR_8;
}
