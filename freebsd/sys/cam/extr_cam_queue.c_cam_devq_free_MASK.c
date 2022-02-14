
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cam_devq {int send_mtx; int send_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct cam_devq*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct cam_devq *VAR_1)
{

 FUNC_0(&VAR_1->send_queue);
 FUNC_2(&VAR_1->send_mtx);
 FUNC_1(VAR_1, VAR_0);
}
