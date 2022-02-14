
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip_id; } ;
struct bhnd_pmu_query {TYPE_1__ cid; } ;
typedef int pmu1_xtaltab0_t ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct bhnd_pmu_query*) ;
 int FUNC_1 (struct bhnd_pmu_query*,char*,int) ;
 int const* VAR_7 ;
 int const* VAR_8 ;
 int const* VAR_9 ;
 int const* VAR_10 ;
 int const* VAR_11 ;

__attribute__((used)) static const pmu1_xtaltab0_t *
FUNC_2(struct bhnd_pmu_query *VAR_12)
{
 switch (VAR_12->cid.chip_id) {
 case 133:

  return (&VAR_8[VAR_2]);
 case 132:

  return (&VAR_7[VAR_0]);
 case 131:

  return (&VAR_9[VAR_3]);
 case 130:

  return (&VAR_10[VAR_4]);
 case 128:

  return (&VAR_11[VAR_5]);
 case 129:

  if (FUNC_0(VAR_12))
   return (&VAR_11[VAR_6]);
  else
   return (&VAR_7[VAR_1]);
 default:
  FUNC_1(VAR_12, "bhnd_pmu1_xtaldef0: Unknown chipid %#hx\n",
      VAR_12->cid.chip_id);
  return (((void*)0));
 }
}
