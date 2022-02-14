
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bhnd_pmu_softc*,int ) ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int) ;

uint32_t
FUNC_2(struct bhnd_pmu_softc *VAR_3, bool VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_0);
 VAR_5 = VAR_6;

 if (VAR_4)
  VAR_6 &= ~(VAR_2 | VAR_1);
 else
  VAR_6 |= (VAR_2 | VAR_1);

 FUNC_1(VAR_3, VAR_0, VAR_6);

 return (VAR_5);
}
