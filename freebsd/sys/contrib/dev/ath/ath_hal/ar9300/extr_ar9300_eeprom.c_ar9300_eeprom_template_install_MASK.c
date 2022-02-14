
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hal_9300 {int ah_eeprom; } ;
struct ath_hal {int dummy; } ;
typedef int int32_t ;
typedef int ar9300_eeprom_t ;


 struct ath_hal_9300* FUNC_0 (struct ath_hal*) ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int32_t FUNC_4(struct ath_hal *VAR_3, int32_t VAR_4)
{
    struct ath_hal_9300 *VAR_5 = FUNC_0(VAR_3);
    ar9300_eeprom_t *VAR_6, *VAR_7;
    int VAR_8;

    VAR_6 = &VAR_5->ah_eeprom;
    VAR_8 = FUNC_3();
    if (VAR_6 != 0) {




        VAR_7 = FUNC_2(VAR_4);
        if (VAR_7 != 0) {
            FUNC_1(VAR_6, VAR_7, VAR_8);
            return 0;
        }
    }
    return -1;
}
