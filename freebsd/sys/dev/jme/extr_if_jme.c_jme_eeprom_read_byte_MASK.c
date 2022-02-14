
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct jme_softc {int jme_dev; } ;


 int FUNC_0 (struct jme_softc*,int ) ;
 int FUNC_1 (struct jme_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct jme_softc *VAR_12, uint8_t VAR_13, uint8_t *VAR_14)
{
 uint32_t VAR_15;
 int VAR_16;

 *VAR_14 = 0;
 for (VAR_16 = VAR_3; VAR_16 > 0; VAR_16--) {
  VAR_15 = FUNC_0(VAR_12, VAR_1);
  if ((VAR_15 & VAR_4) == VAR_5)
   break;
  FUNC_2(1);
 }

 if (VAR_16 == 0) {
  FUNC_3(VAR_12->jme_dev, "EEPROM idle timeout!\n");
  return (VAR_0);
 }

 VAR_15 = ((uint32_t)VAR_13 << VAR_7) & VAR_6;
 FUNC_1(VAR_12, VAR_2, VAR_15 | VAR_9 | VAR_8);
 for (VAR_16 = VAR_3; VAR_16 > 0; VAR_16--) {
  FUNC_2(1);
  VAR_15 = FUNC_0(VAR_12, VAR_2);
  if ((VAR_15 & VAR_8) == 0)
   break;
 }

 if (VAR_16 == 0) {
  FUNC_3(VAR_12->jme_dev, "EEPROM read timeout!\n");
  return (VAR_0);
 }

 VAR_15 = FUNC_0(VAR_12, VAR_2);
 *VAR_14 = (VAR_15 & VAR_10) >> VAR_11;

 return (0);
}
