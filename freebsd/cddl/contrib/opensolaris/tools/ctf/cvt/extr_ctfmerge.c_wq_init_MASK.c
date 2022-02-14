
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wq_maxbatchsz; int wq_nwipslots; int wq_nthreads; int wq_ithrottle; int wq_ninqueue; int wq_lastdonebatch; scalar_t__ wq_nomorefiles; int wq_bar2; int wq_bar1; scalar_t__ wq_alldone; int wq_alldone_cv; int wq_done_cv; void* wq_donequeue; int wq_donequeue_lock; scalar_t__ wq_nextpownum; int wq_work_removed; int wq_work_avail; void* wq_queue; int wq_queue_lock; scalar_t__ wq_next_batchid; TYPE_2__* wq_wip; int wq_thread; } ;
typedef TYPE_1__ workqueue_t ;
typedef int wip_t ;
typedef int pthread_t ;
struct TYPE_5__ {scalar_t__ wip_batchid; int wip_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int) ;
 int VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int,char*,int,int) ;
 void* FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(workqueue_t *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 if (FUNC_5("CTFMERGE_MAX_SLOTS"))
  VAR_7 = FUNC_1(FUNC_5("CTFMERGE_MAX_SLOTS"));
 else
  VAR_7 = VAR_2;

 if (FUNC_5("CTFMERGE_PHASE1_BATCH_SIZE"))
  VAR_4->wq_maxbatchsz = FUNC_1(FUNC_5("CTFMERGE_PHASE1_BATCH_SIZE"));
 else
  VAR_4->wq_maxbatchsz = VAR_1;

 VAR_7 = FUNC_0(VAR_7, (VAR_5 + VAR_4->wq_maxbatchsz - 1) /
     VAR_4->wq_maxbatchsz);

 VAR_4->wq_wip = FUNC_9(sizeof (wip_t) * VAR_7);
 VAR_4->wq_nwipslots = VAR_7;
 VAR_4->wq_nthreads = FUNC_0(FUNC_8(VAR_3) * 3 / 2, VAR_7);
 VAR_4->wq_thread = FUNC_10(sizeof (pthread_t) * VAR_4->wq_nthreads);

 if (FUNC_5("CTFMERGE_INPUT_THROTTLE"))
  VAR_6 = FUNC_1(FUNC_5("CTFMERGE_INPUT_THROTTLE"));
 else
  VAR_6 = VAR_0;
 VAR_4->wq_ithrottle = VAR_6 * VAR_4->wq_nthreads;

 FUNC_3(1, "Using %d slots, %d threads\n", VAR_4->wq_nwipslots,
     VAR_4->wq_nthreads);

 VAR_4->wq_next_batchid = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  FUNC_7(&VAR_4->wq_wip[VAR_8].wip_lock, ((void*)0));
  VAR_4->wq_wip[VAR_8].wip_batchid = VAR_4->wq_next_batchid++;
 }

 FUNC_7(&VAR_4->wq_queue_lock, ((void*)0));
 VAR_4->wq_queue = FUNC_4();
 FUNC_6(&VAR_4->wq_work_avail, ((void*)0));
 FUNC_6(&VAR_4->wq_work_removed, ((void*)0));
 VAR_4->wq_ninqueue = VAR_5;
 VAR_4->wq_nextpownum = 0;

 FUNC_7(&VAR_4->wq_donequeue_lock, ((void*)0));
 VAR_4->wq_donequeue = FUNC_4();
 VAR_4->wq_lastdonebatch = -1;

 FUNC_6(&VAR_4->wq_done_cv, ((void*)0));

 FUNC_6(&VAR_4->wq_alldone_cv, ((void*)0));
 VAR_4->wq_alldone = 0;

 FUNC_2(&VAR_4->wq_bar1, VAR_4->wq_nthreads);
 FUNC_2(&VAR_4->wq_bar2, VAR_4->wq_nthreads);

 VAR_4->wq_nomorefiles = 0;
}
