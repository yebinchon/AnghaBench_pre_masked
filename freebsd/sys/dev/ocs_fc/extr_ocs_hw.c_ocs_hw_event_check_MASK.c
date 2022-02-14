
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_3__ {size_t eq_count; scalar_t__ state; int * eq; int sli; int os; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *) ;

int32_t
FUNC_3(ocs_hw_t *VAR_2, uint32_t VAR_3)
{
 int32_t VAR_4 = 0;

 if (!VAR_2) {
  FUNC_0(((void*)0), "HW context NULL?!?\n");
  return -1;
 }

 if (VAR_3 > VAR_2->eq_count) {
  FUNC_0(VAR_2->os, "vector %d. max %d\n",
    VAR_3, VAR_2->eq_count);
  return -1;
 }
 if (VAR_2->state != VAR_0) {
  VAR_4 = FUNC_2(&VAR_2->sli, &VAR_2->eq[VAR_3]);


  if (VAR_4 != 0) {
   FUNC_1(&VAR_2->sli, &VAR_2->eq[VAR_3], VAR_1);
  }
 }
 return VAR_4;
}
