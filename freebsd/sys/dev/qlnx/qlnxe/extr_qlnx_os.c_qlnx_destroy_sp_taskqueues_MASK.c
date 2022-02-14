
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_hwfns; } ;
struct TYPE_5__ {int ** sp_taskqueue; int * sp_task; TYPE_1__ cdev; } ;
typedef TYPE_2__ qlnx_host_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->cdev.num_hwfns; VAR_1++) {
  if (VAR_0->sp_taskqueue[VAR_1] != ((void*)0)) {
   FUNC_0(VAR_0->sp_taskqueue[VAR_1], &VAR_0->sp_task[VAR_1]);
   FUNC_1(VAR_0->sp_taskqueue[VAR_1]);
  }
 }
 return;
}
