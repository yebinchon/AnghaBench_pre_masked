
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_5__ {int os; int * fcf_index_fcfi; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_domain_t ;


 size_t VAR_0 ;
 int * FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char*,size_t,size_t) ;

__attribute__((used)) static ocs_domain_t *
FUNC_3(ocs_hw_t *VAR_1, uint16_t VAR_2)
{

 if (VAR_1 == ((void*)0)) {
  FUNC_1(((void*)0), "bad parameter hw=%p\n", VAR_1);
  return ((void*)0);
 }

 if (VAR_2 < VAR_0) {
  return FUNC_0(VAR_1, VAR_1->fcf_index_fcfi[VAR_2]);
 } else {
  FUNC_2(VAR_1->os, "FCF index %d out of range (max %d)\n",
        VAR_2, VAR_0);
  return ((void*)0);
 }
}
