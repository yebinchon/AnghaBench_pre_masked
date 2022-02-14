
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef int ar9300_eeprom_t ;
struct TYPE_2__ {scalar_t__ calibration_data_source_address; void* calibration_data_source; } ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 void* VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct ath_hal *VAR_3, ar9300_eeprom_t *VAR_4,
    int VAR_5)
{
    int VAR_6;
    ar9300_eeprom_t *VAR_7;
    int VAR_8;

    VAR_8 = -1;




    if (VAR_8 < 0) {
        FUNC_0(VAR_3)->calibration_data_source = VAR_2;
        FUNC_0(VAR_3)->calibration_data_source_address = 0;
        VAR_7 = FUNC_3(
            VAR_0);
        if (VAR_7 != 0) {
            FUNC_1(VAR_4, VAR_7, VAR_5);
            VAR_8 = 0;
        }
    }




    if (VAR_8 < 0) {
        FUNC_0(VAR_3)->calibration_data_source = VAR_2;
        FUNC_0(VAR_3)->calibration_data_source_address = 0;
        VAR_7 = FUNC_3(
            VAR_1);
        if (VAR_7 != 0) {
            FUNC_1(VAR_4, VAR_7, VAR_5);
            VAR_8 = 0;
        }
    }




    if (VAR_8 < 0) {
        FUNC_0(VAR_3)->calibration_data_source = VAR_2;
        FUNC_0(VAR_3)->calibration_data_source_address = 0;
        for (VAR_6 = FUNC_4() - 1; VAR_6 >= 0; VAR_6--) {
            VAR_7 = FUNC_2(VAR_6);
            if (VAR_7 != 0) {
                FUNC_1(VAR_4, VAR_7, VAR_5);
                VAR_8 = 0;
                break;
            }
        }
    }
    return VAR_8;
}
