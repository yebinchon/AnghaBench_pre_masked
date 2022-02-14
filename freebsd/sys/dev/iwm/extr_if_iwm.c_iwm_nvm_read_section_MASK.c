
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct iwm_softc {int sc_dev; TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ eeprom_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*,int,char*,scalar_t__,...) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iwm_softc*,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct iwm_softc *VAR_4,
 uint16_t VAR_5, uint8_t *VAR_6, uint16_t *VAR_7, uint32_t VAR_8)
{
 uint16_t VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;


 VAR_10 = VAR_3;

 VAR_9 = VAR_10;


 while (VAR_9 == VAR_10) {

  if ((VAR_8 + VAR_11 + VAR_10) >
      VAR_4->cfg->eeprom_size) {
   FUNC_1(VAR_4->sc_dev,
       "EEPROM size is too small for NVM\n");
   return VAR_0;
  }

  VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_11, VAR_10, VAR_6, &VAR_9);
  if (VAR_12) {
   FUNC_0(VAR_4, VAR_1 | VAR_2,
        "Cannot read NVM from section %d offset %d, length %d\n",
        VAR_5, VAR_11, VAR_10);
   return VAR_12;
  }
  VAR_11 += VAR_9;
 }

 FUNC_0(VAR_4, VAR_1 | VAR_2,
      "NVM section %d read completed\n", VAR_5);
 *VAR_7 = VAR_11;
 return 0;
}
