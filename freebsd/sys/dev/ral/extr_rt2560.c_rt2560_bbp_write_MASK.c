
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2560_softc {int sc_dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2560_softc*,int,char*,int,int) ;
 int FUNC_2 (struct rt2560_softc*,int ) ;
 int FUNC_3 (struct rt2560_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct rt2560_softc *VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 100; VAR_7++) {
  if (!(FUNC_2(VAR_3, VAR_0) & VAR_1))
   break;
  FUNC_0(1);
 }
 if (VAR_7 == 100) {
  FUNC_4(VAR_3->sc_dev, "could not write to BBP\n");
  return;
 }

 VAR_6 = VAR_2 | VAR_1 | VAR_4 << 8 | VAR_5;
 FUNC_3(VAR_3, VAR_0, VAR_6);

 FUNC_1(VAR_3, 15, "BBP R%u <- 0x%02x\n", VAR_4, VAR_5);
}
