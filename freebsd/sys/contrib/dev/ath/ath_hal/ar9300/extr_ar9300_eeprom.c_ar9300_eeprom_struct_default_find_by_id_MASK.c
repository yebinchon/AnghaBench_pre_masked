
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int template_version; } ;
typedef TYPE_1__ ar9300_eeprom_t ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__** VAR_0 ;

ar9300_eeprom_t *
FUNC_1(int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2] != 0 && VAR_0[VAR_2]->template_version == VAR_1) {
            return VAR_0[VAR_2];
        }
    }
    return 0;
}
