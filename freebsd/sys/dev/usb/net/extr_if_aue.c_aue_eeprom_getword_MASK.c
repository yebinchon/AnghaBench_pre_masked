
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int ue_dev; } ;
struct aue_softc {TYPE_1__ sc_ue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct aue_softc*,int ) ;
 int FUNC_1 (struct aue_softc*,int ) ;
 int FUNC_2 (struct aue_softc*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static uint16_t
FUNC_5(struct aue_softc *VAR_7, int VAR_8)
{
 int VAR_9;

 FUNC_2(VAR_7, VAR_4, VAR_8);
 FUNC_2(VAR_7, VAR_2, VAR_1);

 for (VAR_9 = 0; VAR_9 != VAR_5; VAR_9++) {
  if (FUNC_0(VAR_7, VAR_2) & VAR_0)
   break;
  if (FUNC_4(&VAR_7->sc_ue, VAR_6 / 100))
   break;
 }

 if (VAR_9 == VAR_5)
  FUNC_3(VAR_7->sc_ue.ue_dev, "EEPROM read timed out\n");

 return (FUNC_1(VAR_7, VAR_3));
}
