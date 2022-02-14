
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cam_ed {TYPE_1__* sim; } ;
struct cam_devq {int send_mtx; } ;
struct TYPE_2__ {struct cam_devq* devq; } ;


 int FUNC_0 (struct cam_ed*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct cam_ed*,int,int ) ;
 int FUNC_3 (struct cam_devq*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3)
{
 struct cam_ed *VAR_4;
 struct cam_devq *VAR_5;

 VAR_4 = (struct cam_ed *)VAR_3;
 FUNC_0(VAR_4, VAR_0, ("xpt_release_devq_timeout\n"));
 VAR_5 = VAR_4->sim->devq;
 FUNC_1(&VAR_5->send_mtx, VAR_1);
 if (FUNC_2(VAR_4, 1, VAR_2))
  FUNC_3(VAR_5);
}
