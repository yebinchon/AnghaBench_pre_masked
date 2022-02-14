
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 void* FUNC_3 (TYPE_1__ const*,int *,size_t*) ;

void *
FUNC_4(const nvlist_t *VAR_1, size_t *VAR_2)
{

 FUNC_1(VAR_1);

 if (VAR_1->nvl_error != 0) {
  FUNC_0(VAR_1->nvl_error);
  return (((void*)0));
 }

 if (FUNC_2(VAR_1) > 0) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 return (FUNC_3(VAR_1, ((void*)0), VAR_2));
}
