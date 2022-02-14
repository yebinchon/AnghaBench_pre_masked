
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct nvme_qpair {int ctrlr; } ;
struct nvme_completion {int cdw0; int cid; int sqid; int status; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct nvme_qpair *VAR_0,
    struct nvme_completion *VAR_1)
{
 uint16_t VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_1->status);
 VAR_3 = FUNC_0(VAR_1->status);

 FUNC_3(VAR_0->ctrlr, "%s (%02x/%02x) sqid:%d cid:%d cdw0:%x\n",
     FUNC_2(VAR_2, VAR_3), VAR_2, VAR_3, VAR_1->sqid, VAR_1->cid,
     VAR_1->cdw0);
}
