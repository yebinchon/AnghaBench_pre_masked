
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qlnx_fastpath {int fp_task; int * fp_taskqueue; } ;
struct TYPE_5__ {int num_rss; struct qlnx_fastpath* fp_array; } ;
typedef TYPE_1__ qlnx_host_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(qlnx_host_t *VAR_0)
{
 int VAR_1;
 struct qlnx_fastpath *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rss; VAR_1++) {
                VAR_2 = &VAR_0->fp_array[VAR_1];

  if (VAR_2->fp_taskqueue != ((void*)0)) {
   FUNC_1(VAR_0);
   FUNC_2(VAR_2->fp_taskqueue, &VAR_2->fp_task);
   FUNC_0(VAR_0);
  }
 }
 return;
}
