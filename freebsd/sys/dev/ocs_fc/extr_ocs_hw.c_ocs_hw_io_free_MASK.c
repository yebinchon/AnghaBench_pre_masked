
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int os; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_6__ {int ref; int reqtag; int indicator; } ;
typedef TYPE_2__ ocs_hw_io_t ;
typedef int int32_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

int32_t
FUNC_3(ocs_hw_t *VAR_0, ocs_hw_io_t *VAR_1)
{

 if (FUNC_2(&VAR_1->ref) <= 0) {
  FUNC_0(VAR_0->os, "Bad parameter: refcount <= 0 xri=%x tag=%x\n",
       VAR_1->indicator, VAR_1->reqtag);
  return -1;
 }

 return FUNC_1(&VAR_1->ref);
}
