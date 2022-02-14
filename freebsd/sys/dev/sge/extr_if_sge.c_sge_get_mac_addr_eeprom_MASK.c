
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct sge_softc {int sge_flags; int sge_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sge_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct sge_softc *VAR_6, uint8_t *VAR_7)
{
 uint16_t VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_6, VAR_2);
 if (VAR_8 == 0xffff || VAR_8 == 0) {
  FUNC_0(VAR_6->sge_dev,
      "invalid EEPROM signature : 0x%04x\n", VAR_8);
  return (VAR_3);
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += 2) {
  VAR_8 = FUNC_1(VAR_6, VAR_1 + VAR_9 / 2);
  VAR_7[VAR_9 + 0] = (uint8_t)VAR_8;
  VAR_7[VAR_9 + 1] = (uint8_t)(VAR_8 >> 8);
 }

 if ((FUNC_1(VAR_6, VAR_0) & 0x80) != 0)
  VAR_6->sge_flags |= VAR_5;
 return (0);
}
