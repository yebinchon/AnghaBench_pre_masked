
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_softc {TYPE_1__ cid; } ;
 int FUNC_0 (struct bhnd_pmu_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

bool
FUNC_2(struct bhnd_pmu_softc *VAR_5)
{
 uint32_t VAR_6;


 switch (VAR_5->cid.chip_id) {
 case 131:
  VAR_6 = FUNC_1(VAR_2);
  break;
 case 137:
  VAR_6 = FUNC_1(VAR_1);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_4);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_3);
  break;




 case 136:
 case 135:
 case 128:
 case 133:
 case 134:
 case 132:
  return (1);

 default:
  return (1);
 }


 if ((FUNC_0(VAR_5, VAR_0) & VAR_6) == 0)
  return (0);

 return (1);
}
