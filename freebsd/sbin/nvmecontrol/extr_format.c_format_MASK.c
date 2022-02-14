
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {void* cdw10; void* nsid; int opc; } ;
struct nvme_pt_command {int cpl; TYPE_1__ cmd; } ;
struct nvme_namespace_data {int flbas; int nlbaf; int dps; } ;
struct nvme_controller_data {int oacs; int fna; } ;
struct cmd {int dummy; } ;
typedef int pt ;
struct TYPE_4__ {int Cflag; int ses; char* dev; int lbaf; int ms; int pi; int pil; scalar_t__ Eflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int,char**,struct cmd const*) ;
 scalar_t__ FUNC_1 (int,char**,struct cmd const*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char**,scalar_t__*) ;
 void* FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int,int ,struct nvme_pt_command*) ;
 int FUNC_11 (struct nvme_pt_command*,int ,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (char const*,int*,int,int) ;
 TYPE_2__ VAR_22 ;
 int FUNC_14 (int,struct nvme_controller_data*) ;
 int FUNC_15 (int,scalar_t__,struct nvme_namespace_data*) ;
 int VAR_23 ;

__attribute__((used)) static void
FUNC_16(const struct cmd *VAR_24, int VAR_25, char *VAR_26[])
{
 struct nvme_controller_data VAR_27;
 struct nvme_namespace_data VAR_28;
 struct nvme_pt_command VAR_29;
 char *VAR_30;
 const char *VAR_31;
 uint32_t VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37, VAR_38;

 if (FUNC_1(VAR_25, VAR_26, VAR_24))
  return;

 if ((int)VAR_22.Eflag + VAR_22.Cflag + (VAR_22.ses != VAR_20) > 1) {
  FUNC_6(VAR_23,
      "Only one of -E, -C or -s may be specified\n");
  FUNC_0(VAR_25, VAR_26, VAR_24);
 }

 VAR_31 = VAR_22.dev;
 VAR_33 = VAR_22.lbaf;
 VAR_34 = VAR_22.ms;
 VAR_35 = VAR_22.pi;
 VAR_36 = VAR_22.pil;
 if (VAR_22.Eflag)
  VAR_37 = VAR_21;
 else if (VAR_22.Cflag)
  VAR_37 = VAR_19;
 else
  VAR_37 = VAR_22.ses;

 FUNC_13(VAR_31, &VAR_38, 1, 1);
 FUNC_8(VAR_38, &VAR_30, &VAR_32);
 if (VAR_32 == 0) {
  VAR_32 = VAR_8;
 } else {






  FUNC_2(VAR_38);
  FUNC_13(VAR_30, &VAR_38, 1, 1);
 }
 FUNC_7(VAR_30);


 FUNC_14(VAR_38, &VAR_27);
 if (((VAR_27.oacs >> VAR_7) &
     VAR_6) == 0)
  FUNC_4(1, "controller does not support format");
 if (((VAR_27.fna >> VAR_1) &
     VAR_0) == 0 && VAR_37 == VAR_19)
  FUNC_4(1, "controller does not support cryptographic erase");

 if (VAR_32 != VAR_8) {
  if (((VAR_27.fna >> VAR_5) &
      VAR_4) && VAR_37 == VAR_20)
   FUNC_4(1, "controller does not support per-NS format");
  if (((VAR_27.fna >> VAR_3) &
      VAR_2) && VAR_37 != VAR_20)
   FUNC_4(1, "controller does not support per-NS erase");


  FUNC_15(VAR_38, VAR_32, &VAR_28);
  if (VAR_33 < 0)
   VAR_33 = (VAR_28.flbas >> VAR_16)
       & VAR_15;
  if (VAR_33 > VAR_28.nlbaf)
   FUNC_4(1, "LBA format is out of range");
  if (VAR_34 < 0)
   VAR_34 = (VAR_28.flbas >> VAR_14)
       & VAR_13;
  if (VAR_35 < 0)
   VAR_35 = (VAR_28.dps >> VAR_10)
       & VAR_9;
  if (VAR_36 < 0)
   VAR_36 = (VAR_28.dps >> VAR_12)
       & VAR_11;
 } else {


  if (VAR_33 < 0)
   VAR_33 = 0;
  if (VAR_34 < 0)
   VAR_34 = 0;
  if (VAR_35 < 0)
   VAR_35 = 0;
  if (VAR_36 < 0)
   VAR_36 = 0;
 }

 FUNC_11(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.cmd.opc = VAR_17;
 VAR_29.cmd.nsid = FUNC_9(VAR_32);
 VAR_29.cmd.cdw10 = FUNC_9((VAR_37 << 9) + (VAR_36 << 8) + (VAR_35 << 5) +
     (VAR_34 << 4) + VAR_33);

 if (FUNC_10(VAR_38, VAR_18, &VAR_29) < 0)
  FUNC_3(1, "format request failed");

 if (FUNC_12(&VAR_29.cpl))
  FUNC_4(1, "format request returned error");
 FUNC_2(VAR_38);
 FUNC_5(0);
}
