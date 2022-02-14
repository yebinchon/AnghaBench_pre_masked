
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct bhnd_pmu_softc {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bhnd_pmu_softc*,int ,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_3(struct bhnd_pmu_softc *VAR_3, uint32_t VAR_4, bool VAR_5)
{
 uint32_t VAR_6;

 VAR_6 = 0;
 for (uint8_t VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++) {
  if (!(VAR_4 & FUNC_0(VAR_7)))
   continue;

  FUNC_2(VAR_3, VAR_2, VAR_7);
  VAR_6 |= FUNC_1(VAR_3, VAR_1);
 }


 if (VAR_6 == 0)
  return (0);


 if (VAR_5)
  VAR_6 |= FUNC_3(VAR_3, VAR_6, 1);

 return (VAR_6);
}
