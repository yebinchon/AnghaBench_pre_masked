
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; } ;





 int FUNC_0 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bhnd_pmu_softc*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_3(struct bhnd_pmu_softc *VAR_5, bool VAR_6)
{
 uint32_t VAR_7;

 switch (VAR_5->cid.chip_id) {
 case 129:
  VAR_7 = FUNC_2(VAR_3);
  break;
 case 128:
  VAR_7 = FUNC_2(VAR_4);
  break;
 case 130:
  VAR_7 = FUNC_2(VAR_2);
  break;
 default:
  return (VAR_1);
 }

 if (VAR_6) {
  FUNC_1(VAR_5, VAR_0, VAR_7);
 } else {
  FUNC_0(VAR_5, VAR_0, ~VAR_7);
 }

 return (0);
}
