
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int timeout; TYPE_2__* path; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef int uint32_t ;
typedef int u_int32_t ;
struct cam_sim {struct cam_devq* devq; } ;
struct TYPE_8__ {scalar_t__ dev_openings; } ;
struct cam_ed {TYPE_4__ ccbq; } ;
struct cam_devq {scalar_t__ send_openings; int send_mtx; } ;
struct TYPE_6__ {struct cam_ed* device; TYPE_1__* bus; } ;
struct TYPE_5__ {struct cam_sim* sim; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cam_sim*) ;

uint32_t
FUNC_4(union ccb *VAR_0)
{
 u_int32_t VAR_1;
 struct cam_sim *VAR_2;
 struct cam_devq *VAR_3;
 struct cam_ed *VAR_4;

 VAR_1 = VAR_0->ccb_h.timeout * 10;
 VAR_2 = VAR_0->ccb_h.path->bus->sim;
 VAR_3 = VAR_2->devq;
 VAR_4 = VAR_0->ccb_h.path->device;





 FUNC_1(&VAR_3->send_mtx);
 VAR_4->ccbq.dev_openings--;
 while((VAR_3->send_openings <= 0 || VAR_4->ccbq.dev_openings < 0) &&
     (--VAR_1 > 0)) {
  FUNC_2(&VAR_3->send_mtx);
  FUNC_0(100);
  FUNC_3(VAR_2);
  FUNC_1(&VAR_3->send_mtx);
 }
 VAR_4->ccbq.dev_openings++;
 FUNC_2(&VAR_3->send_mtx);

 return (VAR_1);
}
