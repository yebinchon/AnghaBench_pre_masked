
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct bhnd_pmu_softc*,int ) ;
 int FUNC_1 (struct bhnd_pmu_softc*) ;
 int FUNC_2 (struct bhnd_pmu_softc*) ;
 struct bhnd_pmu_softc* FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(device_t VAR_0, uint32_t VAR_1)
{
 struct bhnd_pmu_softc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_3(VAR_0);

 FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_2);

 return (VAR_3);
}
