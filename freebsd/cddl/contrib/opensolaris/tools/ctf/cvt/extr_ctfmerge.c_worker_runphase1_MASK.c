
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int wq_nomorefiles; int wq_nwipslots; scalar_t__ wq_maxbatchsz; int wq_queue_lock; TYPE_2__* wq_wip; int wq_work_removed; int wq_nextpownum; int wq_queue; int wq_work_avail; } ;
typedef TYPE_1__ workqueue_t ;
struct TYPE_8__ {scalar_t__ wip_nmerged; int wip_lock; } ;
typedef TYPE_2__ wip_t ;
typedef int tdata_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_9(workqueue_t *VAR_0)
{
 wip_t *VAR_1;
 tdata_t *VAR_2;
 int VAR_3, VAR_4;

 for (;;) {
  FUNC_5(&VAR_0->wq_queue_lock);

  while (FUNC_1(VAR_0->wq_queue)) {
   if (VAR_0->wq_nomorefiles == 1) {
    FUNC_3(&VAR_0->wq_work_avail);
    FUNC_6(&VAR_0->wq_queue_lock);


    return;
   }

   FUNC_4(&VAR_0->wq_work_avail,
       &VAR_0->wq_queue_lock);
  }


  VAR_2 = FUNC_2(VAR_0->wq_queue);
  VAR_4 = VAR_0->wq_nextpownum++;
  FUNC_3(&VAR_0->wq_work_removed);

  FUNC_0(VAR_2 != ((void*)0));


  VAR_3 = VAR_4 % VAR_0->wq_nwipslots;
  VAR_1 = &VAR_0->wq_wip[VAR_3];

  FUNC_5(&VAR_1->wip_lock);

  FUNC_6(&VAR_0->wq_queue_lock);

  FUNC_7(VAR_1, VAR_2);

  if (VAR_1->wip_nmerged == VAR_0->wq_maxbatchsz)
   FUNC_8(VAR_0, VAR_1, VAR_3);

  FUNC_6(&VAR_1->wip_lock);
 }
}
