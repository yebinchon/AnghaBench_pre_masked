
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bhnd_pmu_softc {int dummy; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ) ;
 int FUNC_2 (struct bhnd_pmu_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct bhnd_pmu_softc*,int ,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_4 (int) ;
 int VAR_5 ;

uint32_t
FUNC_5(struct bhnd_pmu_softc *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;

 if (FUNC_2(VAR_6) < 10)
  return (0);

 VAR_8 = FUNC_1(VAR_6, VAR_0);
 if (VAR_8 & VAR_1) {
  uint32_t VAR_9, VAR_10;


  FUNC_3(VAR_6, VAR_2, 1U <<
      VAR_4);


  FUNC_4(1000);


  VAR_10 = FUNC_1(VAR_6, VAR_2);
  VAR_10 = FUNC_0(VAR_10,
      VAR_3);


  FUNC_3(VAR_6, VAR_2, 0);


  VAR_9 = (VAR_10 * VAR_5) / 4;


  VAR_7 = (VAR_9 + 50000) / 100000 * 100;
 } else {
  VAR_7 = 0;
 }

 return (VAR_7);
}
