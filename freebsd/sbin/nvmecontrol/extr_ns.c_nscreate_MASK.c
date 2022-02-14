
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int cdw0; } ;
struct TYPE_4__ {int cdw10; int opc; } ;
struct nvme_pt_command {scalar_t__ nsze; scalar_t__ ncap; int flbas; int dps; int nmic; int len; TYPE_2__ cpl; scalar_t__ is_read; struct nvme_pt_command* buf; TYPE_1__ cmd; } ;
struct nvme_namespace_data {scalar_t__ nsze; scalar_t__ ncap; int flbas; int dps; int nmic; int len; TYPE_2__ cpl; scalar_t__ is_read; struct nvme_namespace_data* buf; TYPE_1__ cmd; } ;
struct nvme_controller_data {int oacs; scalar_t__ mic; } ;
struct cmd {int dummy; } ;
typedef int pt ;
typedef int nsdata ;
struct TYPE_6__ {scalar_t__ cap; scalar_t__ nsze; int nmic; int flbas; int lbaf; int mset; int dps; int pi; int pil; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 TYPE_3__ VAR_18 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ,struct nvme_pt_command*) ;
 int FUNC_8 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct nvme_pt_command*) ;
 int FUNC_11 (int ,int*,int,int) ;
 size_t VAR_19 ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (int,struct nvme_controller_data*) ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_14(const struct cmd *VAR_21, int VAR_22, char *VAR_23[])
{
 struct nvme_pt_command VAR_24;
 struct nvme_controller_data VAR_25;
 struct nvme_namespace_data VAR_26;
 int VAR_27, VAR_28;

 if (FUNC_1(VAR_22, VAR_23, VAR_21))
  return;

 if (VAR_18.cap == VAR_1)
  VAR_18.cap = VAR_18.nsze;
 if (VAR_18.nsze == VAR_1) {
  FUNC_4(VAR_20,
      "Size not specified\n");
  FUNC_0(VAR_22, VAR_23, VAR_21);
 }

 FUNC_11(VAR_18.dev, &VAR_27, 1, 1);
 FUNC_13(VAR_27, &VAR_25);


 if (((VAR_25.oacs >> VAR_3) &
     VAR_2) == 0)
  FUNC_2(1, "controller does not support namespace management");


 if (VAR_18.nmic == VAR_0) {
  VAR_18.nmic = VAR_25.mic ? (VAR_12 <<
       VAR_13) : 0;
 }

 FUNC_8(&VAR_26, 0, sizeof(VAR_26));
 VAR_26.nsze = VAR_18.nsze;
 VAR_26.ncap = VAR_18.cap;
 if (VAR_18.flbas == VAR_0)
  VAR_26.flbas = ((VAR_18.lbaf & VAR_10)
      << VAR_11) |
      ((VAR_18.mset & VAR_8)
   << VAR_9);
 else
  VAR_26.flbas = VAR_18.flbas;
 if (VAR_18.dps == VAR_0)
  VAR_26.dps = ((VAR_18.pi & VAR_4)
      << VAR_5) |
      ((VAR_18.pil & VAR_6)
   << VAR_7);
 else
  VAR_26.dps = VAR_18.dps;
 VAR_26.nmic = VAR_18.nmic;
 FUNC_10(&VAR_26);

 FUNC_8(&VAR_24, 0, sizeof(VAR_24));
 VAR_24.cmd.opc = VAR_14;
 VAR_24.cmd.cdw10 = FUNC_6(0);
 VAR_24.buf = &VAR_26;
 VAR_24.len = sizeof(struct nvme_namespace_data);
 VAR_24.is_read = 0;
 if ((VAR_28 = FUNC_7(VAR_27, VAR_15, &VAR_24)) < 0)
  FUNC_2(1, "ioctl request to %s failed: %d", VAR_23[VAR_19], VAR_28);

 if (FUNC_9(&VAR_24.cpl)) {
  FUNC_2(1, "namespace creation failed: %s",
      FUNC_5((VAR_24.cpl.status >> VAR_17) &
      VAR_16));
 }
 FUNC_12("namespace %d created\n", VAR_24.cpl.cdw0);
 FUNC_3(0);
}
