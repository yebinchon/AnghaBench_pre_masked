
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct bhnd_pmu_query*) ;
 int FUNC_1 (struct bhnd_pmu_query*,int ,int ) ;
 int FUNC_2 (struct bhnd_pmu_query*,int ,int ) ;
 int FUNC_3 (struct bhnd_pmu_query*) ;

uint32_t
FUNC_4(struct bhnd_pmu_query *VAR_15)
{
 if (FUNC_0(VAR_15) >= 5 &&
     VAR_15->cid.chip_id != VAR_6 &&
     VAR_15->cid.chip_id != VAR_0 &&
     VAR_15->cid.chip_id != VAR_1 &&
     VAR_15->cid.chip_id != VAR_2 &&
     VAR_15->cid.chip_id != VAR_3 &&
     VAR_15->cid.chip_id != VAR_4 &&
     VAR_15->cid.chip_id != VAR_5 &&
     VAR_15->cid.chip_id != VAR_8 &&
     VAR_15->cid.chip_id != VAR_7)
 {
  switch (VAR_15->cid.chip_id) {
  case 129:
   return (FUNC_1(VAR_15, VAR_11,
       VAR_13));

  case 128:
  case 130:
   return (FUNC_1(VAR_15, VAR_12,
       VAR_13));

  case 131:
   return (FUNC_2(VAR_15,
       VAR_9, VAR_14));

  default:
   return (FUNC_1(VAR_15, VAR_10,
       VAR_13));
  }

 } else {
  return (FUNC_3(VAR_15));
 }
}
