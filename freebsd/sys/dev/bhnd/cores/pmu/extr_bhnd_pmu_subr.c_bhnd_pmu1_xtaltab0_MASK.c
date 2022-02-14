
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_query {TYPE_1__ cid; } ;
typedef int pmu1_xtaltab0_t ;
 int FUNC_0 (struct bhnd_pmu_query*) ;
 int FUNC_1 (struct bhnd_pmu_query*,char*,int) ;
 int const* VAR_0 ;
 int const* VAR_1 ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;

__attribute__((used)) static const pmu1_xtaltab0_t *
FUNC_2(struct bhnd_pmu_query *VAR_5)
{
 switch (VAR_5->cid.chip_id) {
 case 133:
  return (VAR_1);
 case 132:
  return (VAR_0);
 case 131:
  return (VAR_2);
 case 130:
  return (VAR_3);
 case 128:
  return (VAR_4);
 case 129:
  if (FUNC_0(VAR_5))
   return (VAR_4);
  else
   return (VAR_0);
 default:
  FUNC_1(VAR_5, "bhnd_pmu1_xtaltab0: Unknown chipid %#hx\n",
      VAR_5->cid.chip_id);
  return (((void*)0));
 }
}
