
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {scalar_t__ remove_in_progress; int mrsas_aen_triggered; int ev_task; int ev_tq; int * aen_cmd; int aen_lock; int mrsas_select; scalar_t__ mrsas_poll_waiting; } ;
struct mrsas_mfi_cmd {scalar_t__ abort_aen; } ;


 int FUNC_0 (struct mrsas_mfi_cmd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

void
FUNC_5(struct mrsas_softc *VAR_0, struct mrsas_mfi_cmd *VAR_1)
{




 if ((!VAR_1->abort_aen) && (VAR_0->remove_in_progress == 0)) {
  VAR_0->mrsas_aen_triggered = 1;
  FUNC_1(&VAR_0->aen_lock);
  if (VAR_0->mrsas_poll_waiting) {
   VAR_0->mrsas_poll_waiting = 0;
   FUNC_3(&VAR_0->mrsas_select);
  }
  FUNC_2(&VAR_0->aen_lock);
 } else
  VAR_1->abort_aen = 0;

 VAR_0->aen_cmd = ((void*)0);
 FUNC_0(VAR_1);

 FUNC_4(VAR_0->ev_tq, &VAR_0->ev_task);

 return;
}
