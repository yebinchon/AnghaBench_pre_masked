
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_4__ {int os; int ** domains; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_domain_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,char*,TYPE_1__*) ;
 int FUNC_1 (int ,char*,size_t,size_t) ;

ocs_domain_t *
FUNC_2(ocs_hw_t *VAR_1, uint16_t VAR_2)
{

 if (VAR_1 == ((void*)0)) {
  FUNC_0(((void*)0), "bad parameter hw=%p\n", VAR_1);
  return ((void*)0);
 }

 if (VAR_2 < VAR_0) {
  return VAR_1->domains[VAR_2];
 } else {
  FUNC_1(VAR_1->os, "FCFI %#x out of range (max %#x)\n",
    VAR_2, VAR_0);
  return ((void*)0);
 }
}
