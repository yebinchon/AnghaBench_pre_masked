
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct armada_thermal_softc {int * tdata; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct armada_thermal_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct armada_thermal_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 if (!FUNC_3(VAR_3))
  return (VAR_1);

 if (FUNC_2(VAR_3, "marvell,armada380-thermal")) {
  FUNC_1(VAR_3, "Armada380 Thermal Control");
  VAR_4->tdata = &VAR_2;

  return (VAR_0);
 }

 return (VAR_1);
}
