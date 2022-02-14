
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {void* cdw10; void* nsid; int opc; } ;
struct nvme_pt_command {scalar_t__* buf; int len; int is_read; int cpl; TYPE_1__ cmd; } ;
struct nvme_controller_data {int oacs; } ;
struct cmd {int dummy; } ;
typedef int pt ;
typedef int list ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 scalar_t__ FUNC_0 (int,char**,struct cmd const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ,struct nvme_pt_command*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int*,int,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,struct nvme_controller_data*) ;

__attribute__((used)) static void
FUNC_12(const struct cmd *VAR_5, int VAR_6, char *VAR_7[])
{
 struct nvme_pt_command VAR_8;
 struct nvme_controller_data VAR_9;
 int VAR_10, VAR_11;
 uint32_t VAR_12[1024];

 if (FUNC_0(VAR_6, VAR_7, VAR_5))
  return;
 FUNC_9(VAR_4.dev, &VAR_10, 1, 1);
 FUNC_11(VAR_10, &VAR_9);


 if (((VAR_9.oacs >> VAR_1) &
     VAR_0) == 0)
  FUNC_2(1, "controller does not support namespace management");

 FUNC_7(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cmd.opc = VAR_2;
 VAR_8.cmd.nsid = FUNC_4(0);
 VAR_8.cmd.cdw10 = FUNC_4(0x10);
 VAR_8.buf = VAR_12;
 VAR_8.len = sizeof(VAR_12);
 VAR_8.is_read = 1;
 if (FUNC_5(VAR_10, VAR_3, &VAR_8) < 0)
  FUNC_1(1, "identify request failed");
 if (FUNC_8(&VAR_8.cpl))
  FUNC_2(1, "identify request returned error");

 FUNC_10("Allocated namespaces:\n");
 for (VAR_11 = 0; VAR_12[VAR_11] != 0; VAR_11++)
  FUNC_10("%10d\n", FUNC_6(VAR_12[VAR_11]));

 FUNC_3(0);
}
