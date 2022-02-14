
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pmu_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct bhnd_pmu_softc*) ;
 struct bhnd_pmu_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;

int
FUNC_3(device_t VAR_0)
{
 struct bhnd_pmu_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0);


 if ((VAR_2 = FUNC_0(VAR_1))) {
  FUNC_2(VAR_1->dev, "PMU init failed: %d\n", VAR_2);
  return (VAR_2);
 }

 return (0);
}
