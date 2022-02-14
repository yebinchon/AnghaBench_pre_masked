
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct dsl_dataset {scalar_t__* ds_feature_inuse; } ;
struct TYPE_7__ {struct dsl_dataset* os_dsl_dataset; } ;
typedef TYPE_1__ objset_t ;
struct TYPE_8__ {int doi_dnodesize; } ;
typedef TYPE_2__ dmu_object_info_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int*,int ,int,int) ;

int
FUNC_3(objset_t *VAR_6, uint64_t *VAR_7, boolean_t VAR_8, uint64_t VAR_9)
{
 uint64_t VAR_10;
 uint64_t VAR_11;
 struct dsl_dataset *VAR_12 = VAR_6->os_dsl_dataset;
 int VAR_13;

 if (*VAR_7 == 0) {
  VAR_11 = 1;
 } else if (VAR_12 && VAR_12->ds_feature_inuse[VAR_5]) {
  uint64_t VAR_14 = *VAR_7 + 1;
  uint64_t VAR_15 = *VAR_7 | (VAR_0 - 1);
  dmu_object_info_t VAR_16;







  while (VAR_14 <= VAR_15) {
   VAR_13 = FUNC_1(VAR_6, VAR_14, &VAR_16);
   if (VAR_13 == VAR_4) {
    if (VAR_8) {
     *VAR_7 = VAR_14;
     return (0);
    } else {
     VAR_14++;
    }
   } else if (VAR_13 == VAR_3) {
    VAR_14++;
   } else if (VAR_13 == 0) {
    if (VAR_8) {
     VAR_14 += VAR_16.doi_dnodesize >> VAR_2;
    } else {
     *VAR_7 = VAR_14;
     return (0);
    }
   } else {
    return (VAR_13);
   }
  }

  VAR_11 = VAR_14;
 } else {
  VAR_11 = *VAR_7 + 1;
 }

 VAR_10 = VAR_11 << VAR_2;

 VAR_13 = FUNC_2(FUNC_0(VAR_6),
     (VAR_8 ? VAR_1 : 0), &VAR_10, 0, VAR_0, VAR_9);

 *VAR_7 = VAR_10 >> VAR_2;

 return (VAR_13);
}
