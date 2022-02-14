
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ecore_hwfn {scalar_t__ p_dev; } ;
struct TYPE_3__ {int err_task; int err_taskqueue; } ;
typedef TYPE_1__ qlnx_host_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(void *VAR_0)
{
 qlnx_host_t *VAR_1;

 VAR_1 = (qlnx_host_t *)((struct ecore_hwfn *)VAR_0)->p_dev;

 if (FUNC_0(VAR_1) != 0) {
  FUNC_1(VAR_1->err_taskqueue, &VAR_1->err_task);
 }

 return;
}
