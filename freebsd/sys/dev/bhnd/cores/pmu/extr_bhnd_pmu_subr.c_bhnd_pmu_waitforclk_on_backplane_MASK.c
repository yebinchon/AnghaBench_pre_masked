
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bhnd_pmu_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bhnd_pmu_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

uint32_t
FUNC_2(struct bhnd_pmu_softc *VAR_1, uint32_t VAR_2,
    uint32_t VAR_3)
{
 uint32_t VAR_4;

 for (uint32_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += 10) {
  VAR_4 = FUNC_0(VAR_1, VAR_0);
  if ((VAR_4 & VAR_2) == VAR_2)
   return (VAR_2);

  FUNC_1(10);
 }

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 return (VAR_4 & VAR_2);
}
