
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_softc {int dummy; } ;
typedef int device_t ;
typedef int bhnd_pmu_regulator ;



 int FUNC_0 (struct bhnd_pmu_softc*) ;
 int FUNC_1 (struct bhnd_pmu_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bhnd_pmu_softc*,int ,int ) ;
 struct bhnd_pmu_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, bhnd_pmu_regulator VAR_5,
    uint32_t VAR_6)
{
 struct bhnd_pmu_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_4);

 switch (VAR_5) {
 case 128:
  if (VAR_6 > VAR_3)
   return (VAR_0);

  FUNC_0(VAR_7);
  VAR_8 = FUNC_2(VAR_7, VAR_2,
      VAR_6);
  FUNC_1(VAR_7);

  return (VAR_8);

 default:
  return (VAR_1);
 }
}
