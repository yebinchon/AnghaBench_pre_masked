
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int u_int ;
struct TYPE_3__ {void* cdw10; void* nsid; int opc; } ;
struct nvme_pt_command {int len; int is_read; int cpl; struct nvme_namespace_data* buf; TYPE_1__ cmd; } ;
struct nvme_namespace_data {int dummy; } ;
struct nvme_controller_data {int oacs; } ;
struct cmd {int dummy; } ;
typedef int pt ;
typedef int nsdata ;
struct TYPE_4__ {scalar_t__ nsid; int verbose; scalar_t__ hex; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 void* FUNC_7 (int) ;
 TYPE_2__ VAR_5 ;
 scalar_t__ FUNC_8 (int,int ,struct nvme_pt_command*) ;
 int FUNC_9 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct nvme_namespace_data*) ;
 int FUNC_12 (int ,int*,int,int) ;
 int FUNC_13 (struct nvme_namespace_data*,int) ;
 int FUNC_14 (struct nvme_namespace_data*) ;
 int FUNC_15 (int,struct nvme_controller_data*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_16(const struct cmd *VAR_7, int VAR_8, char *VAR_9[])
{
 struct nvme_pt_command VAR_10;
 struct nvme_controller_data VAR_11;
 struct nvme_namespace_data VAR_12;
 uint8_t *VAR_13;
 int VAR_14;
 u_int VAR_15;

 if (FUNC_1(VAR_8, VAR_9, VAR_7))
  return;
 if (VAR_5.nsid == VAR_0) {
  FUNC_6(VAR_6, "No valid NSID specified\n");
  FUNC_0(VAR_8, VAR_9, VAR_7);
 }
 FUNC_12(VAR_5.dev, &VAR_14, 1, 1);
 FUNC_15(VAR_14, &VAR_11);


 if (((VAR_11.oacs >> VAR_2) &
     VAR_1) == 0)
  FUNC_4(1, "controller does not support namespace management");

 FUNC_9(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.cmd.opc = VAR_3;
 VAR_10.cmd.nsid = FUNC_7(VAR_5.nsid);
 VAR_10.cmd.cdw10 = FUNC_7(0x11);
 VAR_10.buf = &VAR_12;
 VAR_10.len = sizeof(VAR_12);
 VAR_10.is_read = 1;

 if (FUNC_8(VAR_14, VAR_4, &VAR_10) < 0)
  FUNC_3(1, "identify request failed");

 if (FUNC_10(&VAR_10.cpl))
  FUNC_4(1, "identify request returned error");

 FUNC_2(VAR_14);

 VAR_13 = (uint8_t *)&VAR_12;
 for (VAR_15 = 0; VAR_15 < sizeof(VAR_12); VAR_15++) {
  if (VAR_13[VAR_15] != 0)
   break;
 }
 if (VAR_15 == sizeof(VAR_12))
  FUNC_4(1, "namespace %d is not allocated", VAR_5.nsid);


 FUNC_11(&VAR_12);

 if (VAR_5.hex) {
  VAR_15 = sizeof(struct nvme_namespace_data);
  if (!VAR_5.verbose) {
   for (; VAR_15 > 384; VAR_15--) {
    if (VAR_13[VAR_15 - 1] != 0)
     break;
   }
  }
  FUNC_13(&VAR_12, VAR_15);
  FUNC_5(0);
 }

 FUNC_14(&VAR_12);
 FUNC_5(0);
}
