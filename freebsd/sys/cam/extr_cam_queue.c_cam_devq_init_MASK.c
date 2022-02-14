
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_devq {int send_openings; scalar_t__ send_active; int send_queue; int send_mtx; } ;


 int VAR_0 ;
 int FUNC_0 (struct cam_devq*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;

int
FUNC_3(struct cam_devq *VAR_1, int VAR_2, int VAR_3)
{

 FUNC_0(VAR_1, sizeof(*VAR_1));
 FUNC_2(&VAR_1->send_mtx, "CAM queue lock", ((void*)0), VAR_0);
 if (FUNC_1(&VAR_1->send_queue, VAR_2) != 0)
  return (1);
 VAR_1->send_openings = VAR_3;
 VAR_1->send_active = 0;
 return (0);
}
