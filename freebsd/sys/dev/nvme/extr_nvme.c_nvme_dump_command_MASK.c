
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct nvme_command {int opc; int fuse; int cid; int rsvd2; int rsvd3; int nsid; int cdw15; int cdw14; int cdw13; int cdw12; int cdw11; int cdw10; int prp2; int prp1; int mptr; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int,int,int,int,int ,int ,int ,int,int,int,int,int,int) ;

void
FUNC_3(struct nvme_command *VAR_0)
{

 FUNC_2(
"opc:%x f:%x cid:%x nsid:%x r2:%x r3:%x mptr:%jx prp1:%jx prp2:%jx cdw:%x %x %x %x %x %x\n",
     VAR_0->opc, VAR_0->fuse, VAR_0->cid, FUNC_0(VAR_0->nsid),
     VAR_0->rsvd2, VAR_0->rsvd3,
     (uintmax_t)FUNC_1(VAR_0->mptr), (uintmax_t)FUNC_1(VAR_0->prp1), (uintmax_t)FUNC_1(VAR_0->prp2),
     FUNC_0(VAR_0->cdw10), FUNC_0(VAR_0->cdw11), FUNC_0(VAR_0->cdw12),
     FUNC_0(VAR_0->cdw13), FUNC_0(VAR_0->cdw14), FUNC_0(VAR_0->cdw15));
}
