
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ural_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct ural_softc*,int) ;
 int FUNC_2 (struct ural_softc*,int ) ;
 int FUNC_3 (struct ural_softc*,int ,int) ;

__attribute__((used)) static uint8_t
FUNC_4(struct ural_softc *VAR_5, uint8_t VAR_6)
{
 uint16_t VAR_7;
 int VAR_8;

 VAR_7 = VAR_1 | VAR_6 << 8;
 FUNC_3(VAR_5, VAR_2, VAR_7);

 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  if (!(FUNC_2(VAR_5, VAR_3) & VAR_0))
   break;
  if (FUNC_1(VAR_5, VAR_4 / 100))
   break;
 }
 if (VAR_8 == 100) {
  FUNC_0(VAR_5->sc_dev, "could not read BBP\n");
  return 0;
 }

 return FUNC_2(VAR_5, VAR_2) & 0xff;
}
