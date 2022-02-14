
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rt2860_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2860_softc*) ;
 int FUNC_2 (struct rt2860_softc*,int ) ;
 int FUNC_3 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct rt2860_softc*,int ,int ,int ) ;

void
FUNC_6(struct rt2860_softc *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  if (!(FUNC_2(VAR_4, VAR_2) & VAR_0))
   break;
  FUNC_0(1);
 }
 if (VAR_7 == 100) {
  FUNC_4(VAR_4->sc_dev,
   "could not write to BBP through MCU\n");
  return;
 }

 FUNC_3(VAR_4, VAR_2, VAR_1 |
     VAR_0 | VAR_5 << 8 | VAR_6);
 FUNC_1(VAR_4);

 FUNC_5(VAR_4, VAR_3, 0, 0);
 FUNC_0(1000);
}
