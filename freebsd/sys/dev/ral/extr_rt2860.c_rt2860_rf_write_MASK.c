
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2860_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int FUNC_2 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct rt2860_softc *VAR_3, uint8_t VAR_4, uint32_t VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  if (!(FUNC_1(VAR_3, VAR_0) & VAR_1))
   break;
  FUNC_0(1);
 }
 if (VAR_7 == 100) {
  FUNC_3(VAR_3->sc_dev, "could not write to RF\n");
  return;
 }


 VAR_6 = VAR_1 | 24 << VAR_2 |
     (VAR_5 & 0x3fffff) << 2 | (VAR_4 & 3);
 FUNC_2(VAR_3, VAR_0, VAR_6);
}
