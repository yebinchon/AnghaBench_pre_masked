
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {scalar_t__ num_rq_threads; TYPE_1__* rq_thread_info; int * ocs; } ;
typedef TYPE_2__ ocs_xport_t ;
typedef int ocs_t ;
struct TYPE_4__ {int * seq_cbuf; scalar_t__ thread_started; int thread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(ocs_xport_t *VAR_0)
{
 ocs_t *VAR_1 = VAR_0->ocs;
 uint32_t VAR_2;

 if (VAR_0->num_rq_threads == 0 ||
     VAR_0->rq_thread_info == ((void*)0)) {
  return;
 }


 for (VAR_2 = 0; VAR_2 < VAR_0->num_rq_threads; VAR_2++) {
  if (VAR_0->rq_thread_info[VAR_2].thread_started) {
   FUNC_2(&VAR_0->rq_thread_info[VAR_2].thread);

   FUNC_1(VAR_1, "wait for thread %d to exit\n", VAR_2);
   while (VAR_0->rq_thread_info[VAR_2].thread_started) {
    FUNC_3(10000);
   }
   FUNC_1(VAR_1, "thread %d to exited\n", VAR_2);
  }
  if (VAR_0->rq_thread_info[VAR_2].seq_cbuf != ((void*)0)) {
   FUNC_0(VAR_0->rq_thread_info[VAR_2].seq_cbuf);
   VAR_0->rq_thread_info[VAR_2].seq_cbuf = ((void*)0);
  }
 }
}
