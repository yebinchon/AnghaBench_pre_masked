
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct stge_softc {int sc_dev; } ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (struct stge_softc*) ;

__attribute__((used)) static void
FUNC_6(struct stge_softc *VAR_3, int VAR_4, uint16_t *VAR_5)
{

 if (FUNC_5(VAR_3))
  FUNC_4(VAR_3->sc_dev, "EEPROM failed to come ready\n");

 FUNC_1(VAR_3, VAR_1,
     FUNC_2(VAR_4) | FUNC_3(VAR_0));
 if (FUNC_5(VAR_3))
  FUNC_4(VAR_3->sc_dev, "EEPROM read timed out\n");
 *VAR_5 = FUNC_0(VAR_3, VAR_2);
}
