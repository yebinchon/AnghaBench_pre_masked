
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct fxp_softc {scalar_t__* eeprom; int eeprom_size; int dev; } ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct fxp_softc*,scalar_t__*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct fxp_softc *VAR_0)
{
 int VAR_1;
 uint16_t VAR_2;

 FUNC_1(VAR_0, VAR_0->eeprom, 0, 1 << VAR_0->eeprom_size);
 VAR_2 = 0;
 for (VAR_1 = 0; VAR_1 < (1 << VAR_0->eeprom_size) - 1; VAR_1++)
  VAR_2 += VAR_0->eeprom[VAR_1];
 VAR_2 = 0xBABA - VAR_2;
 if (VAR_2 != VAR_0->eeprom[(1 << VAR_0->eeprom_size) - 1])
  FUNC_0(VAR_0->dev,
      "EEPROM checksum mismatch! (0x%04x -> 0x%04x)\n",
      VAR_2, VAR_0->eeprom[(1 << VAR_0->eeprom_size) - 1]);
}
