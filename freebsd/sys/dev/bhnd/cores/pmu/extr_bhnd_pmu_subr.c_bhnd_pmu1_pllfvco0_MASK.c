
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_query {TYPE_1__ cid; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bhnd_pmu_query*) ;
 int FUNC_1 (struct bhnd_pmu_query*,char*,int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct bhnd_pmu_query *VAR_3)
{
 switch (VAR_3->cid.chip_id) {
 case 130:
  return (VAR_1);
 case 131:
  return (VAR_0);
 case 128:
  return (VAR_2);
 case 129:
  if (FUNC_0(VAR_3))
   return (VAR_2);
  else
   return (VAR_0);
 default:
  FUNC_1(VAR_3, "bhnd_pmu1_pllfvco0: Unknown chipid %#hx\n",
      VAR_3->cid.chip_id);
  return (0);
 }
}
