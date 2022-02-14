
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bxe_softc {int eeprom; } ;
struct TYPE_3__ {int eeprom_cmd; int eeprom_data_len; int eeprom_data; int eeprom_offset; } ;
typedef TYPE_1__ bxe_eeprom_t ;


 int FUNC_0 (struct bxe_softc*,char*,int,int) ;


 int VAR_0 ;
 int FUNC_1 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_2 (struct bxe_softc*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct bxe_softc *VAR_1, bxe_eeprom_t *VAR_2)
{
    int VAR_3 = 0;

    switch (VAR_2->eeprom_cmd) {

    case 128:

        VAR_3 = FUNC_3(VAR_2->eeprom_data, VAR_1->eeprom,
                       VAR_2->eeprom_data_len);

        if (VAR_3)
            break;

        VAR_3 = FUNC_2(VAR_1, VAR_1->eeprom, VAR_2->eeprom_offset,
                       VAR_2->eeprom_data_len);
        break;

    case 129:

        VAR_3 = FUNC_1(VAR_1, VAR_1->eeprom, VAR_2->eeprom_offset,
                       VAR_2->eeprom_data_len);

        if (VAR_3) {
            break;
        }

        VAR_3 = FUNC_4(VAR_1->eeprom, VAR_2->eeprom_data,
                       VAR_2->eeprom_data_len);
        break;

    default:
            VAR_3 = VAR_0;
            break;
    }

    if (VAR_3) {
        FUNC_0(VAR_1, "ioctl cmd %d  failed rval %d\n", VAR_2->eeprom_cmd, VAR_3);
    }

    return (VAR_3);
}
