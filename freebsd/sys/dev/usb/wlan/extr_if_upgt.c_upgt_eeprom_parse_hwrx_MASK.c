
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct upgt_softc {scalar_t__ sc_eeprom_hwrx; } ;
struct upgt_eeprom_option_hwrx {scalar_t__ rxfilter; } ;


 int FUNC_0 (struct upgt_softc*,int ,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct upgt_softc *VAR_2, uint8_t *VAR_3)
{
 struct upgt_eeprom_option_hwrx *VAR_4;

 VAR_4 = (struct upgt_eeprom_option_hwrx *)VAR_3;

 VAR_2->sc_eeprom_hwrx = VAR_4->rxfilter - VAR_1;

 FUNC_0(VAR_2, VAR_0, "hwrx option value=0x%04x\n",
     VAR_2->sc_eeprom_hwrx);
}
