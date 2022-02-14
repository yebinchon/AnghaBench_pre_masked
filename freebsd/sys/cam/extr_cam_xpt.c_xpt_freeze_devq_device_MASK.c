
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_7__ {int index; } ;
struct TYPE_5__ {scalar_t__ qfrozen_cnt; } ;
struct TYPE_6__ {TYPE_1__ queue; } ;
struct cam_ed {TYPE_3__ devq_entry; TYPE_2__ ccbq; TYPE_4__* sim; } ;
struct cam_devq {int send_queue; int send_mtx; } ;
struct TYPE_8__ {struct cam_devq* devq; } ;


 int FUNC_0 (struct cam_ed*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct cam_ed*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct cam_ed *VAR_2, u_int VAR_3)
{
 struct cam_devq *VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_2->sim->devq;
 FUNC_3(&VAR_4->send_mtx, VAR_1);
 FUNC_0(VAR_2, VAR_0,
     ("xpt_freeze_devq_device(%d) %u->%u\n", VAR_3,
     VAR_2->ccbq.queue.qfrozen_cnt, VAR_2->ccbq.queue.qfrozen_cnt + VAR_3));
 VAR_5 = (VAR_2->ccbq.queue.qfrozen_cnt += VAR_3);

 if (FUNC_2(VAR_2))
  FUNC_1(&VAR_4->send_queue, VAR_2->devq_entry.index);
 return (VAR_5);
}
