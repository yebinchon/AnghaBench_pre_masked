
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qlnx_fastpath {int * fp_taskqueue; int fp_task; } ;
struct TYPE_3__ {int num_rss; struct qlnx_fastpath* fp_array; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(qlnx_host_t *VAR_0)
{
 int VAR_1;
 struct qlnx_fastpath *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rss; VAR_1++) {

                VAR_2 = &VAR_0->fp_array[VAR_1];

  if (VAR_2->fp_taskqueue != ((void*)0)) {

   FUNC_0(VAR_2->fp_taskqueue, &VAR_2->fp_task);
   FUNC_1(VAR_2->fp_taskqueue);
   VAR_2->fp_taskqueue = ((void*)0);
  }
 }
 return;
}
