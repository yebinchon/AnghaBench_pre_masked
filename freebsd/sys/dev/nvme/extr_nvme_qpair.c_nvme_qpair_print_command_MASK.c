
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct nvme_qpair {scalar_t__ id; int ctrlr; } ;
struct nvme_command {int cdw15; int cdw14; int cdw13; int cdw12; int cdw11; int cdw10; scalar_t__ prp2; scalar_t__ prp1; scalar_t__ mptr; int rsvd3; int rsvd2; int nsid; } ;


 int FUNC_0 (struct nvme_qpair*,struct nvme_command*) ;
 int FUNC_1 (struct nvme_qpair*,struct nvme_command*) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct nvme_qpair *VAR_1, struct nvme_command *VAR_2)
{
 if (VAR_1->id == 0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
 if (VAR_0) {
  FUNC_2(VAR_1->ctrlr,
      "nsid:%#x rsvd2:%#x rsvd3:%#x mptr:%#jx prp1:%#jx prp2:%#jx\n",
      VAR_2->nsid, VAR_2->rsvd2, VAR_2->rsvd3, (uintmax_t)VAR_2->mptr,
      (uintmax_t)VAR_2->prp1, (uintmax_t)VAR_2->prp2);
  FUNC_2(VAR_1->ctrlr,
      "cdw10: %#x cdw11:%#x cdw12:%#x cdw13:%#x cdw14:%#x cdw15:%#x\n",
      VAR_2->cdw10, VAR_2->cdw11, VAR_2->cdw12, VAR_2->cdw13, VAR_2->cdw14,
      VAR_2->cdw15);
 }
}
