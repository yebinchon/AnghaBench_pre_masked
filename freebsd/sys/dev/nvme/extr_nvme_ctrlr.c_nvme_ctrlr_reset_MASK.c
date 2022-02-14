
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_controller {int reset_task; int taskqueue; scalar_t__ is_failed; int is_resetting; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(struct nvme_controller *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(&VAR_0->is_resetting, 0, 1);

 if (VAR_1 == 0 || VAR_0->is_failed)





  return;

 FUNC_1(VAR_0->taskqueue, &VAR_0->reset_task);
}
