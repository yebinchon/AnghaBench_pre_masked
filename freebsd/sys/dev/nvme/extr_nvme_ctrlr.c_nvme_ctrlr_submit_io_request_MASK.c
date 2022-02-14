
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_request {int dummy; } ;
struct nvme_qpair {int dummy; } ;
struct nvme_controller {struct nvme_qpair* ioq; } ;


 size_t FUNC_0 (struct nvme_controller*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nvme_qpair*,struct nvme_request*) ;

void
FUNC_2(struct nvme_controller *VAR_1,
    struct nvme_request *VAR_2)
{
 struct nvme_qpair *VAR_3;

 VAR_3 = &VAR_1->ioq[FUNC_0(VAR_1, VAR_0)];
 FUNC_1(VAR_3, VAR_2);
}
