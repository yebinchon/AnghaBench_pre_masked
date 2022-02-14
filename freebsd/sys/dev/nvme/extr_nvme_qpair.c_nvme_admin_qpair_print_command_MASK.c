
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_qpair {int id; int ctrlr; } ;
struct nvme_command {int cdw11; int cdw10; int nsid; int cid; int opc; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct nvme_qpair *VAR_0,
    struct nvme_command *VAR_1)
{

 FUNC_2(VAR_0->ctrlr, "%s (%02x) sqid:%d cid:%d nsid:%x "
     "cdw10:%08x cdw11:%08x\n",
     FUNC_0(VAR_1->opc), VAR_1->opc, VAR_0->id, VAR_1->cid,
     FUNC_1(VAR_1->nsid), FUNC_1(VAR_1->cdw10), FUNC_1(VAR_1->cdw11));
}
