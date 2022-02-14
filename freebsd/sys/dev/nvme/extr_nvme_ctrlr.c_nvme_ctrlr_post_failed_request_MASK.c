
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_request {int dummy; } ;
struct nvme_controller {int fail_req_task; int taskqueue; int lock; int fail_req; } ;


 int FUNC_0 (int *,struct nvme_request*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(struct nvme_controller *VAR_1,
    struct nvme_request *VAR_2)
{

 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->fail_req, VAR_2, VAR_0);
 FUNC_2(&VAR_1->lock);
 FUNC_3(VAR_1->taskqueue, &VAR_1->fail_req_task);
}
