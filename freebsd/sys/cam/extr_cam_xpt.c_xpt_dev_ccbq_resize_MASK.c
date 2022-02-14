
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct cam_path {struct cam_ed* device; } ;
struct cam_ed {int flags; int inq_flags; int tag_saved_openings; TYPE_2__* sim; int ccbq; } ;
struct TYPE_4__ {TYPE_1__* devq; } ;
struct TYPE_3__ {int send_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

u_int32_t
FUNC_3(struct cam_path *VAR_2, int VAR_3)
{
 int VAR_4;
 struct cam_ed *VAR_5;

 VAR_5 = VAR_2->device;
 FUNC_1(&VAR_5->sim->devq->send_mtx);
 VAR_4 = FUNC_0(&VAR_5->ccbq, VAR_3);
 FUNC_2(&VAR_5->sim->devq->send_mtx);
 if ((VAR_5->flags & VAR_0) != 0
  || (VAR_5->inq_flags & VAR_1) != 0)
  VAR_5->tag_saved_openings = VAR_3;
 return (VAR_4);
}
