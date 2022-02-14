
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct upgt_softc {int sc_eeprom_freq6_settings; TYPE_1__** sc_eeprom_freq4; } ;
struct upgt_eeprom_freq4_header {int flags; int elements; int settings; } ;
struct upgt_eeprom_freq4_2 {int dummy; } ;
struct upgt_eeprom_freq4_1 {int freq; scalar_t__ data; } ;
typedef int freq4_1 ;
struct TYPE_2__ {scalar_t__ pad; struct upgt_eeprom_freq4_2 cmd; } ;


 int FUNC_0 (struct upgt_softc*,int ,char*,int,unsigned int,...) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct upgt_softc *VAR_3, uint8_t *VAR_4, int VAR_5)
{
 struct upgt_eeprom_freq4_header *VAR_6;
 struct upgt_eeprom_freq4_1 *VAR_7;
 struct upgt_eeprom_freq4_2 *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 unsigned VAR_14;

 VAR_6 = (struct upgt_eeprom_freq4_header *)VAR_4;
 VAR_7 = (struct upgt_eeprom_freq4_1 *)(VAR_6 + 1);
 VAR_13 = VAR_6->flags;
 VAR_11 = VAR_6->elements;
 VAR_12 = VAR_6->settings;


 VAR_3->sc_eeprom_freq6_settings = VAR_6->settings;

 FUNC_0(VAR_3, VAR_1, "flags=0x%02x elements=%d settings=%d\n",
     VAR_13, VAR_11, VAR_12);

 if (VAR_11 >= (int)(VAR_2 / sizeof(VAR_7[0])))
  return;

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_14 = FUNC_1(FUNC_2(VAR_7[VAR_9].freq), 0);
  if (VAR_14 >= VAR_0)
   continue;

  VAR_8 = (struct upgt_eeprom_freq4_2 *)VAR_7[VAR_9].data;
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   VAR_3->sc_eeprom_freq4[VAR_14][VAR_10].cmd = VAR_8[VAR_10];
   VAR_3->sc_eeprom_freq4[VAR_14][VAR_10].pad = 0;
  }

  FUNC_0(VAR_3, VAR_1, "frequence=%d, channel=%d\n",
      FUNC_2(VAR_7[VAR_9].freq), VAR_14);
 }
}
