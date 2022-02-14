
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int num_rq_threads; TYPE_6__* rq_thread_info; TYPE_2__* ocs; } ;
typedef TYPE_1__ ocs_xport_t ;
typedef int ocs_xport_rq_thread_info_t ;
struct TYPE_13__ {int instance_index; } ;
typedef TYPE_2__ ocs_t ;
typedef int int32_t ;
struct TYPE_14__ {int thread_started; int thread_name; int thread; int * seq_cbuf; TYPE_2__* ocs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int) ;
 int FUNC_2 (TYPE_2__*,char*,...) ;
 TYPE_6__* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (int ,int,char*,int ,int) ;
 int FUNC_5 (TYPE_2__*,int *,int ,int ,TYPE_6__*,int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int32_t
FUNC_7(ocs_xport_t *VAR_5, uint32_t VAR_6)
{
 ocs_t *VAR_7 = VAR_5->ocs;
 int32_t VAR_8 = 0;
 uint32_t VAR_9;

 VAR_5->num_rq_threads = VAR_6;
 FUNC_1(VAR_7, "number of RQ threads %d\n", VAR_6);
 if (VAR_6 == 0) {
  return 0;
 }


 VAR_5->rq_thread_info = FUNC_3(VAR_7, sizeof(ocs_xport_rq_thread_info_t) * VAR_6, VAR_1);
 if (VAR_5->rq_thread_info == ((void*)0)) {
  FUNC_2(VAR_7, "memory allocation failure\n");
  return -1;
 }


 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  VAR_5->rq_thread_info[VAR_9].ocs = VAR_7;
  VAR_5->rq_thread_info[VAR_9].seq_cbuf = FUNC_0(VAR_7, VAR_0);
  if (VAR_5->rq_thread_info[VAR_9].seq_cbuf == ((void*)0)) {
   goto ocs_xport_rq_threads_create_error;
  }

  FUNC_4(VAR_5->rq_thread_info[VAR_9].thread_name,
        sizeof(VAR_5->rq_thread_info[VAR_9].thread_name),
        "ocs_unsol_rq:%d:%d", VAR_7->instance_index, VAR_9);
  VAR_8 = FUNC_5(VAR_7, &VAR_5->rq_thread_info[VAR_9].thread, VAR_4,
           VAR_5->rq_thread_info[VAR_9].thread_name,
           &VAR_5->rq_thread_info[VAR_9], VAR_2);
  if (VAR_8) {
   FUNC_2(VAR_7, "ocs_thread_create failed: %d\n", VAR_8);
   goto ocs_xport_rq_threads_create_error;
  }
  VAR_5->rq_thread_info[VAR_9].thread_started = VAR_3;
 }
 return 0;

ocs_xport_rq_threads_create_error:
 FUNC_6(VAR_5);
 return -1;
}
