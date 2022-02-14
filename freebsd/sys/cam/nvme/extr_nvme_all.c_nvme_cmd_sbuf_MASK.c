
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct nvme_command {int cdw15; int cdw14; int cdw13; int cdw12; int cdw11; int cdw10; scalar_t__ prp2; scalar_t__ prp1; int nsid; int fuse; int opc; } ;


 int FUNC_0 (struct sbuf*,char*,int ,int ,int ,unsigned long long,unsigned long long,int ,int ,int ,int ,int ,int ) ;

void
FUNC_1(const struct nvme_command *VAR_0, struct sbuf *VAR_1)
{





 FUNC_0(VAR_1,
     "opc=%x fuse=%x nsid=%x prp1=%llx prp2=%llx cdw=%x %x %x %x %x %x",
     VAR_0->opc, VAR_0->fuse, VAR_0->nsid,
     (unsigned long long)VAR_0->prp1, (unsigned long long)VAR_0->prp2,
     VAR_0->cdw10, VAR_0->cdw11, VAR_0->cdw12,
     VAR_0->cdw13, VAR_0->cdw14, VAR_0->cdw15);
}
