
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {void* cdw10; void* nsid; int opc; } ;
struct nvme_pt_command {scalar_t__* buf; int len; int is_read; int cpl; TYPE_1__ cmd; } ;
struct cmd {int dummy; } ;
typedef int pt ;
typedef int list ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
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

__attribute__((used)) static void
FUNC_11(const struct cmd *VAR_3, int VAR_4, char *VAR_5[])
{
 struct nvme_pt_command VAR_6;
 int VAR_7, VAR_8;
 uint32_t VAR_9[1024];

 if (FUNC_0(VAR_4, VAR_5, VAR_3))
  return;
 FUNC_9(VAR_2.dev, &VAR_7, 1, 1);

 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd.opc = VAR_0;
 VAR_6.cmd.nsid = FUNC_4(0);
 VAR_6.cmd.cdw10 = FUNC_4(0x02);
 VAR_6.buf = VAR_9;
 VAR_6.len = sizeof(VAR_9);
 VAR_6.is_read = 1;
 if (FUNC_5(VAR_7, VAR_1, &VAR_6) < 0)
  FUNC_1(1, "identify request failed");
 if (FUNC_8(&VAR_6.cpl))
  FUNC_2(1, "identify request returned error");

 FUNC_10("Active namespaces:\n");
 for (VAR_8 = 0; VAR_9[VAR_8] != 0; VAR_8++)
  FUNC_10("%10d\n", FUNC_6(VAR_9[VAR_8]));

 FUNC_3(0);
}
