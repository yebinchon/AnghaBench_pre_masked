
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pmu_softc {int dummy; } ;
typedef int device_t ;
typedef int bhnd_pmu_regulator ;



 int FUNC_0 (struct bhnd_pmu_softc*) ;
 int FUNC_1 (struct bhnd_pmu_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct bhnd_pmu_softc*,int) ;
 struct bhnd_pmu_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, bhnd_pmu_regulator VAR_2)
{
 struct bhnd_pmu_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1);

 switch (VAR_2) {
 case 128:
  FUNC_0(VAR_3);
  VAR_4 = FUNC_2(VAR_3, 1);
  FUNC_1(VAR_3);

  return (VAR_4);

 default:
  return (VAR_0);
 }
}
