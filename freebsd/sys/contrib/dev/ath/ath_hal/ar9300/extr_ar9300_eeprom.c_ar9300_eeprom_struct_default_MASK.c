
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ar9300_eeprom_t ;


 int FUNC_0 (int **) ;
 int ** VAR_0 ;

ar9300_eeprom_t *
FUNC_1(int VAR_1)
{
    if (VAR_1 >= 0 &&
        VAR_1 < FUNC_0(VAR_0))
    {
        return VAR_0[VAR_1];
    } else {
        return 0;
    }
}
