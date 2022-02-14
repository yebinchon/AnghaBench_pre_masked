
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_pmic_softc {int sc_addr; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct am335x_pmic_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct am335x_pmic_softc *VAR_2;

 if (!FUNC_3(VAR_1, "ti,tps65217"))
  return (VAR_0);

 VAR_2 = FUNC_0(VAR_1);
 VAR_2->sc_dev = VAR_1;

 VAR_2->sc_addr = FUNC_2(VAR_1);

 FUNC_1(VAR_1, "TI TPS65217 Power Management IC");

 return (0);
}
