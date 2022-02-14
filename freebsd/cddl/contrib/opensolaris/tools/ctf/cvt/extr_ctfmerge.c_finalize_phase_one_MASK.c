
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wq_nwipslots; scalar_t__ wq_lastdonebatch; int wq_donequeue; int wq_next_batchid; TYPE_2__* wq_wip; } ;
typedef TYPE_1__ workqueue_t ;
struct TYPE_5__ {scalar_t__ wip_batchid; int * wip_td; int wip_nmerged; } ;
typedef TYPE_2__ wip_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(workqueue_t *VAR_0)
{
 int VAR_1, VAR_2;
 for (VAR_1 = -1, VAR_2 = 0; VAR_2 < VAR_0->wq_nwipslots; VAR_2++) {
  if (VAR_0->wq_wip[VAR_2].wip_batchid == VAR_0->wq_lastdonebatch + 1) {
   VAR_1 = VAR_2;
   break;
  }
 }

 FUNC_0(VAR_1 != -1);

 for (VAR_2 = VAR_1; VAR_2 < VAR_1 + VAR_0->wq_nwipslots; VAR_2++) {
  int VAR_3 = VAR_2 % VAR_0->wq_nwipslots;
  wip_t *VAR_4 = &VAR_0->wq_wip[VAR_3];

  if (VAR_4->wip_td != ((void*)0)) {
   FUNC_1(2, "clearing slot %d (%d) (saving %d)\n",
       VAR_3, VAR_2, VAR_4->wip_nmerged);
  } else
   FUNC_1(2, "clearing slot %d (%d)\n", VAR_3, VAR_2);

  if (VAR_4->wip_td != ((void*)0)) {
   FUNC_2(VAR_0->wq_donequeue, VAR_4->wip_td);
   VAR_0->wq_wip[VAR_3].wip_td = ((void*)0);
  }
 }

 VAR_0->wq_lastdonebatch = VAR_0->wq_next_batchid++;

 FUNC_1(2, "phase one done: donequeue has %d items\n",
     FUNC_3(VAR_0->wq_donequeue));
}
