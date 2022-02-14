
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_softc {int query; } ;
typedef int device_t ;
typedef int bhnd_clock ;






 int FUNC_0 (struct bhnd_pmu_softc*) ;
 int FUNC_1 (struct bhnd_pmu_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct bhnd_pmu_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, bhnd_clock VAR_2, uint32_t *VAR_3)
{
 struct bhnd_pmu_softc *VAR_4 = FUNC_5(VAR_1);

 FUNC_0(VAR_4);
 switch (VAR_2) {
 case 129:
  *VAR_3 = FUNC_4(&VAR_4->query);
  break;

 case 131:
  *VAR_3 = FUNC_2(&VAR_4->query);
  break;

 case 128:
  *VAR_3 = FUNC_3(&VAR_4->query);
  break;

 case 130:
 default:
  FUNC_1(VAR_4);
  return (VAR_0);
 }

 FUNC_1(VAR_4);
 return (0);
}
