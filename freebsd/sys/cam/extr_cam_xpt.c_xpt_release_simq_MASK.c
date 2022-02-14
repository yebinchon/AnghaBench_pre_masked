
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_sim {int flags; struct cam_devq* devq; int callout; } ;
struct TYPE_2__ {scalar_t__ qfrozen_cnt; } ;
struct cam_devq {int send_mtx; TYPE_1__ send_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (struct cam_devq*) ;

void
FUNC_5(struct cam_sim *VAR_1, int VAR_2)
{
 struct cam_devq *VAR_3;

 VAR_3 = VAR_1->devq;
 FUNC_1(&VAR_3->send_mtx);
 if (VAR_3->send_queue.qfrozen_cnt <= 0) {




 } else
  VAR_3->send_queue.qfrozen_cnt--;
 if (VAR_3->send_queue.qfrozen_cnt == 0) {





  if ((VAR_1->flags & VAR_0) != 0){
   FUNC_0(&VAR_1->callout);
   VAR_1->flags &= ~VAR_0;
  }
  if (VAR_2) {



   FUNC_4(VAR_1->devq);
  }
 }
 FUNC_2(&VAR_3->send_mtx);
}
