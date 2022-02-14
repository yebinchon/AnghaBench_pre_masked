
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_qpair {int id; int ctrlr; } ;
struct nvme_command {int opc; int nsid; int cid; int cdw12; int cdw10; int cdw11; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int,int ,int,...) ;

__attribute__((used)) static void
FUNC_3(struct nvme_qpair *VAR_0,
    struct nvme_command *VAR_1)
{

 switch (VAR_1->opc) {
 case 130:
 case 136:
 case 129:
 case 139:
 case 128:
 case 131:
  FUNC_2(VAR_0->ctrlr, "%s sqid:%d cid:%d nsid:%d "
      "lba:%llu len:%d\n",
      FUNC_0(VAR_1->opc), VAR_0->id, VAR_1->cid, FUNC_1(VAR_1->nsid),
      ((unsigned long long)FUNC_1(VAR_1->cdw11) << 32) + FUNC_1(VAR_1->cdw10),
      (FUNC_1(VAR_1->cdw12) & 0xFFFF) + 1);
  break;
 case 137:
 case 138:
 case 134:
 case 132:
 case 135:
 case 133:
  FUNC_2(VAR_0->ctrlr, "%s sqid:%d cid:%d nsid:%d\n",
      FUNC_0(VAR_1->opc), VAR_0->id, VAR_1->cid, FUNC_1(VAR_1->nsid));
  break;
 default:
  FUNC_2(VAR_0->ctrlr, "%s (%02x) sqid:%d cid:%d nsid:%d\n",
      FUNC_0(VAR_1->opc), VAR_1->opc, VAR_0->id,
      VAR_1->cid, FUNC_1(VAR_1->nsid));
  break;
 }
}
