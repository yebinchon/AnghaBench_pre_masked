
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int is_initialized; int config_hook; int adminq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct nvme_controller*) ;
 int FUNC_3 (struct nvme_controller*) ;
 scalar_t__ FUNC_4 (struct nvme_controller*) ;
 int FUNC_5 (struct nvme_controller*,int) ;
 int FUNC_6 (struct nvme_controller*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nvme_controller*) ;

void
FUNC_9(void *VAR_0)
{
 struct nvme_controller *VAR_1 = VAR_0;

 FUNC_7(&VAR_1->adminq);
 FUNC_1(&VAR_1->adminq);

 if (FUNC_4(VAR_1) == 0 &&
     FUNC_2(VAR_1) == 0)
  FUNC_5(VAR_1, 0);
 else
  FUNC_3(VAR_1);

 FUNC_8(VAR_1);
 FUNC_0(&VAR_1->config_hook);

 VAR_1->is_initialized = 1;
 FUNC_6(VAR_1);
}
