
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct sge_softc {int sge_dev; } ;


 int FUNC_0 (struct sge_softc*,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static uint16_t
FUNC_5(struct sge_softc *VAR_8, int VAR_9)
{
 uint32_t VAR_10;
 int VAR_11;

 FUNC_3(VAR_9 <= VAR_2, ("EEPROM offset too big"));
 FUNC_1(VAR_8, VAR_6,
     VAR_5 | VAR_4 | (VAR_9 << VAR_3));
 FUNC_2(500);
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_10 = FUNC_0(VAR_8, VAR_6);
  if ((VAR_10 & VAR_5) == 0)
   break;
  FUNC_2(100);
 }
 if (VAR_11 == VAR_7) {
  FUNC_4(VAR_8->sge_dev,
      "EEPROM read timeout : 0x%08x\n", VAR_10);
  return (0xffff);
 }

 return ((VAR_10 & VAR_0) >> VAR_1);
}
