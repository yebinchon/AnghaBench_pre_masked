
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct cam_path {struct cam_ed* device; } ;
struct cam_ed {TYPE_1__* sim; } ;
struct cam_devq {int send_mtx; } ;
struct TYPE_2__ {struct cam_devq* devq; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cam_ed*,int ) ;

u_int32_t
FUNC_4(struct cam_path *VAR_1, u_int VAR_2)
{
 struct cam_ed *VAR_3 = VAR_1->device;
 struct cam_devq *VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_3->sim->devq;
 FUNC_1(&VAR_4->send_mtx);
 FUNC_0(VAR_1, VAR_0, ("xpt_freeze_devq(%d)\n", VAR_2));
 VAR_5 = FUNC_3(VAR_3, VAR_2);
 FUNC_2(&VAR_4->send_mtx);
 return (VAR_5);
}
