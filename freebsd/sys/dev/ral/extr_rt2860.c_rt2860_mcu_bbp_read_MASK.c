
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2860_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2860_softc*) ;
 int FUNC_2 (struct rt2860_softc*,int ) ;
 int FUNC_3 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct rt2860_softc*,int ,int ,int ) ;

uint8_t
FUNC_6(struct rt2860_softc *VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  if (!(FUNC_2(VAR_5, VAR_3) & VAR_0))
   break;
  FUNC_0(1);
 }
 if (VAR_8 == 100) {
  FUNC_4(VAR_5->sc_dev,
      "could not read from BBP through MCU\n");
  return 0;
 }

 FUNC_3(VAR_5, VAR_3, VAR_2 |
     VAR_0 | VAR_1 | VAR_6 << 8);
 FUNC_1(VAR_5);

 FUNC_5(VAR_5, VAR_4, 0, 0);
 FUNC_0(1000);

 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  VAR_7 = FUNC_2(VAR_5, VAR_3);
  if (!(VAR_7 & VAR_0))
   return VAR_7 & 0xff;
  FUNC_0(1);
 }
 FUNC_4(VAR_5->sc_dev, "could not read from BBP through MCU\n");

 return 0;
}
