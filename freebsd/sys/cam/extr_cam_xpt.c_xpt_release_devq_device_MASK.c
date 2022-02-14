
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_5__ {scalar_t__ qfrozen_cnt; } ;
struct TYPE_6__ {TYPE_1__ queue; } ;
struct cam_ed {int flags; TYPE_3__* sim; int callout; TYPE_2__ ccbq; } ;
struct TYPE_8__ {int send_mtx; } ;
struct TYPE_7__ {TYPE_4__* devq; } ;


 int FUNC_0 (struct cam_ed*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;
 int FUNC_4 (TYPE_4__*,struct cam_ed*) ;

__attribute__((used)) static int
FUNC_5(struct cam_ed *VAR_4, u_int VAR_5, int VAR_6)
{

 FUNC_2(&VAR_4->sim->devq->send_mtx, VAR_3);
 FUNC_0(VAR_4, VAR_0,
     ("xpt_release_devq_device(%d, %d) %u->%u\n", VAR_5, VAR_6,
     VAR_4->ccbq.queue.qfrozen_cnt, VAR_4->ccbq.queue.qfrozen_cnt - VAR_5));
 if (VAR_5 > VAR_4->ccbq.queue.qfrozen_cnt) {




  VAR_5 = VAR_4->ccbq.queue.qfrozen_cnt;
 }
 VAR_4->ccbq.queue.qfrozen_cnt -= VAR_5;
 if (VAR_4->ccbq.queue.qfrozen_cnt == 0) {




  VAR_4->flags &= ~VAR_1;




  if ((VAR_4->flags & VAR_2) != 0) {
   FUNC_1(&VAR_4->callout);
   VAR_4->flags &= ~VAR_2;
  }





  FUNC_4(VAR_4->sim->devq, VAR_4);
 } else
  VAR_6 = 0;
 return (VAR_6);
}
