
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct upgt_softc {struct upgt_lmac_freq6* sc_eeprom_freq6; } ;
struct upgt_lmac_freq6 {int freq; } ;
typedef int freq6 ;


 int FUNC_0 (struct upgt_softc*,int ,char*,int,...) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct upgt_softc *VAR_3, uint8_t *VAR_4, int VAR_5)
{
 struct upgt_lmac_freq6 *VAR_6;
 int VAR_7;
 int VAR_8;
 unsigned VAR_9;

 VAR_6 = (struct upgt_lmac_freq6 *)VAR_4;
 VAR_8 = VAR_5 / sizeof(struct upgt_lmac_freq6);

 FUNC_0(VAR_3, VAR_1, "elements=%d\n", VAR_8);

 if (VAR_8 >= (int)(VAR_2 / sizeof(VAR_6[0])))
  return;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_9 = FUNC_1(FUNC_2(VAR_6[VAR_7].freq), 0);
  if (VAR_9 >= VAR_0)
   continue;

  VAR_3->sc_eeprom_freq6[VAR_9] = VAR_6[VAR_7];

  FUNC_0(VAR_3, VAR_1, "frequence=%d, channel=%d\n",
      FUNC_2(VAR_3->sc_eeprom_freq6[VAR_9].freq), VAR_9);
 }
}
