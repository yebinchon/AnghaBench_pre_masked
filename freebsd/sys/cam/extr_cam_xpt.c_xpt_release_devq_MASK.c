
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct cam_path {struct cam_ed* device; } ;
struct cam_ed {TYPE_1__* sim; } ;
struct cam_devq {int send_mtx; } ;
struct TYPE_2__ {struct cam_devq* devq; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct cam_ed*,int ,int) ;
 int FUNC_4 (struct cam_devq*) ;

void
FUNC_5(struct cam_path *VAR_1, u_int VAR_2, int VAR_3)
{
 struct cam_ed *VAR_4;
 struct cam_devq *VAR_5;

 FUNC_0(VAR_1, VAR_0, ("xpt_release_devq(%d, %d)\n",
     VAR_2, VAR_3));
 VAR_4 = VAR_1->device;
 VAR_5 = VAR_4->sim->devq;
 FUNC_1(&VAR_5->send_mtx);
 if (FUNC_3(VAR_4, VAR_2, VAR_3))
  FUNC_4(VAR_4->sim->devq);
 FUNC_2(&VAR_5->send_mtx);
}
