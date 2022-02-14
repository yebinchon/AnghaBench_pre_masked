
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct upgt_softc {struct upgt_lmac_freq3* sc_eeprom_freq3; } ;
struct upgt_lmac_freq3 {int freq; } ;
struct upgt_eeprom_freq3_header {int flags; int elements; } ;
typedef int freq3 ;


 int FUNC_0 (struct upgt_softc*,int ,char*,int,unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct upgt_softc *VAR_3, uint8_t *VAR_4, int VAR_5)
{
 struct upgt_eeprom_freq3_header *VAR_6;
 struct upgt_lmac_freq3 *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 unsigned VAR_11;

 VAR_6 = (struct upgt_eeprom_freq3_header *)VAR_4;
 VAR_7 = (struct upgt_lmac_freq3 *)(VAR_6 + 1);

 VAR_10 = VAR_6->flags;
 VAR_9 = VAR_6->elements;

 FUNC_0(VAR_3, VAR_1, "flags=0x%02x elements=%d\n",
     VAR_10, VAR_9);

 if (VAR_9 >= (int)(VAR_2 / sizeof(VAR_7[0])))
  return;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  VAR_11 = FUNC_1(FUNC_2(VAR_7[VAR_8].freq), 0);
  if (VAR_11 >= VAR_0)
   continue;

  VAR_3->sc_eeprom_freq3[VAR_11] = VAR_7[VAR_8];

  FUNC_0(VAR_3, VAR_1, "frequence=%d, channel=%d\n",
      FUNC_2(VAR_3->sc_eeprom_freq3[VAR_11].freq), VAR_11);
 }
}
