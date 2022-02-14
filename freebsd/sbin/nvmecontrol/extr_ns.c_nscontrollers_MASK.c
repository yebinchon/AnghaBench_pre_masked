
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int cdw10; int opc; } ;
struct nvme_pt_command {int len; int is_read; int cpl; int * buf; TYPE_1__ cmd; } ;
struct nvme_controller_data {int oacs; } ;
struct cmd {int dummy; } ;
typedef int pt ;
typedef int clist ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,char**,struct cmd const*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int ,struct nvme_pt_command*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int*,int,int) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int,struct nvme_controller_data*) ;

__attribute__((used)) static void
FUNC_12(const struct cmd *VAR_5, int VAR_6, char *VAR_7[])
{
 struct nvme_pt_command VAR_8;
 struct nvme_controller_data VAR_9;
 int VAR_10, VAR_11, VAR_12;
 uint16_t VAR_13[2048];

 if (FUNC_0(VAR_6, VAR_7, VAR_5))
  return;
 FUNC_9(VAR_4.dev, &VAR_10, 1, 1);
 FUNC_11(VAR_10, &VAR_9);


 if (((VAR_9.oacs >> VAR_1) &
     VAR_0) == 0)
  FUNC_2(1, "controller does not support namespace management");

 FUNC_7(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cmd.opc = VAR_2;
 VAR_8.cmd.cdw10 = FUNC_4(0x13);
 VAR_8.buf = VAR_13;
 VAR_8.len = sizeof(VAR_13);
 VAR_8.is_read = 1;
 if (FUNC_5(VAR_10, VAR_3, &VAR_8) < 0)
  FUNC_1(1, "identify request failed");
 if (FUNC_8(&VAR_8.cpl))
  FUNC_2(1, "identify request returned error");

 VAR_12 = FUNC_6(VAR_13[0]);
 FUNC_10("NVM subsystem includes %d controller(s):\n", VAR_12);
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++)
  FUNC_10("  0x%04x\n", FUNC_6(VAR_13[VAR_11 + 1]));

 FUNC_3(0);
}
