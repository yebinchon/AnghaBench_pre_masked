
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_request {int dummy; } ;
struct nvme_controller {int adminq; } ;


 int FUNC_0 (int *,struct nvme_request*) ;

void
FUNC_1(struct nvme_controller *VAR_0,
    struct nvme_request *VAR_1)
{

 FUNC_0(&VAR_0->adminq, VAR_1);
}
