
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {int thread_started; int thread; int seq_cbuf; int * ocs; } ;
typedef TYPE_2__ ocs_xport_rq_thread_info_t ;
struct TYPE_11__ {int name; TYPE_2__* arg; } ;
typedef TYPE_3__ ocs_thread_t ;
typedef int ocs_t ;
struct TYPE_12__ {TYPE_1__* hw; } ;
typedef TYPE_4__ ocs_hw_sequence_t ;
typedef int int32_t ;
struct TYPE_9__ {scalar_t__ os; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;

int32_t
FUNC_5(ocs_thread_t *VAR_2)
{
 ocs_xport_rq_thread_info_t *VAR_3 = VAR_2->arg;
 ocs_t *VAR_4 = VAR_3->ocs;
 ocs_hw_sequence_t *VAR_5;
 uint32_t VAR_6 = VAR_1;

 FUNC_1(VAR_4, "%s running\n", VAR_2->name);
 while (!FUNC_2(VAR_2)) {
  VAR_5 = FUNC_0(VAR_3->seq_cbuf, 100000);
  if (VAR_5 == ((void*)0)) {

   FUNC_3(&VAR_3->thread);
   VAR_6 = VAR_1;
   continue;
  }

  FUNC_4((ocs_t*)VAR_5->hw->os, VAR_5);


  if (--VAR_6 == 0) {
   FUNC_3(&VAR_3->thread);
   VAR_6 = VAR_1;
  }
 }
 FUNC_1(VAR_4, "%s exiting\n", VAR_2->name);
 VAR_3->thread_started = VAR_0;
 return 0;
}
