
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int ;
struct cam_sim {struct cam_devq* devq; } ;
struct TYPE_2__ {int qfrozen_cnt; } ;
struct cam_devq {int send_mtx; TYPE_1__ send_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

u_int32_t
FUNC_2(struct cam_sim *VAR_0, u_int VAR_1)
{
 struct cam_devq *VAR_2;
 uint32_t VAR_3;

 VAR_2 = VAR_0->devq;
 FUNC_0(&VAR_2->send_mtx);
 VAR_3 = (VAR_2->send_queue.qfrozen_cnt += VAR_1);
 FUNC_1(&VAR_2->send_mtx);
 return (VAR_3);
}
