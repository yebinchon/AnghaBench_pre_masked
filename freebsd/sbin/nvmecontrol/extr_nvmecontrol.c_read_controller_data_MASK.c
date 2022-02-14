
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cdw10; int opc; } ;
struct nvme_pt_command {int len; int is_read; int cpl; struct nvme_controller_data* buf; TYPE_1__ cmd; } ;
struct nvme_controller_data {int dummy; } ;
typedef int pt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int ,struct nvme_pt_command*) ;
 int FUNC_4 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct nvme_controller_data*) ;

void
FUNC_7(int VAR_2, struct nvme_controller_data *VAR_3)
{
 struct nvme_pt_command VAR_4;

 FUNC_4(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.cmd.opc = VAR_0;
 VAR_4.cmd.cdw10 = FUNC_2(1);
 VAR_4.buf = VAR_3;
 VAR_4.len = sizeof(*VAR_3);
 VAR_4.is_read = 1;

 if (FUNC_3(VAR_2, VAR_1, &VAR_4) < 0)
  FUNC_0(1, "identify request failed");


 FUNC_6(VAR_3);

 if (FUNC_5(&VAR_4.cpl))
  FUNC_1(1, "identify request returned error");
}
