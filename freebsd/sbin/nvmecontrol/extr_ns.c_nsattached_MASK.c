
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {void* cdw10; void* nsid; int opc; } ;
struct nvme_pt_command {int len; int is_read; int cpl; int * buf; TYPE_1__ cmd; } ;
struct nvme_controller_data {int oacs; } ;
struct cmd {int dummy; } ;
typedef int pt ;
typedef int clist ;
struct TYPE_4__ {scalar_t__ nsid; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int ,struct nvme_pt_command*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int ,int*,int,int) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int,struct nvme_controller_data*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_14(const struct cmd *VAR_7, int VAR_8, char *VAR_9[])
{
 struct nvme_pt_command VAR_10;
 struct nvme_controller_data VAR_11;
 int VAR_12, VAR_13, VAR_14;
 uint16_t VAR_15[2048];

 if (FUNC_1(VAR_8, VAR_9, VAR_7))
  return;
 if (VAR_5.nsid == VAR_0) {
  FUNC_5(VAR_6, "No valid NSID specified\n");
  FUNC_0(VAR_8, VAR_9, VAR_7);
 }
 FUNC_11(VAR_5.dev, &VAR_12, 1, 1);
 FUNC_13(VAR_12, &VAR_11);


 if (((VAR_11.oacs >> VAR_2) &
     VAR_1) == 0)
  FUNC_3(1, "controller does not support namespace management");

 FUNC_9(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cmd.opc = VAR_3;
 VAR_10.cmd.nsid = FUNC_6(VAR_5.nsid);
 VAR_10.cmd.cdw10 = FUNC_6(0x12);
 VAR_10.buf = VAR_15;
 VAR_10.len = sizeof(VAR_15);
 VAR_10.is_read = 1;
 if (FUNC_7(VAR_12, VAR_4, &VAR_10) < 0)
  FUNC_2(1, "identify request failed");
 if (FUNC_10(&VAR_10.cpl))
  FUNC_3(1, "identify request returned error");

 VAR_14 = FUNC_8(VAR_15[0]);
 FUNC_12("Attached %d controller(s):\n", VAR_14);
 for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
  FUNC_12("  0x%04x\n", FUNC_8(VAR_15[VAR_13 + 1]));

 FUNC_4(0);
}
