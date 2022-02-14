
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ entries; scalar_t__ qfrozen_cnt; } ;
struct TYPE_3__ {scalar_t__ dev_openings; TYPE_2__ queue; } ;
struct cam_ed {TYPE_1__ ccbq; int devq_entry; } ;
struct cam_devq {int send_queue; int send_mtx; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static __inline int
FUNC_3(struct cam_devq *VAR_1, struct cam_ed *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_1->send_mtx, VAR_0);
 if ((VAR_2->ccbq.queue.entries > 0) &&
     (VAR_2->ccbq.dev_openings > 0) &&
     (VAR_2->ccbq.queue.qfrozen_cnt == 0)) {





  VAR_3 =
      FUNC_2(&VAR_1->send_queue,
         &VAR_2->devq_entry,
         FUNC_0(&VAR_2->ccbq.queue));
 } else {
  VAR_3 = 0;
 }
 return (VAR_3);
}
