
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_request {int dummy; } ;
struct nvme_qpair {int lock; } ;


 int FUNC_0 (struct nvme_qpair*,struct nvme_request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct nvme_qpair *VAR_0, struct nvme_request *VAR_1)
{

 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->lock);
}
