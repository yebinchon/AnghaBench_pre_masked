
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {void* cdw10; void* nsid; int opc; } ;
struct nvme_pt_command {int len; int is_read; int cpl; struct nvme_namespace_data* buf; TYPE_1__ cmd; } ;
struct nvme_namespace_data {int dummy; } ;
typedef int pt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int,int ,struct nvme_pt_command*) ;
 int FUNC_4 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct nvme_namespace_data*) ;

void
FUNC_7(int VAR_2, uint32_t VAR_3, struct nvme_namespace_data *VAR_4)
{
 struct nvme_pt_command VAR_5;

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd.opc = VAR_0;
 VAR_5.cmd.nsid = FUNC_2(VAR_3);
 VAR_5.cmd.cdw10 = FUNC_2(0);
 VAR_5.buf = VAR_4;
 VAR_5.len = sizeof(*VAR_4);
 VAR_5.is_read = 1;

 if (FUNC_3(VAR_2, VAR_1, &VAR_5) < 0)
  FUNC_0(1, "identify request failed");


 FUNC_6(VAR_4);

 if (FUNC_5(&VAR_5.cpl))
  FUNC_1(1, "identify request returned error");
}
